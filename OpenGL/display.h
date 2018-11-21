#pragma once
#include <string>
#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>

class Display
{
public:
	Display(int width, int height, const std::string& title);

	void Update();
	bool IsClosed();

	virtual ~Display();
private:
	SDL_Window * m_window;
	SDL_GLContext m_glContext;
	bool m_isClosed;
};

