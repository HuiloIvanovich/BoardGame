#include "Cavalry.h"

Cavalry::Cavalry(PongoBaseBoardUnit* base) : PongoBoardUnit(base) {

}

std::vector<Cavalry::ActionMeta> Cavalry::turnAction() {
	std::vector<Cavalry::ActionMeta> actionVec;
	ActionMeta meta;
	actionVec.push_back(meta);
	return actionVec;
}

HeavyCavalry::HeavyCavalry(PongoBaseBoardUnit* base) : Cavalry(base) {
	_stats.health = 10;
	_stats.armor = 15;
	_stats.attack = 20;
}

std::vector<HeavyCavalry::ActionMeta> HeavyCavalry::userAction() {
	std::vector<HeavyCavalry::ActionMeta> actionVec;
	ActionMeta meta;
	actionVec.push_back(meta);
	return actionVec;
}

std::vector<HeavyCavalry::ActionMeta> HeavyCavalry::defend(HeavyCavalry::ActionMeta) {
	std::vector<HeavyCavalry::ActionMeta> actionVec;
	ActionMeta meta;
	actionVec.push_back(meta);
	return actionVec;
}

BoardUnit* HeavyCavalry::getCopy() {
	return nullptr;
}

LightCavalry::LightCavalry(PongoBaseBoardUnit* base) : Cavalry(base) {
	_stats.health = 10;
	_stats.armor = 15;
	_stats.attack = 20;
}

std::vector<LightCavalry::ActionMeta> LightCavalry::userAction() {
	std::vector<LightCavalry::ActionMeta> actionVec;
	ActionMeta meta;
	actionVec.push_back(meta);
	return actionVec;
}

std::vector<LightCavalry::ActionMeta> LightCavalry::defend(LightCavalry::ActionMeta) {
	std::vector<LightCavalry::ActionMeta> actionVec;
	ActionMeta meta;
	actionVec.push_back(meta);
	return actionVec;
}

BoardUnit* LightCavalry::getCopy() {
	return nullptr;
}

PlayableBoardUnit* CavalryFactory::getType(int type) {
	switch (type)
	{
	case 0:
		return (PlayableBoardUnit*)(new HeavyCavalry(_base));
		break;
	case 1:
		return (PlayableBoardUnit*)(new LightCavalry(_base));
		break;
	default:
		//throw
		return nullptr;
		break;
	}
}