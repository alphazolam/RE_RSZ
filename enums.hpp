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
        } GroupName_Role;
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
        local string enumName = fieldOrgTypeName;
        if (fieldName == "__value")
            enumName = parentof(this).name;
        switch (enumName) { //Input Enums by their OriginalType (as seen in RawData) Here:
            case "app.PlayerVergilPL.ActiveAction":
	            enum app_PlayerVergilPL_ActiveAction {
		            Base = 0,
		            Yamato = 1,
		            Beowulf = 2,
		            Forceedge = 3,
		            TrickAction = 4,
		            Devil = 5,
		            TheDevil = 6,
		            Provoke = 7,
	            } Enum;
	            break;
            case "via.motion.JointInfo.Type":
                enum via_motion_JointInfo_Type {
                    Joint = 0,
                    Append = 1,
                    Extra = 2,
                    Locator = 3,
                } Enum;
                break;
            case "app.ropeway.gamemastering.SaveDataManager.WarningState":
                enum app_ropeway_gamemastering_SaveDataManager_WarningState {
                    NONE = 0,
                    AUTO_SAVE_ICON = 1,
                    GENERAL_DIALOG = 2,
                } Enum;
                break;
            case "app.ropeway.gamemastering.RogueGimmickManager.State":
                enum app_ropeway_gamemastering_RogueGimmickManager_State {
                    INVALID = -1,
                    INITIALIZE = 0,
                    WAIT_TO_INGAME = 1,
                    INITIALIZE_TO_INGAME = 2,
                    ENABLE = 3,
                } Enum;
            default:
                break;
        }
    }
    FSeek(pos);
}