#include "HideUIEventsLayer.hpp"

bool HideUIDispatchLayer::init(GJGameLevel* level, bool dontCreateObjects) {
    if (!PlayLayer::init(level, dontCreateObjects)) {
        return false;
    }
    if (Mod::get()->getSettingValue<bool>("enable-hide-ui-optional-test")) {
        CCLabelBMFont* label=CCLabelBMFont::create("This should disappear","bigFont.fnt");
        label->setID("HideUIDispatchTest"_spr);
        this->addChild(label);
        this->updateLayout();
        geode::log::debug("Calling add UI element event");
        hide_ui_events::addUIElementEvent(label->getID(), "PlayLayer");
        geode::log::debug("Finishing method call!");
    }
    return true;
}