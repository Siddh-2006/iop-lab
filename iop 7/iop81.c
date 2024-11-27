#include<stdio.h>
int isprime(int n);
int main(){
int n;
printf("enter any number : ");
scanf("%d",&n);
printf("%d",isprime(n));
return 0;
}
int isprime(int n )
{int flag=0;
for (int i = 2; i <n; i++)
{
    if(n%i==0){
        return 0;

    
}
else{
flag=1;
}

}


if(flag==1)
{
    return 1;
}



}