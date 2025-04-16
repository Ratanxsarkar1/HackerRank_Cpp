/*You will be given an array of integers and you have to print the integers in the reverse order.
The first line of the input contains N ,where N is the number of integers.The next line contains N space-separated integers.*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int number;
    cin >> number;
    int arr[number];
    for (int i =0; i<number;i++) {
        cin >> arr[number - i-1];
        
    }
    for (int i=0;i<number;i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
