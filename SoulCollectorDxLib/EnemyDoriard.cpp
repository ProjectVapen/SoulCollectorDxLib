#include "EnemyDoriard.h"
#include "Include.h"

EnemyDoriard::EnemyDoriard(){
	m_image = LoadGraph("Asset/Enemy/Doriard.png");
}


EnemyDoriard::~EnemyDoriard(){
	DeleteGraph(m_image);
}

int EnemyDoriard::GetImage(){
	return this->m_image;
}