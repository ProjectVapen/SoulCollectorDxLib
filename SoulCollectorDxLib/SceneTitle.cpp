#include "SceneTitle.h"
#include "Application.h"
extern std::unique_ptr<Application> pApp;

SceneTitle::SceneTitle() 
{
	m_backImage = LoadGraph("Asset/Scenes/Title.png");
}


SceneTitle::~SceneTitle(){

	DeleteGraph(m_backImage);

}

void SceneTitle::Render(){

	DrawExtendGraph(0, 0,
		pApp->m_pWindow->GetWindowWidth(), pApp->m_pWindow->GetWidowHeight(), m_backImage, FALSE);

	DrawFormatString(0, 10, GetColor(255, 255, 255), "ƒ^ƒCƒgƒ‹‰æ–Ê");
}