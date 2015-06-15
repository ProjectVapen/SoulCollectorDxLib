#include "Window.h"


Window::Window(int width,int height):
m_WINDOWWIDTH(width),
m_WINDOWHEIGHT(height)
{
}


Window::~Window()
{
}

int Window::GetWidowHeight()const{
	return m_WINDOWHEIGHT;
}

int Window::GetWindowWidth()const{
	return m_WINDOWWIDTH;
}