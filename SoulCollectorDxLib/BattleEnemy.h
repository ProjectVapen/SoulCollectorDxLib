#pragma once
#include "Include.h"
#include "Enemy.h"
#include "DataEnemy.h"
class BattleEnemy{

	private:

		int m_enemyPotion;

		std::vector<Enemy>m_pVecEnemy;

		std::unique_ptr<DataEnemy> m_pDataEnemy;

	public:
		BattleEnemy();
		~BattleEnemy();
		void Draw();
};

