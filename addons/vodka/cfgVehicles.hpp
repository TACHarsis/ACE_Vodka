class CfgVehicles {

    class Item_Base_F;
    
    class ACE_VodkaIVItem: Item_Base_F {
        scope = 2;
        scopeCurator = 2;
        displayName = LLSTRING(Item_Display_Name_100cl);
        author = "Cat";
        vehicleClass = "Items";
        class TransportItems {
            MACRO_ADDITEM(ACE_VodkaIV,1);
        };
    };
    class ACE_VodkaIVItem_50cl: ACE_vodkaIVItem {
        displayName = LLSTRING(Item_Display_Name_50cl);
        class TransportItems {
            MACRO_ADDITEM(ACE_VodkaIV_500,1);
        };
    };
    class ACE_VodkaIVItem_25cl: ACE_VodkaIVItem {
        displayName = LLSTRING(Item_Display_Name_25cl);
        class TransportItems {
            MACRO_ADDITEM(ACE_VodkaIV_250,1);
        };
    };
};