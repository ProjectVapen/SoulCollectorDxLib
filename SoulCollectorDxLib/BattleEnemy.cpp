#include "BattleEnemy.h"


BattleEnemy::BattleEnemy(){
	
	m_pDataEnemy = std::make_unique<DataEnemy>();
	m_pVecEnemy.resize(m_pDataEnemy->GetJoinBattle());
}


BattleEnemy::~BattleEnemy()
{
}

void BattleEnemy::MAIN(){

	

}