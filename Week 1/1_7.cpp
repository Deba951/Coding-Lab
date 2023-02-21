#include<iostream>
using namespace std;

int main(){
    int n, p=7, q=10;
    cin >> n;

    for(int i=0; i<n; i++){
        if(i%2==0){
            cout << p << " ";
            p++;
        }
        else{
            cout << q << " ";
            q++;
        }
    }
}