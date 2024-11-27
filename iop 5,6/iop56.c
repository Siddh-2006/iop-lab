#include<stdio.h>
int main(){
int a[10];
int even=0,odd=0,null=0;
for (int i = 0; i < 10; i++)
{
    scanf("%d",&a[i]);
}
for (int j = 0; j < 10; j++)
{
    printf("%d \t",a[j]);
}
printf("\n");
for (int i = 0; i < 10; i++)
{
    if(a[i]>0){
        even =even+1;
    }
    else if(a[i]==0){
null=null+1;
    }
    else{
        odd=odd+1;
    }
}
printf("THERE ARE %d NEGATIVE NUMBERS IN THE ARARY\n",odd);
printf("THERE ARE %d POSITIVE NUMBERS IN THE ARARY\n",even);
printf("NUMBER OF ZEROES IN THE ARRAY : %d",null);

return 0;
}