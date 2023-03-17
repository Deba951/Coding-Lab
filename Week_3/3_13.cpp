/*
1  2  3  4  5  6  7
   8  9 10 11 12
     13 14 15
        16
*/ 

#include <iostream>
using namespace std;

int main() {
    int n = 7; // number of elements in first row
    int count = 1;

    for (int i=1; i<=5; i++) {

        for (int j=1; j<=i; j++)
            cout << "  ";
        
        for (int k=1; k<=n; k++) {
            cout << count << "  ";
            count++;
        }
        n=n-2;
        cout << endl;
    }
    return 0;
}