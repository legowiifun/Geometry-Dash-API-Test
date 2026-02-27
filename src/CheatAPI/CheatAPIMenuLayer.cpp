//This showcases the API in CheatAPI
//Whenever you enter the menu, it will enable cheating on one ruleset, check it, and disable it again so it does not interfere with other uses
//It then prints to the console if you have the correct ruleset enabled
#include "CheatAPIMenuLayer.hpp"

bool CheatAPIMenuLayer::init() {
	if (!MenuLayer::init()) {
		return false;
	}
	if ((Mod::get()->getSettingValue<std::string>("enable-cheat-api"))=="event export API") {
		std::string str1 = "ROBTOP";
		cheatAPIEvents::setCheatingOne(str1);
		bool b1=cheatAPIEvents::isCheatingGeneral();
		if (b1) {
			log::debug("Ruleset active");
		}
		else {
			log::debug("Ruleset not active");
		}
		cheatAPIEvents::endCheatingOne(str1);
	}
	return true;
}
