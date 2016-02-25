
#ifndef REMOTE_CACHE_HPP
#define REMOTE_CACHE_HPP

#include "typedef.h"
#include "Cache.h"

class RemoteCache : public Cache
{
public:
	RemoteCache();
	~RemoteCache();

	// ����log ����
	virtual int handle_input(ACE_HANDLE  fd = ACE_INVALID_HANDLE) override;

public:
	virtual void output(Packet * packet);

	virtual int wt_stream() override;

	virtual void recvError(int recv_value, int last_error) override;
public:
	virtual int finit() override;

protected:
	virtual int initing() override;

private:
	bool m_is_writing;

	ACE_Thread_Mutex m_output_packet_mutex;

	PacketQue_t m_output_packet;
};
#endif