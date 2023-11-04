#include <SDL2/SDL.h>
#include <SDL2/begin_code.h>
#include <iostream>
#define HEIGHT 600
#define WIDTH 600

void	ft_put_pix(SDL_Surface *surface, int x, int y, int color)
{
	SDL_LockSurface(surface);
	*(((int *)(surface->pixels) + ((y * (surface->pitch / 4)) + x)))= color;
}

int main()
{
	SDL_Window	*window = nullptr;
	if (SDL_Init(SDL_INIT_VIDEO) < 0)
		std::cout << SDL_GetError();

	window = SDL_CreateWindow("test", 0,0, WIDTH,HEIGHT, SDL_WINDOW_SHOWN);

	bool running = 1;
	SDL_Event	*event = new SDL_Event;


	SDL_Renderer *renderer = nullptr;
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED);
	if (!renderer)
	{
		std::cout << SDL_GetError();
		SDL_DestroyWindow(window);
		SDL_Quit();
		exit(1);
	}

	SDL_Rect	rect;
	rect.h = 50;
	rect.w = 50;
	rect.x = 50;
	rect.y = 50;


	int x,y;
	while (running)
	{
		while (SDL_PollEvent(event))
		{
			// SDL_GetMouseState(&x,&y);
			if (event->type == SDL_QUIT || event->key.keysym.sym == SDLK_ESCAPE)
				running = false;
			// if (event->button.button == SDL_BUTTON_LEFT)
			// 	ft_put_pix(screen,x, y, 255*255*256);
			// SDL_UpdateWindowSurface(window);
		}
		SDL_SetRenderDrawColor(renderer, 0,0,0,SDL_ALPHA_OPAQUE);
		  SDL_RenderClear(renderer);

        // Do our drawing
        SDL_SetRenderDrawColor(renderer,0,255,255,SDL_ALPHA_OPAQUE);
        SDL_RenderDrawLine(renderer,50,50,300,300);

        SDL_SetRenderDrawColor(renderer,0,0,255,SDL_ALPHA_OPAQUE);

        SDL_RenderDrawRect(renderer,&rect);
		SDL_RenderFillRect(renderer, &rect);

        // Finally show what we've drawn
        SDL_RenderPresent(renderer);

	}
	SDL_DestroyWindow(window);
	SDL_Quit();
}

