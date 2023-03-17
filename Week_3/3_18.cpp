#include <iostream>
using namespace std;

int main(){
    int n=4;

    for(int i=1; i<=n; i++){

        for(int j=1; j<=i; j++)
            cout << "* ";
        //cout << endl;

        for(int j=1; j<=n-i; j++)
            cout << "  ";

        for(int j=1; j<n-i; j++)
            cout << "  ";
        
        for(int j=1; j<=i; j++){
            if(i==n && j==n)
                break;
            cout << "* ";
        }
        
        cout << endl;
    }
    return 0;
}