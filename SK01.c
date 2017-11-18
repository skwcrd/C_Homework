#include<stdio.h>
int main(void)
{
    int check,prime;
    int i,j,x,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(scanf("%d",&x);x>0;x--){
            prime=1;
            for(j=2;j<x;j++){
                check = (x%j==0)?0:1;
                prime *= check;
            }
            if(prime==1)
                break;
        }
        printf("%d\n",x);
    }
    return 0;
}
