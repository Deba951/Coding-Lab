#include <iostream>
using namespace std;

int main(){
    int m, n, i, j=2, count=0, s=0, cnt=1;
    cout << "Enter Upper Limit--> ";
    cin >> m;
    cout << "Enter Lower Limit--> ";
    cin >> n;

    for(j=m; j<=n; j++){
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
    cout << "Sum of all prime Numbers between " << m << " and " << n << " is " << s;
    return 0;
}