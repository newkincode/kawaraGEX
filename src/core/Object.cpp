//
// Copyright (c) 2025 KawaraGEX.
//

#include "GEX_Object.h"

using namespace GEX;

Object::Object() {
  entityID = counter++;
}

void Object::destroy() {
  delete this;
}

uint32_t Object::getEntityId() const {
  return entityID;
}

bool Object::operator==(const Object &other) const {
  return entityID == other.entityID;
}
