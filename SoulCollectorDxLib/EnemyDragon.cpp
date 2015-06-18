#include "EnemyDragon.h"
#include "Include.h"

EnemyDragon::EnemyDragon(){
	m_image = LoadGraph("Asset/Enemy/Dragon.png");
}


EnemyDragon::~EnemyDragon(){
	DeleteGraph(m_image);
}

int EnemyDragon::GetImage(){
	return this->m_image;
}