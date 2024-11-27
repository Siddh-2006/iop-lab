#include<stdio.h>
int main(){
int n;
printf("enter any number : ");
scanf("%d",&n);
for (int i =1; i <=n; i++)
{
    for (size_t j = 1; j<=n; j++)
    {
        if(i==j){
            printf("1");
        }
        else{
            printf("0");
        }
    }
   printf("\n"); 
}



    return 0;

}