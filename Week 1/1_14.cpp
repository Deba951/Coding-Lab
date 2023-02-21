#include<iostream>
using namespace std;

int main(){
    int n, c=65, d=90;
    cin >> n;
    char arr[n];

    for(int i=0; i<=n; i++){
        if(i%3==0){
            arr[i]=(char(c));
            ++c;
        }

        else{
            arr[i]=(char(d));
            d-=2;
        }

        if(c>90)
            c=65;
        if(d<65)
            d=90;
    }

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}