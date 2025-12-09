//This showcases the API in CheatAPI
//Whenever you enter the menu, it will enable cheating on one ruleset, check it, and disable it again so it does not interfere with other uses
//It then prints to the console if you have the correct ruleset enabled

#include "CheatAPIDirectMenuLayer.hpp"
	bool CheatAPIDirectMenuLayer::init() {
		if (!MenuLayer::init()) {
			return false;
		}
		std::string str1 = "ROBTOP";
		cheatAPI::setCheat(rulesets::ROBTOP);
		bool b1;
		b1=cheatAPI::isCheating();
		if (b1) {
			log::debug("Ruleset active");
		}
		else {
			log::debug("Ruleset not active");
		}
		cheatAPI::endCheat(rulesets::ROBTOP);
		return true;
	}