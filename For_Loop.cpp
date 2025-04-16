/*Input Format

You will be given two positive integers,
a and b (a<=b), separated by a newline.

Output Format

For each integer
in the inclusive interval[a:b]
    If 1<= i <= 9, then print the English representation of it in lowercase. That is "one" for 1, "two" for 2, and so on.
    Else if i > 9 and it is an even number, then print "even".
    Else if i > 9 and it is an odd number, then print "odd".*/

    #include <iostream>
#include <cstdio>
#include <string>
using namespace std;

 void check(int n){
        if(n%2==0){
            cout << "even" << endl;
        }
        else{
            cout<<"odd"<<endl;
        }
    }
int main() {
    // Complete the code.
   
    int num1,num2;
    string arr[]= {"one","two","three","four","five","six","seven","eight","nine"};
    cin >> num1;
    cin >> num2;
    for(int i=num1; i<=num2;i++){
        if(i<=9){
            cout << arr[i-1]<<endl;
        }
    else {check(i);}
    }
    return 0;
}
