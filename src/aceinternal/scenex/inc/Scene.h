
#ifndef SCENE_HPP
#define SCENE_HPP

#include <boost/array.hpp>
#include "Packet.h"
#include "Message.h"
#include "Session.h"
#include "LoadDll.h"
#include "Plugin.h"
#include "coredef.h"
//#include "CacheInterface.h"
// #include "entity_ins.h"
// #include "entity/player.pb.h"
// #include "protocol_ins.h"
// #include "protocol/msg_player.pb.h"
// #include "ManageTerminal.h"

//todo �Ƿ�Ҫ server �غ�
#define  SRV_TYPE_CENTER	"center"
#define  SRV_TYPE_GAME		"game"
#define  SRV_TYPE_NAMING	"naming"
#define  SRV_GAME(x)	SRV_TYPE_GAME#x
#define  SRV_NAMING(x)	SRV_TYPE_NAMING#x

struct SCENEX_EXOPRT SceneCfg 
{
	int scene_id;

	int line_no;

	uint64 map_id;

	uint32 original_map_id;

	int	cache_type;

	//ManageTerminal * manage_terminal;

	std::function<void(Packet * packet, uint64 map_id, uint64 request_id, uint64 owner_guid)> cache_handle_output;

	//PluginParamConfigVec_t * plugin_param_vec;

	bool save_packet;

	string packet_dir = "packet";
	string plugin_dir = "modules";
	Logger * logger;

// 	Line * line_scene;
// 
// 	SceneRequest * scene_request;

	bool push_client_error_msg;

	bool is_first_launch;

	int max_sceen_number;

	string log_dir = "logs";

	bool enable_gm;

	DllInfoVec_t plugin_dll_vec;
	std::string listen_addr = "127.0.0.1:1";
	
	std::string naming_addr = "127.0.0.1:2";
	std::string srv_type = SRV_TYPE_NAMING; //SRV_TYPE_GAME;
	std::string srv_id = SRV_NAMING(01); //SRV_GAME(01);
};

class SCENEX_EXOPRT IScene 
	: public netstream::IInput
	, public ITimer
	, public IMessage
{
public:
	virtual ~IScene(){}

	virtual int IScene_init(const SceneCfg & scene_cfg) = 0;

	virtual int IScene_startup() = 0;
	virtual int IScene_stop() = 0;
	virtual int IScene_finit() = 0;

	virtual bool IScene_isStartupSuccess() = 0;
	virtual bool IScene_isShutdownSuccess() = 0;

	virtual bool IScene_getGuid(EntityType entity_type, uint64 & guid) = 0;
	virtual int IScene_getRandom(int max_no, int min_no = 0) = 0;
};

SCENEX_EXOPRT IScene * createScene();

#endif
