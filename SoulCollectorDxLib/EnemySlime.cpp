#include "EnemySlime.h"
#include "Include.h"

EnemySlime::EnemySlime(){
	m_image = LoadGraph("Asset/Enemy/Slime.png");
}


EnemySlime::~EnemySlime(){
	DeleteGraph(m_image);
}

int EnemySlime::GetImage(){
	return this->m_image;
}