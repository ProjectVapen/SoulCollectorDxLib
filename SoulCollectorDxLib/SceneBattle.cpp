#include "SceneBattle.h"
#include "Entry.h"
extern Entry entry;

SceneBattle::SceneBattle(){
	m_backImage = LoadGraph("Asset/Battle.png");
}


SceneBattle::~SceneBattle(){
	DeleteGraph(m_backImage);
}

void SceneBattle::Render(){
	DrawExtendGraph(0, 0,
		entry.m_pWindow->GetWindowWidth(), entry.m_pWindow->GetWidowHeight(), m_backImage, FALSE);

}