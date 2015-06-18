#include "EnemyBigShield.h"
#include "Include.h"

EnemyBigShield::EnemyBigShield(){

	m_image = LoadGraph("Asset/Enemy/BigShield.png");
	
}


EnemyBigShield::~EnemyBigShield(){
	DeleteGraph(m_image);
}

int EnemyBigShield::GetImage(){
	return this->m_image;
}