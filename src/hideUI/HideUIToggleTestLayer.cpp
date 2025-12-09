#include "HideUIToggleTestLayer.hpp"

void HideUIToggleTestLayer::pauseGame(bool unfocused) {
    if (Mod::get()->getSettingValue<bool>("enable-toggle-UI")) {
        hideUIAPI::toggleUI();
    }
    PlayLayer::pauseGame(unfocused);
}