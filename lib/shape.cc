#include "shape.h"

#include <fmt/core.h>

namespace shape {

Rectangle::Rectangle(float w, float h) : w_(w), h_(h) {}

float Rectangle::GetSize() const { return w_ * h_; }

void Rectangle::Print() const {
  fmt::print("내 크기는 : {} 입니다. \n", GetSize());
}

}  // namespace shape
