//
// Copyright (c) 2025 KawaraGEX.
//

#include "GEX_Id.h"

using namespace GEX;

Id::Id() {
  id = counter++;
}

bool Id::operator==(const Id &other) const {
  return id == other.id;
}
