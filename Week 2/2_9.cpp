#include <iostream>
using namespace std;

int main(){
    int n, i, j=2, count=0, s=0, cnt=1;
    cout << "Enter range number--> ";
    cin >> n;
    
    while(count<n){
        for(i=2; i<=j-1; i++){
            if(j%i==0){
                cnt=0;
                break;
            }
        }

        if(cnt){
            s+=j;
            count++;
        }
        j++;
        cnt=1;
    }
    cout << "sum of first " << n << " prime numbers: " << s;
    return 0;
}