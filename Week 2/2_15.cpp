#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0; i<=n; i++){
        if(n%i==0)
            cout << i << " ";
    }
}