#include "EnemyZombieKnight.h"
#include "Include.h"

EnemyZombieKnight::EnemyZombieKnight(){
	m_image = LoadGraph("Asset/Enemy/ZombieKnight.png");
}


EnemyZombieKnight::~EnemyZombieKnight(){
	DeleteGraph(m_image);
}

int EnemyZombieKnight::GetImage(){
	return this->m_image;
}