// wap find GCD, LCM 

#include<stdio.h>
int main()
{
    int i,a,b,gcd;
    printf("Enter the number : ");
    scanf("%d%d",&a,&b);

    for(i=1; i <= a && i <= b; i++)
    {
        if(a%i==0 && b%i==0)
            gcd = i;
    }
    printf("gcd : %d",gcd);
    printf("lcm : %d",(a*b)/gcd);
    
}