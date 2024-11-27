#include<stdio.h>
int main(){
int a[10];
int even=0,odd=0;
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
    if(a[i]%2==0){
        even =even+1;
    }
    else{
        odd=odd+1;
    }
}
printf("THERE ARE %d ODD NUMBERS IN THE ARARY\n",odd);
printf("THERE ARE %d EVEN NUMBERS IN THE ARARY",even);


return 0;
}