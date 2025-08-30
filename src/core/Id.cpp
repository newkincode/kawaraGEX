//
// Copyright (c) 2025 KawaraGEX.
//

#include "GEX_Id.h"

using namespace GEX;

GEX_Id::GEX_Id() {
  id = counter++;
}

GEX_Id GEX_Id::getId() const {
  return id;
}

bool GEX_Id::operator==(const GEX_Id &other) const {
  return id == other.id;
}
