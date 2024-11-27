#include<stdio.h>
int main(){
    //0112358
int a,b,c;
 a=0;
b=1;
   printf("%d ",a);
      printf("%d ",b);
for (int i = 0; i <=7; i++)
{
    c=a+b;
    printf("%d ",c);
    b=a;
    a=c;
    
}


return 0;
}