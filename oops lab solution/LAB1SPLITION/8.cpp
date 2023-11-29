#include <iostream>
using namespace std;
int main(){
    int length, breadth, area;
    cout << "Enter the length : ";
    cin >> length;
    cout << "Enter the breadth : ";
    cin >> breadth;
    area = length * breadth;
    cout << "Area of Rectangle: " << area;
    return 0;
}