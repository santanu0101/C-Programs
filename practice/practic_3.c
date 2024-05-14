// Write a program in C to find the sum of all elements of the array.

#include <stdio.h>

int main(){
    // Here your code !
    int arr[100];
    int i,n,sum=0;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    
    for(i=0;i<n;i++){
        
       sum=sum+arr[i]; 
    }
    printf("%d",sum);
       
}