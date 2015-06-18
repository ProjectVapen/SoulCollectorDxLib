#include "EnemyGoblinWarrior.h"
#include "Include.h"

EnemyGoblinWarrior::EnemyGoblinWarrior(){
	m_image = LoadGraph("Asset/Enemy/GoblinWarrior.png");
}


EnemyGoblinWarrior::~EnemyGoblinWarrior(){
	DeleteGraph(m_image);
}

int EnemyGoblinWarrior::GetImage(){
	return this->m_image;
}