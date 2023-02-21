#include <iostream>
using namespace std;

int main(){
    int n, p=1, q=2, temp;
    cin >> n;
    cout << p << " " << q << " ";

    for(int i=2; i<n; i++){
        temp = p*q;
        cout << temp << " ";
        p=q;
        q=temp;
    }
    return 0;
}