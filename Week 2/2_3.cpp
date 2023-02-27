#include <iostream>
using namespace std;

int main(){
    int n, p=65, q=77;
    cin >> n;

    for(int i=0; i<n; i++){
        if(p>=90)
            p=65;
        if(q>=90)
            q=65;
        cout << char(p) << char(q) << char(q) << " ";
        p +=2;
        q +=2;
    }
    return 0;
}