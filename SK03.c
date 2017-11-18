#include<stdio.h>
void digit(int,int);
int main(void)
{
    int i,n,a,b;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        digit(a,b);
    }
    return 0;
}

void format01(int n)
{
    int i;
    for(i=0;i<n;i++) printf("*");
    printf("\n");
}

void format02(int n)
{
    int i;
    printf("*");
    for(i=0;i<n-2;i++) printf(" ");
    printf("*");
    printf("\n");
}

void format03()
{
    printf("*");
    printf("\n");
}

void format04(int n)
{
    int i;
    for(i=0;i<n-1;i++) printf(" ");
    printf("*");
    printf("\n");
}

void digit(int x,int y)
{
    int i;
    if(x==0)
    {
        if(y>1)
        {
            format01(y);
            for(i=0;i<y-2;i++) format02(y);
            format01(y);
        }
        else
            for(i=0;i<y;i++) format01(y);
    }
    else if(x==1)
        for(i=0;i<y;i++) format04(y);
    else if(x==2)
    {
        if(y>2)
        {
            format01(y);
            for(i=0;i<((y-3)/2);i++) format04(y);
            format01(y);
            for(i=0;i<((y-3)/2);i++) format03();
            format01(y);
        }
        else
            for(i=0;i<y;i++) format01(y);
    }
    else if(x==3)
    {
        if(y>2)
        {
            format01(y);
            for(i=0;i<((y-3)/2);i++) format04(y);
            format01(y);
            for(i=0;i<((y-3)/2);i++) format04(y);
            format01(y);
        }
        else
            for(i=0;i<y;i++) format01(y);
    }
    else if(x==4)
    {
        for(i=0;i<((y-1)/2);i++) format02(y);
        format01(y);
        for(i=0;i<((y-1)/2);i++) format04(y);
    }
    else if(x==5)
    {
        if(y>2)
        {
            format01(y);
            for(i=0;i<((y-3)/2);i++) format03();
            format01(y);
            for(i=0;i<((y-3)/2);i++) format04(y);
            format01(y);
        }
        else
            for(i=0;i<y;i++) format01(y);
    }
    else if(x==6)
    {
        if(y>2)
        {
            format01(y);
            for(i=0;i<((y-3)/2);i++) format03(y);
            format01(y);
            for(i=0;i<((y-3)/2);i++) format02(y);
            format01(y);
        }
        else
            for(i=0;i<y;i++) format01(y);
    }
    else if(x==7)
    {
        format01(y);
        for(i=0;i<y-1;i++) format04(y);
    }
    else if(x==8)
    {
        if(y>2)
        {
            format01(y);
            for(i=0;i<((y-3)/2);i++) format02(y);
            format01(y);
            for(i=0;i<((y-3)/2);i++) format02(y);
            format01(y);
        }
        else
            for(i=0;i<y;i++) format01(y);
    }
    else if(x==9)
    {
        if(y>2)
        {
            format01(y);
            for(i=0;i<((y-3)/2);i++) format02(y);
            format01(y);
            for(i=0;i<((y-3)/2);i++) format04(y);
            format01(y);
        }
        else
            for(i=0;i<y;i++) format01(y);
    }
}
