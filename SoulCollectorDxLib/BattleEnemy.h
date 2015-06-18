#pragma once
#include "Include.h"
#include "EnemyBase.h"
#include "DataEnemy.h"
class BattleEnemy{

	private:

		std::vector<std::unique_ptr<EnemyBase>>m_pVecEnemy;

		std::unique_ptr<DataEnemy> m_pDataEnemy;

	public:
		BattleEnemy();
		~BattleEnemy();
		void MAIN();
};

