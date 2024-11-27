#include<stdio.h>
int main(){
//firstly we make variables for storing marks of subjects
int physics,chemistry,maths,english;
//now we tell student to enter his marks in this subjects
printf("enter marks of physics : ");
scanf("%d",&physics);
printf("enter marks of chemistry : ");
scanf("%d",&chemistry);
printf("enter marks of maths : ");
scanf("%d",&maths);
printf("enter marks of english : ");
scanf("%d",&english);
//now we create a variable for cutoff mark
int cf;
//now  we use formula for cutoff mark 
cf=(physics+maths+chemistry/2)+english;
//print results
printf("your cutoff mark is : %d",cf);
return 0;
}