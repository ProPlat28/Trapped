#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

static void hideTrappedButtons(CCNode* node) {
    if (!node)
        return;

    std::string id = std::string(node->getID());

    if (id == "dankmeme.globed2/mein-menu-button" ||
        id == "geode.loader/geode-button") {
        node->setVisible(false);
    }

    if (node->getChildren()) {
        for (auto child : CCArrayExt<CCNode*>(node->getChildren())) {
            hideTrappedButtons(child);
        }
    }
}

class $modify(MenuLayer) {

    void hideButtonsLater(float) {
        hideTrappedButtons(this);
    }

    void onEnter() {
        MenuLayer::onEnter();

        hideTrappedButtons(this);

        this->scheduleOnce(
            schedule_selector(MenuLayer::hideButtonsLater),
            0.1f
        );
    }

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
