#include <iostream>
using namespace std;

int main(){
    int n, s=0;
    cin >> n;

    for(int i=0; i<n; i++){
        if(n%i==0)
            s+=i;
    }
    if(s==n)
        cout << "PERFECT";
    else    
        cout << "NOT PERFECT";
}