#include<iostream>
using namespace std;

int main(){
    int n, m, p, s=0;
    cin >> n;
    m=n;

    while(n!=0){
        p=n%10;
        s=s+((p*p*p));
        n=n/10;
    }
    
    if(s==m)
        cout << "Armstrong";
    else
        cout << "Not Armstrong";
    return 0;
}