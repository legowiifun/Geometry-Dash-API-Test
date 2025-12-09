#include "StatDisplayMenuLayer.hpp"

bool StatDisplayMenuLayer::init() {
	if (!MenuLayer::init()) {
		return false;
	}
	i++;
	return true;
}