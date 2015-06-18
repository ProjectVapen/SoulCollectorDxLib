#include "SceneStart.h"
#include "Entry.h"
extern Entry entry;

SceneStart::SceneStart(){
	m_backImage = LoadGraph("Asset/Scenes/Start.png");
}


SceneStart::~SceneStart(){
	DeleteGraph(m_backImage);
}

void SceneStart::Render(){
	DrawExtendGraph(0, 0,
		entry.m_pWindow->GetWindowWidth(), entry.m_pWindow->GetWidowHeight(), m_backImage, FALSE);
	DrawFormatString(0, 10, GetColor(255, 255, 255), "スタート画面");
}