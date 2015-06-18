#include "EnemyOrthors.h"
#include "Include.h"

EnemyOrthors::EnemyOrthors(){
	m_image = LoadGraph("Asset/Enemy/Orthors.png");
}


EnemyOrthors::~EnemyOrthors(){
	DeleteGraph(m_image);
}

int EnemyOrthors::GetImage(){
	return this->m_image;
}