#include "Engine.h"
#include "SDL3/SDL.h"

Engine::Engine() {
}

void Engine::openWindow() {
    SDL_Init(SDL_INIT_VIDEO); // Initialize SDL3

    // Create an application window with the following settings:
    SDL_Window *window = SDL_CreateWindow(
        "An SDL3 window", // window title
        640, // width, in pixels
        480, // height, in pixels
        SDL_WINDOW_OPENGL // flags - see below
    );

    // Check that the window was successfully created
    if (window == nullptr) {
        // In the case that the window could not be made...
        SDL_LogError(SDL_LOG_CATEGORY_ERROR, "Could not create window: %s\n", SDL_GetError());
        return;
    }

    bool running = true;
    while (running) {
        SDL_Event event;

        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_QUIT) {
                running = false;
            }
        }

        // Do game logic, present a frame, etc.
    }

    SDL_DestroyWindow(window);

    SDL_Quit();
}