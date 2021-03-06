
#ifndef OUTPUT_SESSION_POOL_HPP
#define OUTPUT_SESSION_POOL_HPP

#include <ace/Task.h>
#include <boost/unordered_set.hpp>
#include "typedef.h"
#include "CellSessionx.h"
#include "SessionPoolx.h"

namespace netcore {

typedef boost::unordered_set<CellSessionx *> CellSessionSet_t;

struct OutputSessionThreadInfo 
{
	OutputSessionThreadInfo()
	{}

	void addCellSession(CellSessionx * cell_session)
	{
		ACE_GUARD_RETURN(ACE_Thread_Mutex, guard, mutex, );
		add_cell_session_set.insert(cell_session);
	}

	void removeCellSession(CellSessionx * cell_session)
	{
		ACE_GUARD_RETURN(ACE_Thread_Mutex, guard, mutex, );
		remove_cell_session_set.insert(cell_session);
	}

	ACE_Thread_Mutex mutex;

	CellSessionSet_t add_cell_session_set;

	CellSessionSet_t remove_cell_session_set;
};

class OutputSessionPool : public ACE_Task<ACE_NULL_SYNCH>
{
public:
	OutputSessionPool();
	~OutputSessionPool();
public:
	int init(int thread_no, SessionPoolx * session_pool);

	void stop();

	void finit();

public:
	int svc();

public:
	void handleSession(CellSessionx * cell_session);

	void removeSession(CellSessionx * cell_session);

protected:
	void registerOutputSessionThreadinfo(OutputSessionThreadInfo * output_session_thread_info);

private:
	typedef vector<OutputSessionThreadInfo *> OutputSessionThreadInfoVec_t;

	int m_session_thread_info_index;

	bool m_stop;

	bool m_wait;

	bool m_actived;

	SessionPoolx * m_session_pool;

	OutputSessionThreadInfoVec_t	m_output_session_thread_info_vec;

	ACE_Thread_Mutex m_output_session_thread_info_vec_mutex;

	typedef map<CellSessionx *, OutputSessionThreadInfo *> CellSessionMap_t;

	CellSessionMap_t	m_cell_session_map;

};

}
#endif