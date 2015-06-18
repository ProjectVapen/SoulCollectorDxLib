#include "SceneTitle.h"
#include "Entry.h"
extern Entry entry;

SceneTitle::SceneTitle() 
{
	m_backImage = LoadGraph("Asset/Scenes/Title.png");
}


SceneTitle::~SceneTitle(){

	DeleteGraph(m_backImage);

}

void SceneTitle::Render(){

	DrawExtendGraph(0, 0,
		entry.m_pWindow->GetWindowWidth(), entry.m_pWindow->GetWidowHeight(), m_backImage, FALSE);

	DrawFormatString(0, 10, GetColor(255, 255, 255), "ƒ^ƒCƒgƒ‹‰æ–Ê");
}