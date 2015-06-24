#include "ManagementTitle.h"
#include "ManagementStart.h"
#include "SceneTitle.h"
#include "Application.h"

const std::string ManagementTitle::m_sceneName = "Title";

ManagementTitle::ManagementTitle(ManagementScene& managementScene) :
ManagementBase(m_sceneName, managementScene)
{
	
}


ManagementTitle::~ManagementTitle()
{
}


void ManagementTitle::PushKeyState(AppController::eGetController pushKey){
	//コントローラー入力処理を記述
}

void ManagementTitle::PushKeyState(){
	
//	pApp->m_pAppData->IsUpData(true);
}

void ManagementTitle::Init(){
	MessageBox(NULL, "Title", "デバッグ", MB_OK);
	DrawFormatString(0, 10, GetColor(255, 255, 255), "タイトル画面");
	m_pScnene = std::make_unique<SceneTitle>();
}

void ManagementTitle::Render(){
	m_pScnene->Render();

}

void ManagementTitle::UpDate(){


	ChangeScene(ManagementScene::ChangeSceneData(
		ManagementStart::m_sceneName));
}

void ManagementTitle::ImageDelete(){
	m_pScnene->ImageDelete();
	m_pScnene = nullptr;
}

