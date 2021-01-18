#include "MyVector.h"
#include <iostream>

using namespace std;

int main()
{
    float arr[3] = {1.2f, 3.4f, 5.6f};
    Dot firstDot;
    Dot secondDot(3, arr);

    cout << "First dot\n";
    firstDot.printDot();
    cout << "Second dot\n";
    secondDot.printDot();

    float arr2[] = {1.3, 4.0};
    float arr3[] = {4.3, 2.3};
    MyVector firstVector(2, arr3);
    MyVector secondVector(2, arr2);

    cout << "First vector\n";
    firstVector.printVector();
    cout << "Second vector\n";
    secondVector.printVector();

    firstVector.multiply(2.0f);
    cout << "First * 2\n";
    firstVector.printVector();

    secondVector.subtract(firstVector);
    cout << "Second - first\n";
    firstVector.printVector();
    secondVector.printVector();

    secondVector.add(firstVector);
    cout << "First + second\n";
    firstVector.printVector();
    secondVector.printVector();

    return 0;
}
