
#ifndef SINGLE_TERMINAL_HPP
#define SINGLE_TERMINAL_HPP

#include <ace/Thread_Mutex.h>
#include "Terminal.h"

class SingleTerminal 
	: public Terminal
{
public:
	SingleTerminal();

public:
	bool asyncWrite(char * buffer, int buff_size);

	virtual void outputPacket(Packet * packet) override;

public:
	int syncWrite();

public:
	virtual int finit();

public:
	uint64 getPlayerGuid();

	const ACE_Time_Value & getCloseTime();
protected:
	virtual int initing();

	virtual void parseInputPacket();

	virtual int session_on_connected() override;

	virtual int session_on_closed() override;

protected:
private:
	uint64 m_player_guid;

	ACE_Thread_Mutex m_output_msg_mutex;

	ACE_Time_Value m_close_time;
};

#endif