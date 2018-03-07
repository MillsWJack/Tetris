#pragma once
#include <SFML/Graphics.hpp>
class window
{
public:
	window();
	window(const sf::Vector2u& size, const std::string& title);
	~window();

	void BeginDraw();
	void EndDraw();

	void Update();

	inline bool isDone() { return m_isClosed; }

	void Draw(sf::Drawable& drawable);

private:
	void Setup(const sf::Vector2u& size, const std::string& title);
	void Create();
	void Destroy();

	bool m_isClosed;

	sf::RenderWindow m_window;
	sf::Vector2u m_windowSize;
	std::string m_windowTitle;
};

