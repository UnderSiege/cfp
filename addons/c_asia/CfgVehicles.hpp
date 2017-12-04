//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 166.139586 on Stable branch
//////////////////////////////////////////////////////////////////////////////////

class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class O_Soldier_F;
    class O_Soldier_F_OCimport_01 : O_Soldier_F { scope = 0; class EventHandlers; };
    class O_Soldier_F_OCimport_02 : O_Soldier_F_OCimport_01 { class EventHandlers; };

    class CUP_C_LR_Transport_CTK;
    class CUP_C_LR_Transport_CTK_OCimport_01 : CUP_C_LR_Transport_CTK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_C_LR_Transport_CTK_OCimport_02 : CUP_C_LR_Transport_CTK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_C_UAZ_Unarmed_TK_CIV;
    class CUP_C_UAZ_Unarmed_TK_CIV_OCimport_01 : CUP_C_UAZ_Unarmed_TK_CIV { scope = 0; class EventHandlers; };
    class CUP_C_UAZ_Unarmed_TK_CIV_OCimport_02 : CUP_C_UAZ_Unarmed_TK_CIV_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_C_V3S_Open_TKC;
    class CUP_C_V3S_Open_TKC_OCimport_01 : CUP_C_V3S_Open_TKC { scope = 0; class EventHandlers; };
    class CUP_C_V3S_Open_TKC_OCimport_02 : CUP_C_V3S_Open_TKC_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_C_SUV_CIV;
    class CUP_C_SUV_CIV_OCimport_01 : CUP_C_SUV_CIV { scope = 0; class EventHandlers; class Turrets; };
    class CUP_C_SUV_CIV_OCimport_02 : CUP_C_SUV_CIV_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoTurret_07;
            class CargoTurret_08;
            class CargoTurret_09;
        };
    };

    class CUP_C_Octavia_CIV;
    class CUP_C_Octavia_CIV_OCimport_01 : CUP_C_Octavia_CIV { scope = 0; class EventHandlers; };
    class CUP_C_Octavia_CIV_OCimport_02 : CUP_C_Octavia_CIV_OCimport_01 { scope = 0; class EventHandlers; };

    class C_Scooter_Transport_01_F;
    class C_Scooter_Transport_01_F_OCimport_01 : C_Scooter_Transport_01_F { scope = 0; class EventHandlers; };
    class C_Scooter_Transport_01_F_OCimport_02 : C_Scooter_Transport_01_F_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_C_Fishing_Boat_Chernarus;
    class CUP_C_Fishing_Boat_Chernarus_OCimport_01 : CUP_C_Fishing_Boat_Chernarus { scope = 0; class EventHandlers; };
    class CUP_C_Fishing_Boat_Chernarus_OCimport_02 : CUP_C_Fishing_Boat_Chernarus_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_C_Datsun;
    class CUP_C_Datsun_OCimport_01 : CUP_C_Datsun { scope = 0; class EventHandlers; class Turrets; };
    class CUP_C_Datsun_OCimport_02 : CUP_C_Datsun_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_C_Ural_Civ_01;
    class CUP_C_Ural_Civ_01_OCimport_01 : CUP_C_Ural_Civ_01 { scope = 0; class EventHandlers; class Turrets; };
    class CUP_C_Ural_Civ_01_OCimport_02 : CUP_C_Ural_Civ_01_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class C_Offroad_02_unarmed_F;
    class C_Offroad_02_unarmed_F_OCimport_01 : C_Offroad_02_unarmed_F { scope = 0; class EventHandlers; class Turrets; };
    class C_Offroad_02_unarmed_F_OCimport_02 : C_Offroad_02_unarmed_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
        };
    };

    class C_Offroad_01_F;
    class C_Offroad_01_F_OCimport_01 : C_Offroad_01_F { scope = 0; class EventHandlers; class Turrets; };
    class C_Offroad_01_F_OCimport_02 : C_Offroad_01_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
        };
    };


    class CFP_C_ASIA_Civilian_1_01 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civilian 1";
        side = 3;
        genericNames = "Chinesemen";
        faction = "CFP_C_ASIA";

        identityTypes[] = { "Head_Asian" , "LanguageCHI_F" };
	uniformClass = "U_I_C_Soldier_Bandit_4_F";

	ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_I_C_Soldier_Bandit_4_F",{}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

	randomGearProbability = 100;

	// Asian Clothing
		uniformList[] = {
	"U_C_Poor_1", 0.2,
	"U_C_Man_casual_1_F", 0.2,
	"U_C_Man_casual_2_F", 0.2,
	"U_C_Man_casual_3_F", 0.2,
	"U_C_Man_casual_4_F", 0.2,
	"U_C_Man_casual_5_F", 0.2,
	"U_C_Man_casual_6_F", 0.2,
	"CUP_U_O_CHDKZ_Lopotev", 0.2,
	"CUP_U_I_GUE_Anorak_03", 0.2,
	"U_I_C_Soldier_Bandit_4_F", 0.2,
	"CUP_U_C_Citizen_02", 0.2,
	"U_C_Poloshirt_burgundy", 0.2,
	"U_C_Poloshirt_redwhite", 0.2,
	"U_C_Poloshirt_blue", 0.2,
	"U_C_Poloshirt_salmon", 0.2,
	"U_C_Poloshirt_stripped", 0.2,
	"U_C_Poloshirt_tricolour", 0.2,
	"U_BG_Guerilla2_1", 0.2,
	"U_BG_Guerilla2_2", 0.2,
	"U_BG_Guerilla2_3", 0.2,
	"U_BG_Guerilla3_1", 0.2,
	"U_C_HunterBody_grn", 0.2,
	"U_OrestesBody", 0.2,
	"CUP_I_B_PMC_Unit_1", 0.2,
	"CUP_I_B_PMC_Unit_2", 0.2,
	"CUP_I_B_PMC_Unit_3", 0.2,
	"CUP_I_B_PMC_Unit_4", 0.2
		};

	// Asian Headgear
		headgearList[] = {
	"", 0.8,
	"H_Bandanna_blu", 0.2,
	"H_Bandanna_cbr", 0.2,
	"H_Bandanna_gry", 0.2,
	"H_Bandanna_khk", 0.2,
	"H_Bandanna_sgg", 0.2,
	"H_Booniehat_tan", 0.2,
	"H_Cap_blu", 0.2,
	"H_Cap_oli", 0.2,
	"H_Cap_red", 0.2,
	"H_Cap_tan", 0.2,
	"H_Cap_blk", 0.2,
	"SP_BaseballCap_Yellow", 0.2,
	"SP_BaseballCap_White", 0.2,
	"SP_BoonieHat_Black", 0.2
		};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;


    };

    class CFP_C_ASIA_Civilian_2_01 : CFP_C_ASIA_Civilian_1_01 {

        displayName = "Civilian";

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_I_C_Soldier_Bandit_4_F",{}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_ASIA_Civilian_3_01 : CFP_C_ASIA_Civilian_1_01 {

        displayName = "Civilian";

        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_I_C_Soldier_Bandit_4_F",{}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_ASIA_Civilian_4_01 : CFP_C_ASIA_Civilian_1_01 {

        displayName = "Civilian";

	 ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_I_C_Soldier_Bandit_4_F",{}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_ASIA_Civilian_5_01 : CFP_C_ASIA_Civilian_1_01 {

        displayName = "Civilian";

	ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_I_C_Soldier_Bandit_4_F",{}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_ASIA_Civilian_6_01 : CFP_C_ASIA_Civilian_1_01 {

        displayName = "Civilian";

	 ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_I_C_Soldier_Bandit_4_F",{}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_ASIA_Civilian_7_01 : CFP_C_ASIA_Civilian_1_01 {

        displayName = "Civilian";

	 ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_I_C_Soldier_Bandit_4_F",{}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_ASIA_Civilian_8_01 : CFP_C_ASIA_Civilian_1_01 {

        displayName = "Civilian";

	ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_I_C_Soldier_Bandit_4_F",{}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_ASIA_Civilian_9_01 : CFP_C_ASIA_Civilian_1_01 {

        displayName = "Civilian";

	 ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_I_C_Soldier_Bandit_4_F",{}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_ASIA_Civilian_10_01 : CFP_C_ASIA_Civilian_1_01 {

        displayName = "Civilian";

	ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_I_C_Soldier_Bandit_4_F",{}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_ASIA_Civilian_11_01 : CFP_C_ASIA_Civilian_1_01 {

        displayName = "Civilian";

	ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_I_C_Soldier_Bandit_4_F",{}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_ASIA_Civilian_12_01 : CFP_C_ASIA_Civilian_1_01 {

        displayName = "Civilian";

	ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_I_C_Soldier_Bandit_4_F",{}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_ASIA_Land_Rover_01 : CUP_C_LR_Transport_CTK_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Land Rover";
        side = 3;
        faction = "CFP_C_ASIA";
        crew = "CFP_C_ASIA_Civilian_1_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ASIA_UAZ_01 : CUP_C_UAZ_Unarmed_TK_CIV_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ";
        side = 3;
        faction = "CFP_C_ASIA";
        crew = "CFP_C_ASIA_Civilian_2_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ASIA_Praga_V3S_01 : CUP_C_V3S_Open_TKC_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Praga V3S";
        side = 3;
        faction = "CFP_C_ASIA";
        crew = "CFP_C_ASIA_Civilian_3_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ASIA_SUV_01 : CUP_C_SUV_CIV_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "SUV";
        side = 3;
        faction = "CFP_C_ASIA";
        crew = "CFP_C_ASIA_Civilian_5_01";

        class Turrets : Turrets {
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
            class CargoTurret_09 : CargoTurret_09 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ASIA_Skoda_Octavia_01 : CUP_C_Octavia_CIV_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skoda Octavia";
        side = 3;
        faction = "CFP_C_ASIA";
        crew = "CFP_C_ASIA_Civilian_6_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ASIA_Water_Scooter_01 : C_Scooter_Transport_01_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Water Scooter";
        side = 3;
        faction = "CFP_C_ASIA";
        crew = "CFP_C_ASIA_Civilian_8_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ASIA_Fishing_Boat_01 : CUP_C_Fishing_Boat_Chernarus_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Fishing Boat";
        side = 3;
        faction = "CFP_C_ASIA";
        crew = "CFP_C_ASIA_Civilian_9_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ASIA_Datsun_Pickup_01 : CUP_C_Datsun_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Datsun Pickup";
        side = 3;
        faction = "CFP_C_ASIA";
        crew = "CFP_C_ASIA_Civilian_8_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ASIA_Ural_01 : CUP_C_Ural_Civ_01_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ural";
        side = 3;
        faction = "CFP_C_ASIA";
        crew = "CFP_C_ASIA_Civilian_11_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ASIA_MB_4WD_01 : C_Offroad_02_unarmed_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "MB 4WD";
        side = 3;
        faction = "CFP_C_ASIA";
        crew = "CFP_C_ASIA_Civilian_12_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_ASIA_Offroad_01 : C_Offroad_01_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Offroad";
        side = 3;
        faction = "CFP_C_ASIA";
        crew = "CFP_C_ASIA_Civilian_9_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};