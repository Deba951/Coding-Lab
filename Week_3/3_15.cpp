#include <iostream>
using namespace std;

int main(){
    int n, a=1;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++)
            cout << "  ";
        
        for(int k=1; k<=a; k++)
            cout << " *";
        
        a+=2;
        cout << endl;
    }
}