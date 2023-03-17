/*
9 10 11 12 
13 14 15 
16 17 
18 
19 18 
17 16 15 
14 13 12 11 
*/


#include <iostream>
using namespace std;

int main() {
    int num = 9;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4 - i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < i + 2; j++) {
            cout << num << " ";
            num--;
        }
        cout << endl;
    }
    return 0;
}