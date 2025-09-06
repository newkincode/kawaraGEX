//
// Copyright (c) 2025 KawaraGEX.
//

#ifndef SHAPE2D_H
#define SHAPE2D_H

#include "GEX_GameObject.h"

namespace GEX {
  class BoundingBox : public GameObject {
  public:
    double getX() const;

    double getY() const;

  private:
    double x;
    double y;
  };
}

#endif //SHAPE2D_H
