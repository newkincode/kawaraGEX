//
// Copyright (c) 2025 KawaraGEX.
//

#include <utility>

#include "GEX_Engine.h"

using namespace GEX;

Engine::Engine() : title("Untitled") {
}

Engine::Engine(string t) : title(move(t)) {
}

string Engine::getTitle() const {
  return title;
}

void Engine::setTitle(const std::string &t) {
  title = t;
}
