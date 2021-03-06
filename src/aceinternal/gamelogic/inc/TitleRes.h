#ifndef TITLE__RES_HPP
#define TITLE__RES_HPP
struct TitleInfo
{
	TitleInfo()
	: buff(0)
	, color(0)
	, fps(0)
	, fpsrate(0)
	, group(0)
	, id(0)
	, id1(0)
	, id2(0)
	, id3(0)
	, name("")
	, option_a1(0)
	, option_a2(0)
	, option_a3(0)
	, option_type(0)
	, super_id1(0)
	, super_id2(0)
	, super_id3(0)
	, super_value1(0)
	, super_value2(0)
	, super_value3(0)
	, talk_type(0)
	, value1(0)
	, value2(0)
	, value3(0)
	, x(0)
	, y(0)
	{}
	uint32 buff;
	uint32 color;
	uint32 fps;
	uint32 fpsrate;
	uint32 group;
	uint32 id;
	uint32 id1;
	uint32 id2;
	uint32 id3;
	string name;
	uint32 option_a1;
	uint32 option_a2;
	uint32 option_a3;
	Uint32Vec_t option_a4; 
	uint32 option_type;
	uint32 super_id1;
	uint32 super_id2;
	uint32 super_id3;
	uint32 super_value1;
	uint32 super_value2;
	uint32 super_value3;
	uint32 talk_type;
	uint32 value1;
	uint32 value2;
	uint32 value3;
	uint32 x;
	uint32 y;
};
#endif
