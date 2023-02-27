#include<iostream>
using namespace std;

int main(){
    int m, n, sum=0;
    cin >> m >> n;

    for(int i=m; i<=n; i++){
        int s=0, p=i;
        while(p!=0){
            s=s+((p%10)*(p%10)*(p%10));
            p=p/10;
        }
        if(s==i){
            cout << i << " ";
            sum=sum+i;
        }
    }
    cout << "\nSum = " << sum << endl;
}