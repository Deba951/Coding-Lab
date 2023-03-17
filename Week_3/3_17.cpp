#include <iostream>
using namespace std;

int main() {
    int n = 7; // number of elements in first row

    for (int i=1; i<=5; i++){

        for (int j=1; j<=i; j++)
            cout << "  ";
        
        for (int k=1; k<=n; k++)
            cout << "* ";
        
        n=n-2;
        cout << endl;
    }
    return 0;
}