#include "GEX_Engine.h"

Engine::Engine() : title("Untitled") {}

Engine::Engine(const std::string& t) : title(t) {}

std::string Engine::getTitle() const {
    return title;
}

void Engine::setTitle(const std::string& t) {
    title = t;
}
