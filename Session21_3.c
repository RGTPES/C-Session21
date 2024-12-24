#include<stdio.h>
int main(){
FILE *fptr;
fptr=fopen("Ngu.txt","a");
char text[20];
printf("moi ban ghi them : ");
fflush(stdin);
fgets(text,20,stdin);
fprintf(fptr,"%s",text);




return 0;

}

