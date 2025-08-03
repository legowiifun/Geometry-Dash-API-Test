//This showcases the API in CheatAPI
//Whenever you enter the menu, it will enable cheating on one ruleset, check it, and disable it again so it does not interfere with other uses
//It then prints to the console if you have the correct ruleset enabled
//Check the commented lines for the equivilant code using static linking/dependencies

/**
 * Include the Geode headers.
 */
#include <Geode/Geode.hpp>
 //#include <legowiifun.cheat_API/include/cheatAPI.hpp>
#include <Geode/loader/Dispatch.hpp>
/**
 * Brings cocos2d and all Geode namespaces to the current scope.
 */
using namespace geode::prelude;
#include <Geode/modify/MenuLayer.hpp>
class $modify(CheatAPIMenuLayer, MenuLayer) {
	bool init() {
		if (!MenuLayer::init()) {
			return false;
		}
		std::string str1 = "ROBTOP";
		DispatchEvent<std::string>("legowiifun.cheat_api/startCheatOne", str1).post();
		//cheatAPI::setCheat(rulesets::ROBTOP);
		bool b1;
		DispatchEvent<bool*>("legowiifun.cheat_api/isCheating", &b1).post();
		//b1=cheatAPI::isCheating();
		if (b1) {
			log::debug("Ruleset active");
		}
		else {
			log::debug("Ruleset not active");
		}
		//cheatAPI::endCheat(rulesets::ROBTOP);
		DispatchEvent<std::string>("legowiifun.cheat_api/endCheatOne", str1).post();
		return true;
	}
};