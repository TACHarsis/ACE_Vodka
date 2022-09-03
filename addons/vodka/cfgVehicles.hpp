class CfgVehicles {

	class Item_Base_F;
	
	// TODO: find out what the macro does and how to use or replace it
	class ACE_VodkaIVItem: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = "Vodka IV (100cl)";
        author = "Cat";
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(ACE_VodkaIV,1);
        };
    };
    class ACE_VodkaIVItem_50cl: ACE_vodkaIVItem {
        displayName = "Vodka IV (50cl)";
        class TransportItems {
            MACRO_ADDITEM(ACE_VodkaIV_500,1);
        };
    };
    class ACE_VodkaIVItem_25cl: ACE_VodkaIVItem {
        displayName = "Vodka IV (25cl)";
        class TransportItems {
            MACRO_ADDITEM(ACE_VodkaIV_250,1);
        };
    };
};