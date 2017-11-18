#include<stdio.h>

int main(void)
{
    int count[2],tmp,check;
    int i,j,k,t,n;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        int time[n];
        for(j=0;j<n;j++){
            scanf("%d",&time[j]);
        }
        for(j=0;j<n-1;j++){
            for(k=0;k<n-1;k++){
                if(time[k]<time[k+1]){
                    tmp = time[k];
                    time[k] = time[k+1];
                    time[k+1] = tmp;
                }
            }
        }
        count[1] = 0;
        for(j=0;j<n;j++){
            check = time[j]-59;
            count[0] = 0;
            for(k=0;k<n;k++){
                if(time[k]>=check&&time[k]<=time[j])
                    count[0]++;
            }
            if(count[0]<count[1])
                break;
            else
                count[1] = count[0];
        }
        printf("%d\n",count[1]);
    }
    return 0;
}
