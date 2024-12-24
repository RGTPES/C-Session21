#include<stdio.h>
int main(){
FILE *fptr ;
fptr = fopen("Ngu.txt", "w");
char age[20];
printf("Moi ban nhap ki tu ");
fgets(age,20,stdin);
fprintf(fptr, "%s",age);
fclose(fptr);


return 0;

}

