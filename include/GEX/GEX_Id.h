//
// Copyright (c) 2025 KawaraGEX.
//

#ifndef GEX_ID_H
#define GEX_ID_H
#include <cstdint>

namespace GEX {
  class Id {
  public:
    Id();

    bool operator==(const Id &other) const;

  private:
    uint32_t id;
    inline static uint32_t counter = 0;
  };
}

#endif //GEX_ID_H
