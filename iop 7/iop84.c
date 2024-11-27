
#include<stdio.h>
void readstring(char,char,char,char);
void displaystring(char,char,char,char);
int main(){
    print("enter book name : ");
    char bookname[100],authorname[100],pages[100],price[100];
readstring(bookname,authorname,pages,price);
return 0;
}


void readstring(char bookname[100], char authorname[100], char pages [100], char price[100])
{ printf("bookname : ") puts(bookname);   
   printf("author name: ") puts(authorname);
   printf("pages : ") puts(pages);
   printf("price : ") puts(price);
   displaystring(bookname,authorname,pages,price);
}

void displaystring(char bookname[100], char authorname[100], char pages [100], char price[100])
{ printf("bookname : ") gets(bookname);   
   printf("author name : ") gets(authorname);
   printf("pages : ") gets(pages);
   printf("price : ") gets(price);
}
