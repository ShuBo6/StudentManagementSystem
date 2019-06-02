#include "my.h"
void CHANGE()/* 3 修改学生信息 */
{
	int k;
	printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
	printf("\n\t\t*       你已进入学生成绩修改模块        *\n");
	printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
	printf("\n\n\t*     首先查找要修改的学生信息     *\n");
	printf("\n\t\t键入‘回车’转入【查询模块】...\n");
	getchar();
	Sleep(500);
	system("cls");
	k=QUERY(1);
	printf("\n\n\t修改新信息\n");
	printf("\n\t录入信息包含项【学号，姓名，数学，物理，外语，总成绩】“回车键入下一项”\n");
	XG(k);
	boy[k]=Temp;
	printf("\n\n\t键入任意键返回主界面");
	getchar();getchar();
}
void XG(int k)
{
	int i;
	printf("\n学号：");
	scanf("%d",&Temp.num);
	for(i=0;i<=BFUN;i++)
		if(Temp.num==boy[i].num&&i!=k)
		{
			system("cls");
			printf("\n\n\t该学籍已被注册！\n\n");
			XG(k);
		}
	getchar();
	printf("\n姓名：");
	scanf("%s",&Temp.name);
	if(strlen(Temp.name)>20)
		{
			system("cls");
			printf("\n\n\t姓名输入有误，超出限度。\n\n");/* 限制姓名长度为20字符 */
			XG(k);
		}
	printf("\n数学成绩：");
	scanf("%d",&Temp.math);
	if(Temp.math<=0||Temp.math>=150)
		{
			system("cls");
			printf("\t成绩输入有误！\n\n\n");
			XG(k);
		}
		printf("\n物理成绩：");
		scanf("%d",&Temp.physical);

		if(Temp.physical<=0||Temp.physical>=100)
		{
			system("cls");
			printf("\t性别输入无法识别！\n\n");
			XG(k);
		}
		printf("\n外语成绩：");
		scanf("%d",&Temp.english);
		if(Temp.english<=0||Temp.english>=150)
		{
			system("cls");
			printf("\t该届仅有两个班级，请正确输入\n\n");
			XG(k);
		}
	Sleep(1000);
	printf("\n\n\t修改成功！\n");
}
