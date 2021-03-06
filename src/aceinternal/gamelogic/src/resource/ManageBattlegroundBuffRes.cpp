#include "Logger.h"
#include "ManageBattlegroundBuffRes.h"
bool ManageBattlegroundBuffRes::loadContent(Document * xml_doc)
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
const BattlegroundBuffInfoMap_t & ManageBattlegroundBuffRes::getBattlegroundBuffInfo()
{
	return m_Battleground_Buff_res_map;
}
bool ManageBattlegroundBuffRes::loadInfo(Element * element)
{
	if (NULL == element)
	{
		return false;
	}
	bool result = true;
	BattlegroundBuffInfo * info = new BattlegroundBuffInfo();
	result = getAttrValue(element,"cost", info->cost) && result;
	result = getAttrValue(element,"probability", info->probability) && result;
	result = getAttrValue(element,"type", info->type) && result;
	result = getAttrValue(element,"rate", info->rate) && result;
	BattlegroundBuffInfoMap_t::iterator it = m_Battleground_Buff_res_map.find(info->type);
	if (it != m_Battleground_Buff_res_map.end())
	{
		DEF_LOG_ERROR("failed to load BATTLEGROUNDBUFF, get reduplicate id <%d>\n",info->type);
		return false;
	}
	m_Battleground_Buff_res_map.insert(std::make_pair(info->type, info));
	return result;
}
