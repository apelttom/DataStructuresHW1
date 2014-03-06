#include "exercises.h"

#include <iostream>
#include <string>
using namespace std;

double const PI = 3.14159;
char const CONVERTER = '0';

void Exercises::exercise1(){
    int x = 0, y = 0;
    cout << "Arithmetic operations. Please enter 2 numbers:" << endl;
    cout << "x = "; cin >> x;
    cout << "y = "; cin >> y;
    cout << "Results:" << endl;
    cout << "x + y = " << x+y << endl;
    cout << "x * y = " << x*y << endl;
    cout << "x - y = " << x-y << endl;
    cout << "x / y = " << x/y << endl;
}

void Exercises::exercise2(){
    int radius = 0;
    cout << "Please enter radius of circle:" << endl;
    cout << "Radius = "; cin >> radius;
    if(radius<0){
        cout << "Radius has to be greater than zero!" << endl;
        return;
    }
    cout << "Diameter: " << 2*radius << endl;
    cout << "Circle: " << 2*radius*PI << endl;
    cout << "Area: " << radius*radius*PI << endl;
}

void Exercises::exercise3(){
    int a = 0,b = 0,c = 0;
    cout << "Right triangle test. Please enter 3 numbers:" << endl;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    int maxN = a;
    if(b>maxN) maxN = b;
    if(c>maxN) maxN = c;
    if(maxN==a){
        if(a*a==(b*b+c*c)){
            cout << "These 3 sides can form a right triangle." << endl;
            return;
        }
    }
    if(maxN==b){
        if(b*b==(a*a+c*c)){
            cout << "These 3 sides can form a right triangle." << endl;
            return;
        }
    }
    if(maxN==c){
        if(c*c==(a*a+b*b)){
            cout << "These 3 sides can form a right triangle." << endl;
            return;
        }
    }
    cout << "It is NOT possible to form a right rectangle with these 3 sides." << endl;
}

void Exercises::exercise4(){
    string number;
    int *digits;
    cout << "Palindromic number test. Please enter a number:" << endl;
    cout << "x = "; cin >> number;
    digits = new int[number.size()];
    for(int i=0; i<(int)number.length();i++){
        digits[i] = number.at(i) - '0';
    }
    cout << "Testing digites in number:" << endl;
    for(int i=0,j=number.length()-1; i<(int)number.length();i++,j--){
        if(digits[i]!=digits[j]){
            cout << "Digit on position " << i+1 << " differs from digit on position " << j+1 << "." <<endl;
            cout << "This is not a palindromic number" << endl;
            return;
        }
        cout << "Digit on position " << i+1 << " is the same as digit on position " << j+1 << ". The value is " << digits[i] << endl;
    }
    cout << endl << "This is a palindromic number" << endl;
    delete[] digits;
}

void Exercises::exercise5(){
    int *arr;
    int length = 0;
    cout << "Magic array. Please enter how many numbers, you will write." << endl;
    cout << "How many numbers? "; cin >> length;
    arr = new int[length];
    cout << "Please enter the numbers separated by space (after last one hit enter):" << endl;
    for(int i=0;i<length;i++){
        cin >> arr[i];
    }
    cout << "You have entered these numbers:" << endl;
    for(int i=0;i<length;i++){
        cout << arr[i] << " ";
    }
    delete[] arr;
}
