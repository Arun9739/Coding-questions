/* Program to swap the two varibale without using the third variable*/

#include <iostream>
using namespace std;

int main(){
    int a = 5, b = 10;
    cout << "Before swapping a = " << a << " b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping a = " << a << " b = " << b << endl;
}