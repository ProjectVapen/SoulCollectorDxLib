#include "SceneBattle.h"
#include "Application.h"
extern std::unique_ptr<Application> pApp;

SceneBattle::SceneBattle(){

	m_backImage = LoadGraph("Asset/Scenes/Battle.png");
}


SceneBattle::~SceneBattle(){
	DeleteGraph(m_backImage);
}

void SceneBattle::Render(){
	
	DrawExtendGraph(0, 0,
		pApp->m_pWindow->GetWindowWidth(), pApp->m_pWindow->GetWidowHeight(), m_backImage, FALSE);
	DrawFormatString(0, 10, GetColor(255, 255, 255), "ƒoƒgƒ‹‰æ–Ê");
}