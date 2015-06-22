#include "SceneStart.h"
#include "Application.h"
extern std::unique_ptr<Application> pApp;

SceneStart::SceneStart(){
	m_backImage = LoadGraph("Asset/Scenes/Start.png");
}


SceneStart::~SceneStart(){
	DeleteGraph(m_backImage);
}

void SceneStart::Render(){
	DrawExtendGraph(0, 0,
		pApp->m_pWindow->GetWindowWidth(), pApp->m_pWindow->GetWidowHeight(), m_backImage, FALSE);
	DrawFormatString(0, 10, GetColor(255, 255, 255), "スタート画面");
}


