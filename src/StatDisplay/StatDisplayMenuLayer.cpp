#include "StatDisplayMenuLayer.hpp"

bool StatDisplayMenuLayer::init() {
	if (!MenuLayer::init()) {
		return false;
	}
	if (Mod::get()->getSettingValue<bool>("enable-stat-display")) {
		i++;
	}
	return true;
}