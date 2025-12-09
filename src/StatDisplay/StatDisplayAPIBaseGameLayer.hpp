//This showcases the API to add stats to Stat Display
//It tracks a variable that increments whenever you enter the main menu
//And it adds this variable as a stat in the Stat Display mod

/**
 * Include the Geode headers.
 */
#include <Geode/Geode.hpp>
#include <Geode/loader/Dispatch.hpp>
#include <Geode/modify/GJBaseGameLayer.hpp>
#include "main.hpp"

/**
 * Brings cocos2d and all Geode namespaces to the current scope.
 */
using namespace geode::prelude;
class $modify(StatDisplayAPIBaseGameLayer, GJBaseGameLayer) {
    void createTextLayers();
};