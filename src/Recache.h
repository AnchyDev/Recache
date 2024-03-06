#ifndef MODULE_RECACHE_H
#define MODULE_RECACHE_H

#include "ScriptMgr.h"

class RecacheWorldScript : public WorldScript
{
public:
    RecacheWorldScript() : WorldScript("RecacheWorldScript") { }
private:
    void OnBeforeFinalizePlayerWorldSession(uint32& /*cacheVersion*/) override;
};

#endif // MODULE_RECACHE_H
