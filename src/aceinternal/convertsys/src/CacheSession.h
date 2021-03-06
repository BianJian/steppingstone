
#ifndef CACHE_SESSION_HPP
#define CACHE_SESSION_HPP

#include "Sessionx.h"

class CacheSession
	: public Sessionx
{
public:
	CacheSession();
	~CacheSession();
public:
	virtual void output(Packet * packet);

	virtual int wt_stream();
protected:
private:
	ACE_Thread_Mutex m_output_packet_mutex;

	PacketQue_t m_output_packet;

};
#endif