#pragma once
class Window
{
	private:
		
		int const m_WINDOWWIDTH;
		int const m_WINDOWHEIGHT;
	
	public:
		Window();
		Window(int width,int height);
		~Window();

		int GetWindowWidth()const;
		int GetWidowHeight()const;
};

