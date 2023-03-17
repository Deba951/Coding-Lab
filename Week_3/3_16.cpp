#include<iostream>
using namespace std;

int main(){
    int n, a=1;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++)
            cout << "  ";
        
        for(int j=1; j<=i; j++)
            cout << "* ";
        
        cout << endl;
    }


    for(int i=2; i<=n; i++){    
        for(int j=1; j<i; j++)
            cout << "  ";
        
        for(int j=n-i+1; j>0; j--)
            cout << "* ";
        
        cout << endl;
    }
}