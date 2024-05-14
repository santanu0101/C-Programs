// Write a program in C to copy the elements of one array into another array.

#include <stdio.h>

int main(void){
    // Here your code !
    int arr[100];
    int arr_2[100];
    int i,n;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    
    for(i=0;i<n;i++){
        arr_2[i]=arr[i];

        printf("%d ",arr_2[i]);
    }
}