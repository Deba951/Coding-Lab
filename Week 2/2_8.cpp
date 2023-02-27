#include <iostream>
using namespace std;

int main(){
    int n, cnt=0;
    cin >> n;

    if(n!=0 && n!=1){
        for(int i=2; i<=n; i++){
            if(n%i==0){
                cnt++;
            }
        }
        if(cnt>1)
            cout << "NOT PRIME ";
        else
            cout << "PRIME ";
    }
    if(n==0)
        cout << "Zero ";
    
    if(n==1)
        cout << "ONE ";
    
    return 0;
}