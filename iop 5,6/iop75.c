#include<stdio.h>
int main(){
int sub1[10],sub2[10],sub3[10],rollno[10],maxsub1,maxsub2,maxsub3,maxrollnosub1,maxrollnosub2,maxrollnosub3,maxrolloverall,maxmarks=0,marksofstudent[10];
sub1[-1]=0;sub2[-1]=0,sub3[-1]=0;
for(int i=0;i<10;i++)
{
    printf("whats your rollno.:");
    scanf("%d",&rollno[i]);
    printf("marks of respective subjects are:\n");
    scanf("%d%d%d",&sub1[i],&sub2[i],&sub3[i]);
    if(sub1[i-1]<sub1[i])
    {
        maxsub1=sub1[i];
        maxrollnosub1=rollno[i];
    }
       if(sub2[i-1]<sub2[i])
    {
        maxsub2=sub2[i];
        maxrollnosub2=rollno[i];
    }
       if(sub3[i-1]<sub3[i])
    {
        maxsub3=sub3[i];
        maxrollnosub3=rollno[i];
    }

}
marksofstudent[-1]=0;
for(int i=0;i<10;i++)
{
    marksofstudent[i]=sub1[i]+sub2[i]+sub3[i];
    printf("rollno. %d has total:%d",i+1,marksofstudent[i]);
       if( maxmarks<marksofstudent[i])
    {
        maxmarks=marksofstudent[i];
        maxrolloverall=rollno[i];
    }
}
printf("rollno. %d has highest marks in subject 1:%d",maxrollnosub1,maxsub1);
printf("rollno. %d has highest marks in subject 2:%d",maxrollnosub2,maxsub2);
printf("rollno. %d has highest marks in subject 3:%d",maxrollnosub3,maxsub3);
printf("rollno. %d has highest total marks:%d",maxrolloverall,maxmarks);
return 0;
}