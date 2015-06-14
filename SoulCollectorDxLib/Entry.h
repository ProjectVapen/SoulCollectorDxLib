#pragma once
#include "Application.h"
#include "Window.h"

#include <memory>
class Entry
{
	public:
		Entry();
		~Entry();

		std::unique_ptr<Window> m_pWindow;
		std::unique_ptr<Application>m_pApp;


};

