/*
Given an array of integers, sort the first half of the array in ascending order and secondhalf in descending order. Take input from STDIN by scanf().

Examples:
Input : arr[] = {5, 2, 4, 7, 9, 3, 1, 6, 8}
Output : arr[] = {1, 2, 3, 4, 9, 8, 7, 6, 5}
Input : arr[] = {1, 2, 3, 4, 5, 6}
Output : arr[] = {1, 2, 3, 6, 5, 4}
*/


#include<stdio.h>

void solve(int a[], int n){
    int temp;

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){ 
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    for (int i=0; i<n/2; i++) 
        printf("%d ", a[i]); 

    for (int j=n-1; j>=n/2; j--)
        printf("%d ", a[j]);

}

int main(){
   int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of array: ");

    for(int i=0; i<n; i++)
        scanf("%d",&arr[i]);

   solve(arr, n);

   //return 0;
}