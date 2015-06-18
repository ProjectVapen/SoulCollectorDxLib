#include "EnemyShytarn.h"
#include "Include.h"

EnemyShytarn::EnemyShytarn(){
	m_image = LoadGraph("Asset/Enemy/Shytarn.png");
}


EnemyShytarn::~EnemyShytarn(){
	DeleteGraph(m_image);
}

int EnemyShytarn::GetImage(){
	return this->m_image;
}