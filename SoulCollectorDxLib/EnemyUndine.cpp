#include "EnemyUndine.h"
#include "Include.h"

EnemyUndine::EnemyUndine(){
	m_image = LoadGraph("Asset/Enemy/Undine.png");
}


EnemyUndine::~EnemyUndine(){
	DeleteGraph(m_image);
}

int EnemyUndine::GetImage(){
	return this->m_image;
}