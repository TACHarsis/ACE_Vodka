#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {  };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"A3VB_main", "ace_main", "ace_medical_treatment"};
        authors[] = {"Cat Harsis", "Morda", "uagpmc.com", "zuedev"};
        VERSION_CONFIG;
    };
};

// Configs
#include "cfgVehicles.hpp"
#include "cfgWeapons.hpp"
#include "cfgACE.hpp"
