#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> result;

    //treat string like input cin...
    stringstream ss(str);
    
    //temp storage
    string tokken;
    
    //pushback add input to the last of array
    //stoi change string to int
    while (getline(ss,tokken,',')){
            result.push_back(stoi(tokken));
    }
    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}