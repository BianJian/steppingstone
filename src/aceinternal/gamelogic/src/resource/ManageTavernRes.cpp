#include "Logger.h"
#include "ManageTavernRes.h"

bool ManageTavernRes::loadContent(Document * xml_doc)
{
	if (NULL == xml_doc)
	{
		return false;
	}
	Element * root_ele = xml_doc->get_root();
	if (NULL == root_ele)
	{
		return false;
	}
	bool result = true;
	Elements ele_list = root_ele->get_elements();
	for (Elements::iterator it = ele_list.begin(); it != ele_list.end(); ++it)
	{
		result = loadInfo(*it) && result;
	}
	return result;
}

const TavernInfoMap_t & ManageTavernRes::getTavernInfo()
{
	return m_tavern_res_map;
}

bool ManageTavernRes::loadInfo(Element * element)
{
	if (NULL == element)
	{
		return false;
	}
	bool result = true;
	TavernInfo * info = new TavernInfo();
	result = getAttrValue(element,"level_group", info->level) && result;
	result = getAttrValue(element,"resource1", info->resource1) && result;
	result = getAttrValue(element,"resource1_num", info->resource1_num) && result;
	result = getAttrValue(element,"resource2", info->resource2) && result;
	result = getAttrValue(element,"resource2_num", info->resource2_num) && result;
	result = getAttrValue(element,"resource3", info->resource3) && result;
	result = getAttrValue(element,"resource3_num", info->resource3_num) && result;
	result = getAttrValue(element,"type", info->type) && result;

	uint32 max_level_in_map = 0;
	uint32 map_key = TavernInfo::make_key(info->type, info->level);

	TavernInfoMap_t::reverse_iterator rbegins = m_tavern_res_map.rbegin();
	if (rbegins != m_tavern_res_map.rend() && map_key - info->level < rbegins->first)
		max_level_in_map = rbegins->second->level; 
	else 
		max_level_in_map = info->level;

	
	TavernInfoMap_t::iterator it = m_tavern_res_map.find(map_key);
	if (it != m_tavern_res_map.end())
	{
		DEF_LOG_ERROR("Failed to load tavern.xml, card_level_group_key<%u,%u> is repeat.\n", info->type, info->level);
		return false;
	}

	if (max_level_in_map == info->level)
		m_tavern_res_map.insert(std::make_pair(map_key, info));
	else
	{
		for (uint32 i = max_level_in_map + 1; i < info->level; ++i)
		{
			uint32 keys = TavernInfo::make_key(info->type, i);
			m_tavern_res_map.insert(std::make_pair(keys, rbegins->second));
		}

		m_tavern_res_map.insert(std::make_pair(map_key, info));
	}
	return result;
}