void enums()  {
    local int pos = FTell();
    FSkip(-4);
    if (fieldName == "GroupName_Role") {
        enum {
            role_Normal =  0,
            role_Idle =  1,
            role_SitFakeDead =  2,
            role_LieFakeDead =  3,
            role_Hypnotized =  4,
            role_LieHypnotized =  5,
            role_standingIdle =  6,
            role_Eating =  7,
            role_Special =  8,
            role_BreakDownDoor =  9,
            role_HangingFakeDead =  10,
            role_SplitInHalf =  11,
            role_Dead =  12,
            role_DeadPosed =  13,
            role_DeadPosed2 =  14,
            role_DeadPosed3 =  15,
        }GroupName_Role;
    }
    else if (findS(fieldName, "DamageType") != -1) {
        enum { 
            None = -1,
            Minimum = 0,
            NormalS = 1,
            NormalL = 2,
            NormalLL = 3,
            Down = 4,
            DownBound = 5,
            Slam = 6,
            SlamBound = 7,
            Upper = 8,
            HyperUpper = 9,
            HyperUpperAir = 10,
            Blown = 11,
            Collapse = 12,
            RollingUpper = 13,
            CheckSpin = 14,
            Spin = 15,
            DiagonalBlown = 16,
            WindS = 17,
            WindL = 18,
            SnatchRelase = 19,
            StraightBlown = 20,
            Tremor = 21,
            Inhale = 22,
            MotionContinue = 23,
            Explosion = 24
        } DamageType;
    } 
    else {
        switch (fieldOrgTypeName) { //Input Enums by their OriginalType (as seen in RawData) Here:
            case "":
                break;
            default:
                break;
        }
    }
    FSeek(pos);
}