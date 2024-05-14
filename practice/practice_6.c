// Write a program in C to print all unique elements in an array.

/*#include <stdio.h>

int main()
{

    int arr[100];
    int i, j, n;

    printf("enter the number:");
    scanf("%d", &n);

    printf("enter values: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        int count = 0;
        for (j = 0; j < n+1; j++)
        {
            if (i != j)
            {

                if (arr[i] == arr[j])
                {
                    count++;
                }
            }
        }

        if (count == 0)
        {
            printf("%d", arr[i]);
        }
    }

    return 0;
}
*/

#include <stdio.h>
int main()
{
    int arr1[100], n, ctr = 0;
    int i, j, k;
    printf("\n\nPrint all unique elements of an array:\n");
    printf("------------------------------------------\n");
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    printf("Input %d elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }
    printf("\nThe unique elements found in the array are: \n");
    for (i = 0; i < n; i++)
    {
        ctr = 0;
        for (j = 0, k = n; j < k + 1; j++)
        {
            /*Increment the counter when the seaarch value is duplicate.*/
            if (i != j)
            {
                if (arr1[i] == arr1[j])
                {
                    ctr++;
                }
            }
        }
        if (ctr == 0)
        {
            printf("%d ", arr1[i]);
        }
    }
    printf("\n\n");
}
