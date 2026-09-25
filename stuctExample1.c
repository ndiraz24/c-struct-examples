#include <stdio.h>
#include <stdlib.h>

struct student{
    int no;
    char answer[10];
};
struct student2{
    int num;
    float result;

};
int main()
{
    struct student stu[30];
    struct student2 stu2[30];
    char ans[10],emp;
    int i,j;
    int tru,fals;
    printf("please enter the answer key:\n");
    for(i=0;i<10;i++){
        scanf(" %c",&ans[i]);
    }
    printf("please enter the student informations\n");
    for(i=0;i<30;i++){
            printf("please enter student no:\n");
            scanf("%d",&stu[i].no);
            tru=fals=0;

      printf("please enter the student's answers:\n");
      for(j=0;j<10;j++){
        scanf(" %c",&stu[i].answer[j]);
        if(stu[i].answer[j]==ans[j]){
            tru++;
        }else if(stu[i].answer[j]!=' '){
            fals++;
        }
      }
    stu2[i].num=stu[i].no;
    stu2[i].result=tru-(fals/4.0);;
    printf("student no:%d true: %d false: %d\n",stu2[i].num,tru,fals);
    }
    return 0;
}
