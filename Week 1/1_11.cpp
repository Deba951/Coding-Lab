// e 14, 28, 20, 40, 32, 6

#include<iostream>
using namespace std;

int main(){
    int n, p=14, cnt=6, i=1;
    cin >> n;

    while(i<=n){
        cout << p << " " << p*2 << " ";
        p+=cnt;
        i++;
        cnt=cnt*i;
    }
}