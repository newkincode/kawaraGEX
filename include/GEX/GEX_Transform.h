//
// Copyright (c) 2025 KawaraGEX.
//

#ifndef KAWARAGEX_TRANSFORM_H
#define KAWARAGEX_TRANSFORM_H
#include "GEX_Attachment.h"


namespace GEX {
  class Transform : public Attachment {
  public:
    void setX(const double x);

    void setY(const double y);

    [[nodiscard]] double getX() const;

    [[nodiscard]] double getY() const;

  private:
    double x{0};
    double y{0};
  };
}


#endif //KAWARAGEX_TRANSFORM_H
