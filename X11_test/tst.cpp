#include <SDL2/SDL.h>
#include <SDL2/begin_code.h>
#include <iostream>

int main()
{
	SDL_Window *window = nullptr;
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
		std::cerr << SDL_GetError() << std::endl;
	else
		std::cout << "video init sucess" << std::endl;

	window = SDL_CreateWindow("ZEB!", 0, 2500, 640 , 480, SDL_WINDOW_SHOWN);

	bool	running = 1;

	while (running)
	{
		SDL_Event event;

		while (SDL_PollEvent(&event))
		{
			if (event.type == SDL_QUIT || event.key.keysym.sym == SDLK_ESCAPE)
				running = 0;
			if (event.type == SDL_MOUSEMOTION)
				std::cout << "mouse has been moved \n";
			if (event.type == SDL_KEYDOWN)
			{
				if (event.key.keysym.sym == SDLK_0)
					std::cout << "0 pressed \n";
				if (event.key.keysym.sym == SDLK_w)
					std::cout << "move up \n";
				if (event.key.keysym.sym == SDLK_d)
					std::cout << "move right \n";

			}
		}
	}

	SDL_DestroyWindow(window);
	SDL_Quit();
}

