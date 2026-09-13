#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(TrappedMenuLayer, MenuLayer) {

    void hideButtons(float) {
        auto bottomMenu = this->getChildByID("bottom-menu");

        if (!bottomMenu)
            return;

        auto globed = bottomMenu->getChildByID(
            "dankmeme.globed2/main-menu-button"
        );

        if (globed)
            globed->setVisible(false);

        auto geode = bottomMenu->getChildByID(
            "geode.loader/geode-button"
        );

        if (geode)
            geode->setVisible(false);

        this->scheduleOnce(
            schedule_selector(TrappedMenuLayer::hideButtons),
            0.0f
        );
    }

    bool init() {
        if (!MenuLayer::init())
            return false;

        hideButtons(0.0f);

        return true;
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
