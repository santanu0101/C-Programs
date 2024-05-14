// Write a program in C to merge two arrays of same size sorted in decending order.

#include <stdio.h>

int main()
{
    int arr_1[100], arr_2[100], marge_arr[100];
    int i, j, n,m,temp;

    printf("enter the number:");
    scanf("%d", &n);

    printf("enter the in 1st array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr_1[i]);
    }
    printf("enter the in 2st array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr_2[i]);
    }

    m=n*2;

    for ( i = 0; i < n; i++)
    {
       marge_arr[i]=arr_1[i];
    }
    for ( i = 0; i < n; i++)
    {
       marge_arr[i]=arr_2[i];
    }
    

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < m-1; j++)
        {
            if (marge_arr[j] <= marge_arr[j + 1])
            {
                temp=marge_arr[j+1];
                marge_arr[j+1]=marge_arr[j];
                marge_arr[j]=temp;
            }
        }
    }

    for ( i = 0; i < m; i++)
    {
        printf("%d ",marge_arr[i]);
    }
    

    return 0;
}
