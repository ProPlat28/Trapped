```cpp
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

    void onArchievements(CCObject* target) {
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

    void onRobTop(CCObject* target) {
        showPopup();
    }

    void onYoutube(CCObject* target) {
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

    bool init() {
        if (!MenuLayer::init())
            return false;

        for (auto child : CCArrayExt<CCNode*>(this->getChildren())) {
            if (!child)
                continue;

            auto id = child->getID();
            if (id && std::string(id).find("geode") != std::string::npos) {
                child->setVisible(false);
            }
        }

        if (auto globed = this->getChildByID("dankmeme.globed2")) {
            globed->setVisible(false);
        }

        return true;
    }
};
