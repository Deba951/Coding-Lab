#include <iostream>
using namespace std;

int main(){
    int n, p=0, q=0;
    cin >> n;

    for(int j=0; j<n; j++){
        if(j%2==0){
            cout << p << " ";
            p+=2;
        }
        
        else{
            cout << q << " ";
            q++;
        }
    }
    return 0;
}