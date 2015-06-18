#pragma once
#include "Include.h"

#include "EnemyBase.h"
#include "EnemyBigShield.h"
#include "EnemyDoriard.h"
#include "EnemyDragon.h"
#include "EnemyDryad.h"
#include "EnemyEvilFlame.h"
#include "EnemyGoblinWarrior.h"
#include "EnemyOrthors.h"
#include "EnemyShytarn.h"
#include "EnemySlime.h"
#include "EnemyUndine.h"
#include "EnemyZombieKnight.h"
class DataEnemy
{

	private:
			
		

		typedef struct _SEnemyData{
			std::string m_sName;
			int m_sID;
			int m_sAttribute;
			int m_sHP;
			int m_sATK;
			int m_sDEF;
			int m_sSPD;
		}sEnemyData;


		std::vector<sEnemyData>m_enemyAllData;

		std::string m_filePath;

		/*	ファイルからvector配列に移す際に使用	*/
		int m_elementEnemyCnt;		
		int m_loadCnt;

		int m_joinBattleEnemys;	//戦闘に出てくる敵の数（ランダム値）
		int m_pickUpEnemy;		//何が出てくるか（ランダム値）
				
		int const m_MAX_JOIN_ENEMYS; //	戦闘に出てくる最大数
		int const m_ALL_ENEMYS;		//そこに出てくる種類の上限

	public:
		DataEnemy(std::string filePath);
		~DataEnemy();

		bool ReadCsvData(std::string filePath);

		int RandomJoinBattle();
		int RandomPickUpEnemy();

		std::unique_ptr<EnemyBase> SetEnemy();

		int GetJoinBattle();
};

