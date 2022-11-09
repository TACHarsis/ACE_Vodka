class ace_medical_treatment {
    class IV {
        class BloodIV;
        class BloodIV_500;
        class BloodIV_250;

        class VodkaIV: BloodIV {};
        class VodkaIV_500: BloodIV_500 {};
        class VodkaIV_250: BloodIV_250 {};
    };
};

class ace_medical_treatment_actions {
    class BloodIV;

    class VodkaIV: BloodIV {
        displayName = LLSTRING(Action_Display_Name_100cl);
        displayNameProgress = LLSTRING(Action_Progress_100cl);
        items[] = {"ACE_VodkaIV"};
    };

    class VodkaIV_500: VodkaIV {
        displayName = LLSTRING(Action_Display_Name_50cl);
        displayNameProgress = LLSTRING(Action_Progress_50cl);
        items[] = {"ACE_VodkaIV_500"};
    };

    class VodkaIV_250: VodkaIV {
        displayName = LLSTRING(Action_Display_Name_25cl);
        displayNameProgress = LLSTRING(Action_Progress_25cl);
        items[] = {"ACE_VodkaIV_250"};
    };
};