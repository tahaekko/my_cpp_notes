#include <SDL2/SDL.h>
#include <SDL2/begin_code.h>
#include <iostream>

int main()
{
    if(SDL_Init(SDL_INIT_VIDEO) < 0)
    {
        std::cout << "Failed to initialize the SDL2 library\n";
        return -1;
    }

	SDL_Window *window = SDL_CreateWindow("SDL2 Window",
											SDL_WINDOWPOS_CENTERED,
											SDL_WINDOWPOS_CENTERED,
											680, 480,
											0);

    if(!window)
    {
        std::cout << "Failed to create window\n";
        return -1;
    }

    SDL_Surface *window_surface = SDL_GetWindowSurface(window);

    if(!window_surface)
    {
        std::cout << "Failed to get the surface from the window\n";
        return -1;
    }
    SDL_Surface *image;

	image = SDL_LoadBMP("tt.png");
	if (image == NULL)
		std::cout << "Load image err" << std::endl;
    SDL_UpdateWindowSurface(window);

    SDL_Delay(5000);
}

