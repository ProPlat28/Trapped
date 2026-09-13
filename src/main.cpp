#include <Geode/Geode.hpp>
#include <Geode/modify/CCMenu.hpp>

using namespace geode::prelude;

class $modify(CCMenu) {

    void addChild(CCNode* child) {
        CCMenu::addChild(child);

        if (!child)
            return;

        std::string id = std::string(child->getID());

        if (id == "dankmeme.globed2/main-menu-button" ||
            id == "geode.loader/geode-button") {
            child->setVisible(false);
        }
    }
};

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

    void onAchievements(CCObject* target) {
        showPopup();
    }

    void onCreator(CCObject* target) {
        showPopup();
    }

    void onNewgrounds(CCObject* target) {
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

    void onFacebook(CCObject* target) {
        showPopup();
    }
    
    void onTwitter(CCObject* target) {
        showPopup();
    }
    
    void onDiscord(CCObject* target) {
        showPopup();
    }

    void onTwitch(CCObject* target) {
        showPopup();
    }
    
    void onYouTube(CCObject* target) {
        showPopup();
    }

    void onRobTop(CCObject* target) {
        showPopup();
    }

    void onQuit(CCObject* target) {
        showPopup();
    }

    void onMyProfile(CCObject* target) {
        showPopup();
    }
};
