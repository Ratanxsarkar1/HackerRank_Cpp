/*Input Format
Input consists of the following space-separated values: int, long, char, 
float, and double, respectively.

Output Format
Print each element on a new line in the same order it was received as input.
 Note that the floating point value should be correct up to 3 decimal places 
 and the double to 9 decimal places.*/

 #include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int num;
    long longnum;
    char character;
    float floatnum;
    double longfloatnum;
    
    scanf("%d %ld %c %f %lf", &num, &longnum, &character, &floatnum, &longfloatnum);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf\n", num, longnum, character, floatnum, longfloatnum);
    
    return 0;
}
