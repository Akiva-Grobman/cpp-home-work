#include "Dot.h"
#include<iostream>

using namespace std;

Dot::Dot()
{
    float arr[2] = {1.2, 3.4};
    m_points = nullptr;
    setDot(2, arr);
}

Dot::Dot(int dimension, float *pPoint)
{
    m_points = nullptr;
    setDot(dimension, pPoint);
}

float *Dot::getDot()
{
    return m_points;
}

int Dot::getDimension() const {
    return m_dimension;
}

void Dot::setDot(int dimension, float* points)
{
    m_dimension = dimension;
    if(m_points) {
        delete[] m_points;
    }
    m_points = new float[dimension];
    for (int i = 0; i < dimension; i++)
    {
        m_points[i] = points[i];
    }
}

void Dot::printDot()
{
    cout << "[";
    for (int i = 0; i < m_dimension; i++)
    {
        cout << m_points[i];
        if(i + 1 != m_dimension) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

Dot::~Dot()
{
    delete[] m_points;
}

