#include <stdio.h>
#include <stdlib.h>

typedef struct{
int id;
int math;
int english;
int chinese;
char name[20];
}Stu;
int main(){
	printf("%s","hello\n");
	Stu stu[5];
	int i = 0;
	printf("������ѧ����Ϣ��ѧ���� ���� ��ѧ Ӣ�� ����\n");
	for(int i = 0;i<5;i++){
		scanf("%d %s %d %d %d",&(stu[i].id),&(stu[i].name),&(stu[i].math),&(stu[i].english),&(stu[i].chinese));
	}
	FILE *fp;
	if((fp=fopen("stud","w"))==NULL){
		printf("error\n");
		exit(0);
	}
	for(i=0;i<5;i++){
		fprintf(fp,"%d %s %d %d %d\n",(stu[i].id),(stu[i].name),(stu[i].math),(stu[i].english),(stu[i].chinese));
	}
	fclose(fp);
	return 0;
}