// Write a program in C to store elements in an array and print it.

#include <stdio.h>

int main(void){
    // Here your code !
    int arr[100];
    int i,n;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}