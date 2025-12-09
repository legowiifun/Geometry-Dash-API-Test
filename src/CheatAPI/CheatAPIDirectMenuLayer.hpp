//This showcases the API in CheatAPI
//Whenever you enter the menu, it will enable cheating on one ruleset, check it, and disable it again so it does not interfere with other uses
//It then prints to the console if you have the correct ruleset enabled
/**
 * Include the Geode headers.
 */
#include <Geode/Geode.hpp>
#include <legowiifun.cheat_API/include/cheatAPI.hpp>
/**
 * Brings cocos2d and all Geode namespaces to the current scope.
 */
using namespace geode::prelude;
#include <Geode/modify/MenuLayer.hpp>
class $modify(CheatAPIDirectMenuLayer, MenuLayer) {
    bool init();
};