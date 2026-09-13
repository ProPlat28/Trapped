#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

static void hideButtons(CCNode* node) {
    if (!node)
        return;

    auto id = std::string(node->getID());

    if (id == "dankmeme.globed2/main-menu-button" ||
        id == "geode.loader/geode-button") {
        node->setVisible(false);
    }

    for (auto child : CCArrayExt<CCNode*>(node->getChildren())) {
        hideButtons(child);
    }
}

class $modify(MenuLayer) {

    void showPopup() {
        FLAlertLayer::create(
            "HAHA",
            "You're trapped here FOREVER!!",
            "OK"
        )->show();
    }

    void onPlay(CCObject* target) {
        showPopup();
    }

    void onArchievements(CCObject* target) {
        showPopup();
    }

    void onCreator(CCObject* target) {
        showPopup();
    }

    void onNewgrounds(CCObject* target) {
        showPopup();
    }

    void onRobTop(CCObject* target) {
        showPopup();
    }

    void onGarage(CCObject* target) {
        showPopup();
    }

    void onOptions(CCObject* target) {
        showPopup();
    }

    void onDaily(CCObject* target) {
        showPopup();
    }

    void onStats(CCObject* target) {
        showPopup();
    }

    void onMoreGames(CCObject* target) {
        showPopup();
    }

    void willClose(CCObject* target) {
        showPopup();
    }

    void onMyProfile(CCObject* target) {
        showPopup();
    }

    bool init() {
        if (!MenuLayer::init())
            return false;

        hideButtons(this);

        return true;
    }
};
