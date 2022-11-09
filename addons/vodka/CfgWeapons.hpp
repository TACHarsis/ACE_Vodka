class CfgWeapons {
    class ACE_bloodIV;
    class ACE_bloodIV_500;
    class ACE_bloodIV_250;

    class ACE_VodkaIV: ACE_bloodIV {
        displayName = LLSTRING(Item_Display_Name_100cl);
        picture = "\z\A3VB\addons\vodka\icons\vodka_bag_100_icon_ca.paa";
        descriptionShort = LLSTRING(Item_Description_100cl);
        descriptionUse = LLSTRING(Item_Description_Use_100cl);
        hiddenSelectionsTextures[] = {"\z\A3VB\addons\vodka\textures\vodka_iv_tex_100_ca.paa"};
    };
    class ACE_VodkaIV_500: ACE_bloodIV_500 {
        displayName = LLSTRING(Item_Display_Name_50cl);
        picture = "\z\A3VB\addons\vodka\icons\vodka_bag_50_icon_ca.paa";
        descriptionShort = LLSTRING(Item_Description_50cl);
        descriptionUse = LLSTRING(Item_Description_Use_50cl);
        hiddenSelectionsTextures[] = {"\z\A3VB\addons\vodka\textures\vodka_iv_tex_50_ca.paa"};
    };
    class ACE_VodkaIV_250: ACE_bloodIV_250 {
        displayName = LLSTRING(Item_Display_Name_25cl);
        picture = "\z\A3VB\addons\vodka\icons\vodka_bag_25_icon_ca.paa";
        descriptionShort = LLSTRING(Item_Description_25cl);
        descriptionUse = LLSTRING(Item_Description_Use_25cl);
        hiddenSelectionsTextures[] = {"\z\A3VB\addons\vodka\textures\vodka_iv_tex_25_ca.paa"};
    };
};