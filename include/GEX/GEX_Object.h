//
// Copyright (c) 2025 KawaraGEX.
//

#ifndef KAWARAGEX_OBJECT_H
#define KAWARAGEX_OBJECT_H
#include <cstdint>

namespace GEX {
  class Object {
  public:
    Object();

    virtual void destroy();

    virtual void onDestroy() {
    }

    [[nodiscard]] uint32_t getEntityId() const;

    bool operator==(const Object &other) const;

  private:
    uint32_t entityID;
    inline static int counter = 0;
  };
}

#endif //KAWARAGEX_OBJECT_H
