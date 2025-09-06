#include "SDL.h"
#include "SDL_image.h"

#include <iostream>
#include <string>
#include <windows.h>

/*
In SDL3_image, the API has changed compared to SDL2_image.
The old IMG_Init() and IMG_Quit() functions are removed. 
You don’t need to initialize PNG/JPG support explicitly anymore — 
just use the loaders directly.

*/

int main(int argc, char* argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cerr << "SDL could not initialize!\n";
        return 1;
    }

    SDL_Window* window = SDL_CreateWindow("SDL3 PNG Example", 800, 600, SDL_WINDOW_RESIZABLE);
    if (!window) {
        std::cerr << "Window could not be created!\n";
        SDL_Quit();
        return 1;
    }

    SDL_Renderer* renderer = SDL_CreateRenderer(window, nullptr);
    if (!renderer) {
        std::cerr << "Renderer could not be created!\n";
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    // No IMG_Init needed in SDL3_image
    SDL_Texture* texture = IMG_LoadTexture(renderer, "example.png");
    if (!texture) {
        std::cerr << "Failed to load image: " << SDL_GetError() << "\n";
        SDL_DestroyRenderer(renderer);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    bool running = true;
    SDL_Event e;
    while (running) {
        while (SDL_PollEvent(&e)) {
            if (e.type == SDL_EVENT_QUIT) running = false;
        }

        SDL_RenderClear(renderer);
        SDL_RenderTexture(renderer, texture, nullptr, nullptr);
        SDL_RenderPresent(renderer);
    }

    SDL_DestroyTexture(texture);
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}