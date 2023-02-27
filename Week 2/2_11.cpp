#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

int main(){
    int a, b, arra[100], arrb[100], p, q, k;
    cin >> a >> b;

    //cout << "GCD: " << __gcd(a, b) << ", " << "LCM: " << " " << ((a*b)/__gcd(a, b)) << endl;
    
    for(int i=0; i<a; i++){
        if(a%1==0){
            arra[i] = a;
            p++;
        }
    }

    for(int i=0; i<b; i++){
        if(b%1==0){
            arra[i] = b;
            q++;
        }
    }
    
    for(int i=max(a, b)-1; i>0; i--){
        if(a%i==0 && b%i==0){
            cout << "GCD: " << i << endl;
            k=i;
            break;
        }
    }
    
    cout << "LCM: " << ((a*b)/k);
    return 0;
}