#include<stdio.h>
#include<math.h>
struct student
{
	char Name[20];
	int Number;
	int Score;
	
}student[10];
void input(struct student* stu){
	
	printf("����\n");scanf("%s",&stu->Name);
	printf("ѧ��\n");scanf("%d",&stu->Number);
	printf("�ɼ�\n");scanf("%d",&stu->Score);
	printf("¼��ɹ���\n");
}
int main()
{
	int n,k;
	int j,i=0;
	struct student* p;
	p=&student[i];
	printf("   Welcome to use the students' score system\n");
	pig:
	
	printf("�ɼ�¼��-----1\n"); 
	printf("�ɼ���ѯ-----2\n");
	printf("ѧ�Ų�ѯ-----3\n");	
	printf("�˳�����-----4\n"); 
scanf("%d",&n);
    char name[20];
switch(n){
	            case 1:printf("������ѧ����Ϣ\n ");
                input(p);i++;goto pig;
                
                case 2:printf("����ѧ������\n");
                scanf("%s",name);
                for(j=0;j<10;j++){
                for(k=0;name[k]!='\0';k++){	
                if(name[k]!=student[j].Name[k]) break;}
                if(name[k]=='\0') printf("�ɼ�Ϊ%d\n\n",student[j].Score);}
                goto pig;
				case 3:printf("����ѧ������\n");
                scanf("%s",name);
                for(j=0;j<10;j++){
                for(k=0;name[k]!='\0';k++){	
                if(name[k]!=student[j].Name[k]) break;}
                if(name[k]=='\0') printf("ѧ��Ϊ%d\n\n",student[j].Number);}   
                goto pig; 
                case 4: return 0;

}
return 0;
}

