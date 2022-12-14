#include "\x\cba\addons\main\script_macros_common.hpp"

#define DFUNC(var1) TRIPLES(ADDON,fnc,var1)

#ifdef DISABLE_COMPILE_CACHE
    #undef PREP
    #define PREP(fncName) DFUNC(fncName) = compile preprocessFileLineNumbers QPATHTOF(DOUBLES(fnc,fncName).sqf)
#else
    #undef PREP
    #define PREP(fncName) [QPATHTOF(DOUBLES(fnc,fncName).sqf), QFUNC(fncName)] call CBA_fnc_compileFunction
#endif

#define MACRO_ADDITEM(ITEM,COUNT) class _xx_##ITEM { \
    name = #ITEM; \
    count = COUNT; \
}

#define MACRO_GROUND_HOLDER(OBJECT,EXTENSION,DISPLAYNAME) class TRIPLES(OBJECT,EXTENSION,gh) : DOUBLES(OBJECT,gh) { \
    displayName = DISPLAYNAME; \
    class TransportItems { \
        MACRO_ADDITEM(DOUBLES(OBJECT,EXTENSION),1); \
    }; \
}
