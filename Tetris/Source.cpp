#include "game.h"

int main()
{
	game game;
	while (!game.GetWindow()->isDone())
	{
		game.Update();
		game.Render();
	}
	return 0;
}