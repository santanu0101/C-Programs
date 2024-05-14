#include<stdio.h>

int mulu(int a, int b)
{
    
    int t = 0;

        while (b != 0)
    {

        t = t + a;
        

                    b = b - 1;
                    printf("\n%d",t);
    }

    return t;
}

int main(){
    mulu(56,876);
    // printf("\n%d",k);
}