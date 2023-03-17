/*
Remove duplicates character from a given string.
Input String: engineering
Output String: engir
Test Cases:---------------
1. Valid Input:
a) Only string of character will be given as input.
2. Invalid inputs:
    a) No command line arguments
    b) Two or more command line arguments
    c) Integerd) Fraction3. You should generate output as follows:
        a) For right output print just the string to STDOUT without any other text.
        b) If any error: print 'ERROR' to the STDOUT without any other text.
*/

#include<stdio.h>

int main(){
    char str[100];
    scanf("%s", str);
    
    int i=0;
    
    while(str[i]!='\0'){

        int j=i+1;
    
        while(str[j]!='\0'){
    
            if(str[i]==str[j]){
                int k=j;
    
                while(str[k]!='\0'){
                    str[k]=str[k+1];
                    k++;
                }
            }
    
            else
                j++;
        }
        i++;
    }
    
    printf("%s",str);
    
    return 0;
}