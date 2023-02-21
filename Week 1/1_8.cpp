#include<iostream>
using namespace std;

int main(){
    int n, cnt=0, p=1, q;
    cin >> n;

    for(int i=0; i<n; i++){
        q=p+cnt;
        cout << q << " ";
        p=q;
        cnt++;
    }
}