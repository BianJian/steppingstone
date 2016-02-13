/// factory.cpp
/// 
/// 

#include "factory.h"
#include "coredef.h"
#include "Logger.h"

namespace cached {
namespace service {

dbass::CacheAssistant * AssFactory::create(CacheCGUID guid)
{
	dbass::CacheAssistant * result = NULL;
    ///
    switch (EXTRACT_ENTITY_TYPE(guid)) {


    default:
		DEF_LOG_ERROR("Unknown guid %llu\n", guid);
		ACE_OS::sleep(1);
		//BOOST_ASSERT(false);
        break;
    }

	return result;
}

};  // namespace service
};  // namespace cached
