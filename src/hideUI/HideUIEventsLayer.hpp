//This showcases the API to toggle hideUI
//it toggles the UI when the game pauses

/**
 * Include the Geode headers.
 */
#include <Geode/Geode.hpp>
#include<Geode/modify/PlayLayer.hpp>
#include<legowiifun.hide_ui/src/api/hideUIAPI.hpp>

/**
 * Brings cocos2d and all Geode namespaces to the current scope.
 */
using namespace geode::prelude;
class $modify(HideUIDispatchLayer, PlayLayer) {
    bool init(GJGameLevel* level, bool useReplay, bool dontCreateObjects);
};