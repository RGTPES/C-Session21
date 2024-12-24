#include<stdio.h>
int main(){
	int line;
	char a[100];
FILE *fptr;

printf("moi ban nhap so dong : ");
scanf("%d",&line);
fflush(stdin);
	fptr = fopen("Test.txt","w");
for(int i =0;i<line;i++){
	printf("Moi ban nhap dong thu %d : ",i+1);
	fgets(a,100,stdin);
	fprintf(fptr,"%s",a);
}


	fclose(fptr);
fptr = fopen("Test.txt","r");
while(fgets(a,100,fptr)!=NULL){
		printf("%s",a);
}

fclose(fptr);


return 0;

}

