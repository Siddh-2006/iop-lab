#include<stdio.h>
int main(){
int c,f;
printf("ENTER TEMPERATURE IN FARENHEIT : ");
scanf("%d",&f);
printf("ENTER TEMPERATURE IN celsius : %d",(f-32)*5/9);


return 0;
}