
class CfgAmmo {

    class ACE_Javelin_FGM148;
    class UK3CB_M_Javelin_AT: ACE_Javelin_FGM148 {
        submunitionAmmo = "rhs_ammo_M_fgm148_AT_penetrator";
        submunitionDirectionType = "SubmunitionModelDirection";
        submunitionInitialOffset[] = {0,0,-0.2};
        submunitionInitSpeed = 1000;
        submunitionParentSpeedCoef = 0;
        warheadName = "TandemHEAT";
    };

    class ammo_Penetrator_base;
    class UK3CB_ammo_Penetrator_Javelin: ammo_Penetrator_base {
        warheadName = "TandemHEAT";
    };
};
