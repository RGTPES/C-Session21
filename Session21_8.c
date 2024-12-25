#include<stdio.h>
typedef struct{
	char id[20];
	char name[100];
	char age[20];
}Students;
int main(){
	int count =0;
	Students students[100];
	FILE *sptr;
	sptr=fopen("Student.txt","r");
	if(sptr==NULL){
		printf("Ko mo dc file!");
	}
	
while(fscanf(sptr,"%s %s %s",students[count].id,students[count].name,students[count].age)==3){
	count++;
}
fclose(sptr);
 printf("Danh sach sinh vien:\n");
    printf("%s %s %s\n", "ID", "Name", "Age");
    for (int i = 0; i < count; i++) {
        printf("%s %s %s\n", students[i].id, students[i].name, students[i].age);
    }


return 0;

}

