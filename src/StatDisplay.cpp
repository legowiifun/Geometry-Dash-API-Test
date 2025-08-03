//This showcases the API to add stats to Stat Display
//It tracks a variable that increments whenever you enter the main menu
//And it adds this variable as a stat in the Stat Display mod

/**
 * Include the Geode headers.
 */
#include <Geode/Geode.hpp>
#include <Geode/loader/Dispatch.hpp>
#include<Geode/modify/GJBaseGameLayer.hpp>

/**
 * Brings cocos2d and all Geode namespaces to the current scope.
 */
using namespace geode::prelude;

int i = 0;
#include <Geode/modify/MenuLayer.hpp>
class $modify(StatDisplayMenuLayer, MenuLayer) {
	bool init() {
		if (!MenuLayer::init()) {
			return false;
		}
		i++;
		return true;
	}
};

class $modify(StatDisplayAPIBaseGameLayer, GJBaseGameLayer) {
	void createTextLayers() {
		GJBaseGameLayer::createTextLayers();
		std::string start = "You have entered the menu ";
		std::string end = " times";
		std::string id = "menuEntering"_spr;
		DispatchEvent<std::string, std::string, std::string, int>("legowiifun.stat_display/addStat", start,end, id, i).post();
	}
};