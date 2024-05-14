#include<stdio.h>


 int sumInRange()
{
    int arr[100] = {6,2,3};
    int i, j,sum=0,k=7,r=10;

    for (i = 0; i < 3; i++)
    {

        j=arr[i];
        
        sum=j+arr[i];
        if (sum>k && sum<r){
            return arr[i];
        }
        arr[i++];


    }

    return j;
}
void main(){
    
    int x=sumInRange();

   printf("%d", x);
}