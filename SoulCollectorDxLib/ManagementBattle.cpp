#include "ManagementBattle.h"
#include "Application.h"
extern std::unique_ptr<Application> pApp;

ManagementBattle::ManagementBattle(){

	m_pBattleCard = std::make_unique<BattleCard>();
	m_pBattleEnemy = std::make_unique<BattleEnemy>();
	m_pBattleMedium = std::make_unique<BattleMedium>();
	m_pBattlePlayer = std::make_unique<BattlePlayer>();

	
}


ManagementBattle::~ManagementBattle(){
}

void ManagementBattle::PushKeyState(AppController::eGetController pushKey){
	//�R���g���[���[���͏������L�q

}

void ManagementBattle::PushKeyState(){
	
	WaitKey();
	pApp->m_pAppData->IsUpData(true);

}

void ManagementBattle::Render(){
	m_pBattleEnemy->Render();
}

void ManagementBattle::Proc(){

	if (m_pBattleEnemy->EnemyBrain())
	{
		//�G�̎v�l�I����
		//�v���C���[�̑I���X�^�[�g
		
		IsSelectEnd(true);

	}

	if (IsSelectEnd())
	{
		//�������ɍU��
		//�_���[�W�v�Z�Ƃ��̏���
		//�_���[�W�𔽉f
	}

}

bool ManagementBattle::IsSelectEnd(){
	return m_isSelect;
}

void ManagementBattle::IsSelectEnd(bool selectFlg){
	m_isSelect = selectFlg;
}

