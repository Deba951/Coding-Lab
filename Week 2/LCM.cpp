#include <iostream>
using namespace std;

int main(){
    int a, b, arra[100], arrb[100], p, q;
    cin >> a >> b;

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

    for(int i=max(a, b); i<=a*b; i++){
        if(i%a==0 && i%b==0){
            cout << "LCM: " << i;
            break;
        }
    }
}