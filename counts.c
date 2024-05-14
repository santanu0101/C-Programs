#include<stdio.h>


int main(){
int limit = 7;

int n1 = 0, n2 = 1, n3 = 1, count = 1;

while(count <= limit)
{

    count = count + 1;

            // printf("%d,\n",n3);

                n3 = n1 + n2;

                              n1 = n2;
                              printf(" %d",n1);

                         n2 = n3;
}
}