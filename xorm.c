
#include<stdio.h>

int Sample(int n)
{
    int i = 0, s = 0;
    while (n > 0)
    {
        

        int r = n % 10;

       int p = 8 ^ i;

        s = s + p * r;

        i++;

        n = n / 10;
    }

    return s;
}
void main()
{
   int a=Sample(127);
   printf("%d",a);

}