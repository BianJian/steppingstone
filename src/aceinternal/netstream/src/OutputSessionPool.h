
#ifndef OUTPUT_SESSION_POOL_HPP
#define OUTPUT_SESSION_POOL_HPP

#include <ace/Task.h>
#include <boost/unordered_set.hpp>
#include "typedef.h"
#include "CellSession.h"
#include "SessionPool.h"

namespace netstream {

typedef define_unordered_set<CellSession *> CellSessionSet_t;
struct OutputSessionThreadInfo 
{
	OutputSessionThreadInfo(){}
	void addCellSession(CellSession * cell_session)
	{
		ACE_GUARD_RETURN(ACE_Thread_Mutex, guard, mutex, );
		add_cell_session_set.insert(cell_session);
	}
	void writeCellSession(CellSession * cell_session)
	{
		ACE_GUARD_RETURN(ACE_Thread_Mutex, guard, mutex, );
		write_cell_session_set.insert(cell_session);
	}
	void removeCellSession(CellSession * cell_session)
	{
		ACE_GUARD_RETURN(ACE_Thread_Mutex, guard, mutex, );
		remove_cell_session_set.insert(cell_session);
	}

	ACE_Thread_Mutex mutex;
	CellSessionSet_t add_cell_session_set;
	CellSessionSet_t write_cell_session_set;
	CellSessionSet_t remove_cell_session_set;
};

class OutputSessionPool 
	: public ACE_Task<ACE_NULL_SYNCH>
{
public:
	OutputSessionPool();
	~OutputSessionPool();

	int init(int thread_no, ISessionPool * session_pool);
	void stop();
	void finit();

	int svc();

	void handleSession(CellSession * cell_session);
	void removeSession(CellSession * cell_session);
	virtual bool handleOutputStream(Session_t session, char * buffer, int buff_size);

protected:
	void registerOutputSessionThreadinfo(OutputSessionThreadInfo * output_session_thread_info);

private:
	int m_session_thread_info_index;
	bool m_stop;
	bool m_wait; // 可以优化为thread num, 当降到0 finit完成
	bool m_actived;

	ISessionPool * m_session_pool;

	typedef vector<OutputSessionThreadInfo *> OutputSessionThreadInfoVec_t;
	OutputSessionThreadInfoVec_t	m_output_session_thread_info_vec; // 公用

	ACE_Thread_Mutex m_output_session_thread_info_vec_mutex;

	typedef map<CellSession *, OutputSessionThreadInfo *> CellSessionMap_t;
	CellSessionMap_t	m_cell_session_map;

	ACE_Thread_Mutex	m_cell_session_map_mutex;

};

}
#endif