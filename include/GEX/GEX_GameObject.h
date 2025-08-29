//
// Copyright (c) 2025 KawaraGEX.
//

#ifndef KAWARAGEX_GAMEOBJECT_H
#define KAWARAGEX_GAMEOBJECT_H
#include "GEX_Transform.h"

namespace GEX {
  class GameObject : public Transform {
  public:
    void destroy();
  };
}

#endif //KAWARAGEX_GAMEOBJECT_H
