/*Read numbers from stdin and print their sum to stdout.

Input Format
One line that contains
space-separated integers: a, b, andc
a, b, and c (1 ≤ a, b, c ≤ 1000).

Output Format
Print the sum of the three numbers on a single line.*/

#include <iostream>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int a,b,c;
    cin >> a >> b >> c;
    int sum = a + b + c;
    cout << sum << endl;


    
    return 0;
}
