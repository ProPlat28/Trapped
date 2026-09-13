#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

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

    void onGarage(CCObject* target) {
        showPopup();
    }
   
    void onCreator(CCObject* target) {
        showPopup();
    }

    void onDaily(CCObject* target) {
        showPopup();
    }

    void onOptions(CCObject* target) {
        showPopup();
    }

    void onNewgrounds(CCObject* target) {
        showPopup();
    }

    void onStats(CCObject* target) {
        showPopup();
    }

    void onAchievements(CCObject* target) {
        showPopup();
    }

    void onMoreGames(CCObject* target) {
        showPopup();
    }

    void onQuit(CCObject* target) {
        showPopup();
    }

    void onMyProfile(CCObject* target) {
        showPopup();
    }

    void onRobTop(CCObject* target) {
        showPopup();
    }

    void onYouTube(CCObject* target) {
        showPopup();
    }

    void onTwitch(CCObject* target) {
        showPopup();
    }

    void onDiscord(CCObject* target) {
        showPopup();
    }

    void onTwitter(CCObject* target) {
        showPopup();
    }

    void onFacebook(CCObject* target) {
        showPopup();
    }

static void hideButtons(cocos2d::CCNode* node) {
    if (!node)
        return;

    auto id = std::string(node->getID());

    if (id == "dankmeme.globed2/mein-menu-button" ||
        id == "geode.loader/geode-button") {
        node->setVisible(false);
    }

    for (auto child : CCArrayExt<cocos2d::CCNode*>(node->getChildren())) {
        hideButtons(child);
    }
}

class $modify(MenuLayer) {
    bool init() {
        if (!MenuLayer::init())
            return false;

        hideButtons(this);

        return true;
    }
};
