// C program to find G.C.D using recursion.

#include <stdio.h>

int gcd(int a, int b){
    if(b==0)
        return a;
    else
        return gcd(b, a%b);
}

int main(){
    int a, b;
    scanf("%d %d",&a,&b);
    printf("%d\n", gcd(a,b));
}