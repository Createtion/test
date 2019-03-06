#include<stdio.h>
#include<math.h>
struct student
{
	char Name[20];
	int Number;
	int Score;
	
}student[10];
void input(struct student* stu){
	
	printf("姓名\n");scanf("%s",&stu->Name);
	printf("学号\n");scanf("%d",&stu->Number);
	printf("成绩\n");scanf("%d",&stu->Score);
	printf("录入成功！\n");
}
int main()
{
	int n,k;
	int j,i=0;
	struct student* p;
	p=&student[i];
	printf("   Welcome to use the students' score system\n");
	pig:
	
	printf("成绩录入-----1\n"); 
	printf("成绩查询-----2\n");
	printf("学号查询-----3\n");	
	printf("退出程序-----4\n"); 
scanf("%d",&n);
    char name[20];
switch(n){
	            case 1:printf("请输入学生信息\n ");
                input(p);i++;goto pig;
                
                case 2:printf("输入学生姓名\n");
                scanf("%s",name);
                for(j=0;j<10;j++){
                for(k=0;name[k]!='\0';k++){	
                if(name[k]!=student[j].Name[k]) break;}
                if(name[k]=='\0') printf("成绩为%d\n\n",student[j].Score);}
                goto pig;
				case 3:printf("输入学生姓名\n");
                scanf("%s",name);
                for(j=0;j<10;j++){
                for(k=0;name[k]!='\0';k++){	
                if(name[k]!=student[j].Name[k]) break;}
                if(name[k]=='\0') printf("学号为%d\n\n",student[j].Number);}   
                goto pig; 
                case 4: return 0;

}
return 0;
}

