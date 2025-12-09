//This showcases the API in CheatAPI
//Whenever you enter the menu, it will enable cheating on one ruleset, check it, and disable it again so it does not interfere with other uses
//It then prints to the console if you have the correct ruleset enabled
#include "CheatAPIMenuLayer.hpp"

bool CheatAPIMenuLayer::init() {
	if (!MenuLayer::init()) {
		return false;
	}
	if ((Mod::get()->getSettingValue<std::string>("enable-cheat-api"))=="dispatch events") {
		std::string str1 = "ROBTOP";
		DispatchEvent<std::string>("legowiifun.cheat_api/startCheatOne", str1).post();
		bool b1;
		DispatchEvent<bool*>("legowiifun.cheat_api/isCheating", &b1).post();
		if (b1) {
			log::debug("Ruleset active");
		}
		else {
			log::debug("Ruleset not active");
		}
		DispatchEvent<std::string>("legowiifun.cheat_api/endCheatOne", str1).post();
	}
	return true;
}
