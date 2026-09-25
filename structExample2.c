#include <stdio.h>
#include <stdlib.h>

struct combo{
    int i;
    union{
        char c;
        float num;
    }uni;
};
int main()
{
    struct combo comb[20];
    int j=-1,n=0;
    float average=0.0, total=0.0;
    do{
       j++;
       if (j >= 20) {
            printf("limit reached!\n");
            break;
       }
       printf("please enter an integer:\n");
       scanf("%d",&comb[j].i);
       if(comb[j].i==0){
        printf("please enter a reel number:\n");
        scanf("%f",&comb[j].uni.num);
        total+=comb[j].uni.num;
        n++;
       }else if(comb[j].i==1){
        printf("please enter a character:\n");
        scanf(" %c",&comb[j].uni.c);
       }
    }while(comb[j].i==0 || comb[j].i==1);
    if(n>0) average=total/n;
    printf("average of numbers= %.2f",average);
    return 0;
}
