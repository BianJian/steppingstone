
#ifndef MANAGE_LOGGER_INPUT_HPP
#define MANAGE_LOGGER_INPUT_HPP

#include <ace/Task.h>
#include "LoggerSession.h"

class RemoteLogger;

class ManageLoggerInput : public ACE_Task<ACE_NULL_SYNCH>
{
public:
	ManageLoggerInput();
	~ManageLoggerInput();

public:
	int init();

	int stop();

	int svc();

	void setLoggerSession(LoggerSession * logger_session, RemoteLogger * remote_logger);
protected:
private:
	LoggerSession * m_logger_session;

	RemoteLogger * m_remote_logger;

	bool m_inited;

	ACE_Message_Block m_input_block;

	bool m_is_stop;
};
#endif