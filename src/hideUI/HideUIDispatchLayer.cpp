#include "HideUIDispatchLayer.hpp"

bool HideUIDispatchLayer::init(GJGameLevel* level, bool useReplay, bool dontCreateObjects) {
    if (!PlayLayer::init(level, useReplay, dontCreateObjects)) {
        return false;
    }
    if (Mod::get()->getSettingValue<bool>("enable-hide-ui-dispatch-test")) {
        CCLabelBMFont* label=CCLabelBMFont::create("This should disappear","bigFont.fnt");
        label->setID("HideUIDispatchTest"_spr);
        this->addChild(label);
        this->updateLayout();
        DispatchEvent<std::string, std::string>("legowiifun.hide_ui/addUI", label->getID(), "PlayLayer").post();
    }
    return true;
}