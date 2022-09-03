#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = { "cba_main" };
        authors[] = {"Cat Harsis", "Morda", "uagpmc.com", "zuedev"};
        VERSION_CONFIG;
    };
};