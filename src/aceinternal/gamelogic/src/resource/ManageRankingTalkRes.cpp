#include "Logger.h"
#include "ManageRankingTalkRes.h"
bool ManageRankingTalkRes::loadContent(Document * xml_doc)
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
const RankingTalkInfoMap_t & ManageRankingTalkRes::getRankingTalkInfo()
{
	return m_Ranking_Talk_res_map;
}
bool ManageRankingTalkRes::loadInfo(Element * element)
{
	if (NULL == element)
	{
		return false;
	}
	bool result = true;
	RankingTalkInfo * info = new RankingTalkInfo();
	result = getAttrValue(element,"id", info->id) && result;
	result = getAttrValue(element,"value", info->value) && result;
	RankingTalkInfoMap_t::iterator it = m_Ranking_Talk_res_map.find(info->id);
	if (it != m_Ranking_Talk_res_map.end())
	{
		DEF_LOG_ERROR("failed to load RANKINGTALK, get reduplicate id <%d>\n",info->id);
		return false;
	}
	m_Ranking_Talk_res_map.insert(std::make_pair(info->id, info));
	return result;
}
