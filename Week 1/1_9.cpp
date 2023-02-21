#include<iostream>
using namespace std;


int main(){
    int n, p=1;
    cin >> n;

    for(int i=0; i<n; i++){
        if(i%2==0){
            cout << p << " ";
            p+=4;
        }
        else{
            cout << p << " ";
            p+=4;
        }
    }
}

/////////////////*********************************///////////////////////

int main(){
    int n;
    cin >> n;

    for(int i=1; i<=n; i+=4)
        cout << i << " " << i << " ";
}