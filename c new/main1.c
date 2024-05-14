
#include <stdio.h>

int sumOfRange(int a, int b)
{
    int arr[100],sum[100];
    int i, j,n;

    printf("Enter the value of N: ");
    scanf("%d", & n);

    for (i = 0; i < n; i++) {
        
            scanf("%d", & arr[i]);
        
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum[i]=arr[i]+arr[j];
            if (sum[i]>a && sum[i]<b)
            {
                return arr[j];
            }
        }
    }
}

int main()
{

    int a, b;
    printf("Enter the number");
    scanf("%d %d", &a, &b);

    printf("sum of range under a and b is %d", sumOfRange(a,b));
     

    return 0;
}
