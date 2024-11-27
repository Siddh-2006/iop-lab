#include<stdio.h>
int main(){
    int x,y,z;
char c;
printf("Enter a character: ");
scanf("%c",&c);

x=(97<=c&&c<=122)?4:5;
if(x==4){
    printf("The character is a lowercase letter ");
}
else{
    printf("The character is not an lowercase letter");
}

return 0;
}