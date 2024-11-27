#include<stdio.h>
void evenodd(int n);
int main(){
int n;
printf("enter a number : ");
scanf("%d",&n);
evenodd(n);
return 0;
}

void evenodd(int n)
{
    if(n%2==0){
printf("\nentered number is even ");
    }
    else{
        printf("\nentered number is odd ");
    }
    
    
    }
