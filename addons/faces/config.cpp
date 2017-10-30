#include "script_component.hpp"

class CfgPatches
{
    class CFP_Faces
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

#include "CfgFaces.hpp"