#include<iostream>
using namespace std;
int main()
{
    float fahrenheit, celsius;
    cout<<"Enter the Temperature in Fahrenheit: ";
    cin>>fahrenheit;
    cout<<"Enter the Temperature in celsius: ";
    cin>>celsius;
    celsius = (fahrenheit-32)/1.8;
    fahrenheit =(9/5 + 32);
    cout<<"\nEquivalent Temperature in Celsius: "<<celsius;
    cout<<endl;
    cout<<"\nEquivalent Temperature in fahrenheit: ";
    cout<<endl;
    return 0;
}