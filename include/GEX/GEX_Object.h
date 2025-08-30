//
// Copyright (c) 2025 KawaraGEX.
//

#ifndef GEX_OBJECT_H
#define GEX_OBJECT_H
#include <cstdint>

#include "GEX_Id.h"

namespace GEX {
  class Object {
  public:
    virtual void destroy();

    virtual void onDestroy() {
    }

    [[nodiscard]] GEX_Id getEntityId() const;

  private:
    GEX_Id entityID;
  };
}

#endif //GEX_OBJECT_H
