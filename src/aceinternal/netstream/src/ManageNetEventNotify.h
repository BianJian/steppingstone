
#ifndef MANAGE_NET_EVENT_NOTIFY_HPP
#define MANAGE_NET_EVENT_NOTIFY_HPP

#include <ace/Reactor.h>
#include "typedef.h"
#include "Singleton.h"

namespace netstream
{

class SessionPoolImp;
class CellSession;

class ManageNetEventNotify
{
public:
	static ManageNetEventNotify * instance()
	{
		return Singleton<ManageNetEventNotify>::instance();
	}

	void collectSessionPoolReactor(SessionPoolImp * session_pool, ACE_Reactor * reactor);

	void sessionOpenNotify(CellSession * cell_session);

	void sessionCloseNotify(CellSession * cell_session, int trigger_source);

private:
	ACE_Thread_Mutex m_session_pool_mutex;

	typedef map<ACE_Reactor *, SessionPoolImp *> SessionPoolReactorMap_t;

	SessionPoolReactorMap_t m_session_pool_reactor_map;

};

}
#endif