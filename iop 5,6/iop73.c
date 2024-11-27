#include<stdio.h>
int main(){
    int a=0,b=0,c=0,d=0,e=0,f=0;
printf("voting starts:\n");
    printf("vote 1 to select candidate 1\n");
     printf("vote 2 to select candidate 2\n"); 
     printf("vote 3 to select candidate 3\n");
     printf("vote 4 to select candidate 4\n");
     printf("vote 5 to select candidate 5\n");
int p[10];
for (int i = 0; i < 10; i++)
{
    scanf("%d",&p[i]);
}
printf("\n");
for (int i = 0; i < 10; i++)
{
    printf("%d\t",p[i]);
}
for (int i = 0; i < 10; i++)
{
    if(p[i]==1){
        a++;
    }
    else if(p[i]==2){
     b++;
    }
     else if(p[i]==3){
     c++;
    }
     else if(p[i]==4){
     d++;
    }
     else if(p[i]==5){
     e++;
    }
    else{
        f++;
    }
}
printf("voter 1 got %d votes\n",a);
printf("voter 2 got %d votes\n",b);
printf("voter 3 got %d votes\n",c);
printf("voter 4 got %d votes\n",d);
printf("voter 5 got %d votes\n",e);
printf("no of spoil ballot : %d \n",f);


return 0;
}