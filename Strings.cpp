/*In the first line print two space-separated integers, representing the length of a and b respectively.
In the second line print the string produced by concatenating a and b (a+b).
In the third line print two strings separated by a space, a' and b'. a' and b' are the same as a and b, respectively, 
except that their first characters are swapped.*/

#include <iostream>
#include <string>
using namespace std;

int main() {

    string a, b;
    cin >> a >> b;
    cout << a.length() << " " << b.length() <<endl;
    cout << a+b << endl;
    cout << b[0] + a.substr(1) << " " << a[0] + b.substr(1);

    return 0;
}