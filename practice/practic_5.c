//  Write a program in C to count a total number of duplicate elements in an array.


#include <stdio.h>

int main(void){
    // Here your code !
    int arr[100];
    int i,j,n,count=0;
    printf("enter the number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
        if (arr[i]==arr[j]){
            count++;
            break;
        }
        }
    }
    if(count!=0){
        printf("there are %d duplicate value",count);
    }
    else{
        printf("there is no duplicate value");
    }
}