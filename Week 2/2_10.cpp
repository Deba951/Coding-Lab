#include<iostream>
using namespace std;

int main(){
    int n, p=65, i=0;
    cin >> n;
    int arr[10];

    while(n!=0){
        arr[i]=n%10;
        n=n/10;
        i++;
    }

    for(int j=i-1; j>=0; j--){
        cout << char(p) << arr[j] << " ";
        p++;

        if(p>90)
            p=65;
    }
}