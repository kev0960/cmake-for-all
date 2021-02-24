#ifndef SHAPE_H
#define SHAPE_H

namespace shape {

class Rectangle {
  public:
    Rectangle(float w, float h);

    float GetSize() const;
    void Print() const;

  private:
    float w_, h_;
};

}

#endif
