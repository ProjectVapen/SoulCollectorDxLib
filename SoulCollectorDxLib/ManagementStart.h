#pragma once
#include "AppController.h"
class ManagementStart
{
	public:
		ManagementStart();
		~ManagementStart();

		void PushKeyState(AppController::eGetController pushKey);

		void PushKeyState();
};

