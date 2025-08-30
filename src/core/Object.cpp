//
// Copyright (c) 2025 KawaraGEX.
//

#include "GEX_Object.h"

using namespace GEX;

void Object::destroy() {
  delete this;
}

GEX_Id Object::getEntityId() const {
  return entityID;
}
