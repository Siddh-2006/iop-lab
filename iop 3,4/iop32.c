#include<stdio.h>
int main(){
int n,num,max,max2;
printf("how many numbers you want to input ? : ");
scanf("%d",&n);
if(n<2)
{
    printf("enter atleast two numbers");
}
else{
    printf("enter %d numbers\n",n);
    printf("enter number 1 : ");
    scanf("%d",&max);
    for (int i = 2; i <=n; i++)
    {
        printf("enter number %d : ",i);
        scanf("%d",&num);
        if(num>max){
            max2=max;
            max=num;
        }
       
    }
  printf("maximum : %d \n",max);
        printf("second maximum : %d \n",max2);   
}
return 0;
}