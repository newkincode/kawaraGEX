//
// Copyright (c) 2025 KawaraGEX.
//

#ifndef GEX_ID_H
#define GEX_ID_H
#include <cstdint>

namespace GEX {
  class GEX_Id {
  public:
    GEX_Id();

    GEX_Id getId() const;

    bool operator==(const GEX_Id &other) const;

  private:
    uint32_t id;
    inline static uint32_t counter = 0;
  };
}

#endif //GEX_ID_H
