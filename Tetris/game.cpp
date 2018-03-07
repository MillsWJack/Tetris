#include "game.h"

game::game()
	:m_window(sf::Vector2u(320, 480), "Tetris")
{
}

game::~game()
{
}

void game::Update()
{
	m_window.Update();
}

void game::Render()
{
	m_window.BeginDraw();
	m_window.EndDraw();
}