#include<stdio.h>

void main()
{
    int a=10,b=4;
    float c;
    
    c=a/b;
    printf("%.2f\n",c);
    c=(float)a/b;
    printf("%.2f",c);
}