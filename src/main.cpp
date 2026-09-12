#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

class $modify(MenuLayer) {
	void onPlay(CCObject* target) {
	   FLAlertLayer::create(
		"HAHA",
		"You're trapped here FOREVER!!",
		"OK"
	   )->show();
}	

	void onIconKit(CCObject* target) {
	   FLAlertLayer::create(
		"HAHA",
		"You're trapped here FOREVER!!",
		"OK"
	   )->show();
}

	void onMoreGames(CCObject* target) {
	   FLAlertLayer::create(
		"HAHA",
		"You're trapped here FOREVER!!",
		"OK"
	   )->show();
	
}
	void onEditor(CCObject* target) {
	   FLAlertLayer::create(
		"HAHA",
		"You're trapped here FOREVER!!",
		"OK"
	   )->show();
}
	void onProfile(CCObject* target) {
	   FLAlertLayer::create(
		"HAHA",
		"You're trapped here FOREVER!!",
		"OK"
	   )->show();
	}	
};
