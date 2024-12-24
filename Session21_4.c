#include<stdio.h>
int main(){
FILE *fptr;
fptr=fopen("Ngu.txt","r");
char text[100];
fgets(text,100,fptr);
printf("%s",text);




return 0;

}

