#include "HideUIEventsLayer.hpp"

bool HideUIDispatchLayer::init(GJGameLevel* level, bool useReplay, bool dontCreateObjects) {
    if (!PlayLayer::init(level, useReplay, dontCreateObjects)) {
        return false;
    }
    if (Mod::get()->getSettingValue<bool>("enable-hide-ui-optional-test")) {
        CCLabelBMFont* label=CCLabelBMFont::create("This should disappear","bigFont.fnt");
        label->setID("HideUIDispatchTest"_spr);
        this->addChild(label);
        this->updateLayout();
        hide_ui_events::addUIElementEvent(label->getID(), "PlayLayer");
    }
    return true;
}