/*Given a positive integer n, 
do the following: If 1<= n <= 9,
print the lowercase English word corresponding to the number (e.g., one for , two for, etc.).
If n>9 , print Greater than 9.

Input Format
A single integern n. */

#include <iostream>
#include <string>

using namespace std;

void english(int n){
    switch (n) {
        case 1: cout << "one";break;
        case 2: cout << "two";break;
        case 3: cout << "three";break;
        case 4: cout << "four";break;
        case 5: cout << "five";break;
        case 6: cout << "six";break;
        case 7: cout << "seven";break;
        case 8: cout << "eight";break;
        case 9: cout << "nine";break;
        default: cout << "Greater than 9";break;
    }
}
int main(){
    int number;
    cin >> number;
    english(number);
    return 0; 
}
