#include "ScriptMgr.h"
#include "Player.h"
#include "Config.h"

enum Debuffs {
    SHADOW_STACK = 71905
};

class ShadowDebuff : public UnitScript
{
public:

    ShadowDebuff() : UnitScript("ShadowDebuff") { }

    virtual void OnDamage(Unit* attacker, Unit* /*victim*/, uint32& /*damage*/)
    {
        if (sConfigMgr->GetBoolDefault("enableShadowDebuff", true))
        {
            if (attacker->GetMap()->IsBattleArena())
            {
                do
                {
                    attacker->RemoveAuraFromStack(SHADOW_STACK);
                    attacker->RemoveAura(SHADOW_STACK);
                } while (attacker->HasAura(SHADOW_STACK));
            }
        }
    }

};

class MyWorldScript : public WorldScript
{
public:

    MyWorldScript() : WorldScript("MyWorldScript") { }

    void OnBeforeConfigLoad(bool reload) override
    {
        if (!reload) {
            std::string conf_path = _CONF_DIR;
            std::string cfg_file = conf_path + "/Shadow.conf";
            sConfigMgr->LoadMore(cfg_file.c_str());
        }
    }
};

void AddShadowDebuffScripts() {
    new ShadowDebuff();
    new MyWorldScript();
}

