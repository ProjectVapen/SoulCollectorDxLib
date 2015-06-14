#include "ManagementBattle.h"


ManagementBattle::ManagementBattle(){

	m_pBattleCard = std::make_unique<BattleCard>();
	m_pBattleEnemy = std::make_unique<BattleEnemy>();
	m_pBattleMedium = std::make_unique<BattleMedium>();
	m_pBattlePlayer = std::make_unique<BattlePlayer>();


}


ManagementBattle::~ManagementBattle(){
}
