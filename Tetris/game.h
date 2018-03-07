#pragma once
#include "window.h"
class game
{
public:
	game();
	~game();

	void Update();
	void Render();

	inline window* GetWindow() { return &m_window; }

private:
	window m_window;
};

