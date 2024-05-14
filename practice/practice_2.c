// Write a program in C to read n number of values in an array and display it in reverse order.

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
    
    for(i=n-1;i>=0;i--){
        printf("%d ",arr[i]);
    }
}