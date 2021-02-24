#include "shape.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

namespace shape {
namespace {

TEST(ShapeTest, RectangleSize) {
  Rectangle rect(10, 2);
  EXPECT_EQ(rect.GetSize(), 20);
}

}  // namespace
}  // namespace shape
