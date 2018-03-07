#include "window.h"

window::window()
{
}

window::window(const sf::Vector2u& size, const std::string& title)
{
	Setup(size, title);
}

window::~window()
{
	Destroy();
}

void window::BeginDraw()
{
	m_window.clear(sf::Color::White);
}

void window::EndDraw()
{
	m_window.display();
}

void window::Draw(sf::Drawable& drawable)
{
	m_window.draw(drawable);
}

void window::Update()
{
	sf::Event e;
	while (m_window.pollEvent(e))
	{
		if (e.type == sf::Event::Closed)
		{
			m_isClosed = true;
		}
	}
}

void window::Setup(const sf::Vector2u& size, const std::string& title)
{
	m_windowTitle = title;
	m_windowSize = size;
	m_isClosed = false;
	Create();
}

void window::Create()
{
	m_window.create({ m_windowSize.x, m_windowSize.y, 32 }, m_windowTitle);
}

void window::Destroy()
{
	m_window.close();
}