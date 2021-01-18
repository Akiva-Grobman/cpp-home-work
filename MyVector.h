#include "Dot.h"

class MyVector
{
private:
    Dot m_dot;
public:
    MyVector();
    MyVector(int dimension, float* points);
    Dot getVectorDot();
    void setDot(int dimension, float* points);
    void printVector();
    void add(MyVector vector);
    void subtract(MyVector vector);
    void multiply(float scalar);
    ~MyVector();
};