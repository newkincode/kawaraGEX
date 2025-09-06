//
// Copyright (c) 2025 KawaraGEX.
//

#include <utility>

#include "GEX_Engine.h"

using namespace GEX;

Engine::Engine() : title("Untitled"), resourceManager() {
}

Engine::Engine(string t) : title(move(t)), resourceManager() {
}

string Engine::getTitle() const {
  return title;
}

void Engine::setTitle(const std::string &t) {
  title = t;
}
