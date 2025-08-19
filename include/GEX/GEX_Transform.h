#ifndef KAWARAGEX_TRANSFORM_H
#define KAWARAGEX_TRANSFORM_H
#include "core/Attachment.h"


namespace GEX {
  class Transform : public Attachment {
  public:
    void setX(double x);

    void setY(double y);

    [[nodiscard]] double getX() const;

    [[nodiscard]] double getY() const;

  private:
    double x{0};
    double y{0};
  };
}


#endif //KAWARAGEX_TRANSFORM_H
