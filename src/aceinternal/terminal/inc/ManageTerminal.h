
#ifndef MANAGE_TERMINAL_HPP
#define MANAGE_TERMINAL_HPP

#include "Terminal.h"

class ManageTerminal : public HandleOutput
{
public:
	ManageTerminal()
	: m_handle_input(NULL)
	, m_stop(false)
	, m_finit(false)
	{}

	virtual ~ManageTerminal()
	{}

public:
	virtual void registerScene(uint64 scene_id, uint64 scene_type) = 0;

public:
	virtual int init(const TerminalCfg & terminal_cfg)
	{
		m_terminal_cfg = terminal_cfg;
		m_handle_input = m_terminal_cfg.handle_input;
		return initing();
	}

	virtual int stop() = 0;

	virtual int finit() = 0;

protected:
	virtual int initing() = 0;

protected:
	HandleInput * m_handle_input;

	bool m_stop;

	bool m_finit;

	TerminalCfg m_terminal_cfg;
};

#endif