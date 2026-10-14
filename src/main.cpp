using namespace geode::prelude;

#include <Geode/modify/MenuLayer.hpp>
class $modify(MenuLayer) {
	void onQuit(CCObject* sender) {
		if(Mod::get()->getSettingValue<bool>("enabled")) {
			game::exit(true);
		} else {
			MenuLayer::onQuit(sender);
		}
	}
};