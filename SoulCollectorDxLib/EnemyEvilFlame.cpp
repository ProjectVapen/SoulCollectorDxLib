#include "EnemyEvilFlame.h"
#include "Include.h"

EnemyEvilFlame::EnemyEvilFlame(){
	m_image = LoadGraph("Asset/Enemy/EvilFlame.png");
}


EnemyEvilFlame::~EnemyEvilFlame(){
	DeleteGraph(m_image);
}

int EnemyEvilFlame::GetImage(){
	return this->m_image;
}