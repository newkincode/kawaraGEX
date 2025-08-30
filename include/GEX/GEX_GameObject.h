//
// Copyright (c) 2025 KawaraGEX.
//

#ifndef GEX_GAMEOBJECT_H
#define GEX_GAMEOBJECT_H

#include "GEX_Scene.h"
#include "GEX_Transform.h"

namespace GEX {
  class GameObject : public Transform {
  public:
    static void destroy();

    Scene *getScene() const;

  private:
    Scene *scene = nullptr;
  };
}

#endif //GEX_GAMEOBJECT_H
