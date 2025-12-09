#include "StatDisplayAPIBaseGameLayer.hpp"
void StatDisplayAPIBaseGameLayer::createTextLayers() {
	GJBaseGameLayer::createTextLayers();
	std::string start = "You have entered the menu ";
	std::string end = " times";
	std::string id = "menuEntering"_spr;
	DispatchEvent<std::string, std::string, std::string, int>("legowiifun.stat_display/addStat", start,end, id, i).post();
}