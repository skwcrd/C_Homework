#include<stdio.h>
typedef struct{
    char prefix[5];
    char name[30],last[30];
    float score;
}profile;

int main(void)
{
    profile st,max,min;
    max.score = 0; min.score = 0;
    FILE *sk;
    sk = fopen("sk.txt","r");
    while(fread(&st,sizeof(profile),1,sk)!=0){
        printf("%s %s %s %.2f\n",st.prefix,st.name,st.last,st.score);
        if(st.score>max.score||max.score==0)
            max = st;
        if(st.score>min.score||min.score==0)
            min = st;
    }
    fclose(sk);
    return 0;
}
