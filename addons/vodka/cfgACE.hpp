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
        displayName = "Pour 100cl Vodka";
        displayNameProgress = "Pouring Vodka 100cl...";
        items[] = {"ACE_VodkaIV"};
    };

    class VodkaIV_500: VodkaIV {
        displayName = "Pour 50cl Vodka";
		displayNameProgress = "Pouring Vodka 50cl...";
        items[] = {"ACE_VodkaIV_500"};
    };

    class VodkaIV_250: VodkaIV {
        displayName = "Pour 25cl Vodka";
		displayNameProgress = "Pouring Vodka 25cl...";
        items[] = {"ACE_VodkaIV_250"};
    };
};