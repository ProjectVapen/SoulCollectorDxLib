#include "BattleEnemy.h"


BattleEnemy::BattleEnemy(){
	
	int vecSize = 0;

	m_pDataEnemy = std::make_unique<DataEnemy>("Asset/CSV/Enemy/EnemyList.csv");
	
	//m_pVecEnemy.push_back(std::make_unique<Enemy>());


	m_pVecEnemy.resize(m_pDataEnemy->GetJoinBattle());
	for (int i = 0; i < m_pDataEnemy->GetJoinBattle(); i++){
		vecSize += 1;

		m_pDataEnemy->RandomPickUpEnemy();
		
		
		
		m_pVecEnemy[i].EnemyName(m_pDataEnemy->GetEnemyName());
		m_pVecEnemy[i].EnemyID(m_pDataEnemy->GetEnemyID());
		m_pVecEnemy[i].EnemyAttribute(m_pDataEnemy->GetEnemyAttribute());
		

		m_pVecEnemy[i].EnemyHP(m_pDataEnemy->GetEnemyHP());
		m_pVecEnemy[i].EnemyATK(m_pDataEnemy->GetEnemyATK());
		m_pVecEnemy[i].EnemyDEF(m_pDataEnemy->GetEnemyDEF());
		m_pVecEnemy[i].EnemySPD(m_pDataEnemy->GetEnemySPD());

		m_pVecEnemy[i].EnemyImagePath(m_pDataEnemy->GetEnemyImagePath());
		m_pVecEnemy[i].EnemyLoadImage();
		
	
	}
	
		
	m_enemyPotion = 0;
	
}


BattleEnemy::~BattleEnemy()
{
	m_pVecEnemy.clear();
}

void BattleEnemy::Draw(){
	
	
	for (int i = 0; i < m_pDataEnemy->GetJoinBattle(); i++){
		
		
		if (i < 3)
		{
			m_pVecEnemy[i].Render(250, 10 + (150 * i), 400, 150 + (150 * i));
		}
		else	
		{
			
			m_pVecEnemy[i].Render(50, 100 + (150 * m_enemyPotion), 200, 230 + (150 * m_enemyPotion));
			m_enemyPotion += 1;
		}
	}
	
	

}