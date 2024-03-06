#include "Recache.h"

#include "Config.h"
#include "GameTime.h"

void RecacheWorldScript::OnBeforeFinalizePlayerWorldSession(uint32& cacheVersion)
{
    if (!sConfigMgr->GetOption("Recache.Enable", false))
    {
        return;
    }

    cacheVersion = urand(1, std::numeric_limits<uint32_t>::max());
}

void SC_AddRecacheScripts()
{
    new RecacheWorldScript();
}
