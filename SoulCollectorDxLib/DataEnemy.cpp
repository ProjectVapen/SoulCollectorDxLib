/*	CSVfile読み込みじに使用	*/
#include <fstream>
#include <sstream>
/*	ランダム値生成に使用	*/
#include <time.h>
#include <math.h>
#include <iostream>

#include "DataEnemy.h"
#include "Entry.h"

extern Entry entry;



DataEnemy::DataEnemy(std::string filePath):
m_MAX_JOIN_ENEMYS(5),
m_ALL_ENEMYS(10)
{

	m_filePath = filePath;
	m_joinBattleEnemys = RandomJoinBattle();
	
	ReadCsvData(filePath);
}


DataEnemy::~DataEnemy()
{
}



bool DataEnemy::ReadCsvData(std::string filePath){

	std::ifstream file;
	std::vector<std::string>data;

	file.open(filePath);
	if (file.bad())
	{
		std::cerr << "Can't Read Enemy's CSVfile" << std::endl;
	}

	std::string csvLine;
	std::string csvCol;

	m_elementEnemyCnt = 0;
	m_loadCnt = 0;

	while (std::getline(file, csvLine))
	{
		std::stringstream csvStream(csvLine);
		m_loadCnt += 1;
		while (getline(csvStream, csvCol, ','))
		{
			data.push_back(csvCol);

		}
		m_enemyAllData.resize(m_loadCnt);
		m_enemyAllData[m_elementEnemyCnt].m_sName = data[0];
		m_enemyAllData[m_elementEnemyCnt].m_sID = std::atoi(data[1].c_str());
		m_enemyAllData[m_elementEnemyCnt].m_sAttribute = std::atoi(data[2].c_str());

		m_enemyAllData[m_elementEnemyCnt].m_sHP = std::atoi(data[3].c_str());
		m_enemyAllData[m_elementEnemyCnt].m_sATK = std::atoi(data[4].c_str());
		m_enemyAllData[m_elementEnemyCnt].m_sDEF = std::atoi(data[5].c_str());
		m_enemyAllData[m_elementEnemyCnt].m_sSPD = std::atoi(data[6].c_str());

		m_elementEnemyCnt++;
		data.clear();
	}

	file.close();
	return true;
}

std::unique_ptr<EnemyBase> DataEnemy::SetEnemy(){
	switch (RandomPickUpEnemy()){
	case 1:
		return std::make_unique<EnemySlime>();
		break;
	}
}

int DataEnemy::RandomJoinBattle(){
	int Value;
	srand((unsigned int)time(NULL));	//rand()の初期化

	Value = rand() % m_MAX_JOIN_ENEMYS + 1;

	return Value;
}

int DataEnemy::RandomPickUpEnemy(){
	int Value;
	srand((unsigned int)time(NULL));	//rand()の初期化

	Value = rand() % m_ALL_ENEMYS + 1;

	return Value;
}

int DataEnemy::GetJoinBattle(){
	return m_joinBattleEnemys;
}