//
// Copyright (c) 2025 KawaraGEX.
//

#ifndef GEX_ENGINE_H
#define GEX_ENGINE_H

#include <string>

using std::string;

namespace GEX {
  class Engine {
  public:
    Engine(); // Untitled Constructor

    explicit Engine(string t); // Constructor with title

    [[nodiscard]] string getTitle() const;

    void setTitle(const string &t);

  private:
    std::string title;
  };
}

#endif //GEX_ENGINE_H
