#include<stdio.h>
void triangle(int);
int main(void)
{
    int i,n,x;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        triangle(x);
    }
    return 0;
}

void triangle(int base)
{
    int i,j;
    for(i=0;i<(base/2+1);i++){
        for(j=0;j<((base-(2*i+1))/2);j++)
            printf("_");
        for(j=0;j<(2*i+1);j++)
            printf("*");
        for(j=0;j<((base-(2*i+1))/2);j++)
            printf("_");
        printf("\n");
    }
}
