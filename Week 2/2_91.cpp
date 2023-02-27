#include <iostream>
using namespace std;

int main(){
    int n, count=1, s=0, i, j;
    cin >> n;

    for(j=2; j<=n; j++){
        for(i=2; i<=j-1; i++){
                if(j%i==0){
                    count=0;
                    break;
                }
        }

        if(count)
            s+=j;        
        
        count=1;
    }
    cout << "sum of first " << n << " prime numbers: " << s;
}