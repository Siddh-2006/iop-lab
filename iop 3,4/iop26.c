#include<stdio.h>
int main(){
int e,o,n,i;
i=1;
printf("enter any number");
scanf("%d",&n);
e=0;
o=0;
while(i<=n){

o=o+i;
i++;
e=e+i;
i++;
}
printf("%d\n",o);
printf("%d",e);


return 0;
}