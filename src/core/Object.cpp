//
// Copyright (c) 2025 KawaraGEX.
//

#include "GEX_Object.h"

using namespace GEX;

void Object::destroy() {
  delete this;
}

Id Object::getEntityId() const {
  return entityID;
}
