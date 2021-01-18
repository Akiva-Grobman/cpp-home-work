#include "MyVector.h"

MyVector::MyVector()
{
    float arr[2] = {4.3f, 5.3f};
    setDot(2, arr);
}

MyVector::MyVector(int dimension, float* pPoints)
{
    setDot(dimension, pPoints);
}

Dot MyVector::getVectorDot()
{
    return m_dot;
}

void MyVector::setDot(int dimension, float* points)
{
    m_dot.setDot(dimension, points);
}

void MyVector::printVector()
{
    m_dot.printDot();
}

void MyVector::subtract(MyVector vector)
{
    for (int i = 0; i < m_dot.getDimension(); i++)
    {
        m_dot.getDot()[i] -= vector.getVectorDot().getDot()[i];
    }
}

void MyVector::multiply(float scalar)
{
    for (int i = 0; i < m_dot.getDimension(); i++)
    {
        m_dot.getDot()[i] *= scalar;
    }
}

void MyVector::add(MyVector vector) {
    for (int i = 0; i < m_dot.getDimension(); i++)
    {
        m_dot.getDot()[i] += vector.getVectorDot().getDot()[i];
    }
}

MyVector::~MyVector()
{
    if(this->m_dot.getDot()) {
        m_dot.~Dot();
    }
}
