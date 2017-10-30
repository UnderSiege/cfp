#include "script_component.hpp"

class CfgPatches
{
    class CFP_UnitInsignia
    {
        units[] = {};
        weapons[] = {};
        author = MODULE_AUTHOR;
        authors[] = {"SP Craig", "Tupolov"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"CFP_main"};
        VERSION_CONFIG;
    };
};

#include "CfgUnitInsignia.hpp"
