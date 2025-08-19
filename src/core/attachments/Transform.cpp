//
// Copyright (c) 2025 KawaraGEX. All rights reserved.
//

#include "core/attachments/Transform.h"

using namespace GEX;

void Transform::setX(const double newX) {
  x = newX;
}

void Transform::setY(const double newY) {
  y = newY;
}

double Transform::getX() const {
  return x;
}

double Transform::getY() const {
  return y;
}
