#include "my.h"
void INPUT()/* 1.输入学生全部信息 */
{
	int i;
	int x;
	printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
	printf("\n\t\t*      你已进入学生信息录入模块         *\n");
	printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
	x=BFUN;
	while(1)/* 把全局变量BFUN的值赋给x */
	{

		printf("\t请输入第%d个学生的信息（键入‘0’退出录入）\n",++x);
		printf("\n\t录入信息包含项【学号，姓名，数学，物理，外语，总成绩】“回车键入下一项”\n");
		printf("\n学号：");
		scanf("%d",&Temp.num);
		if(Temp.num==0)
		{
			system("cls");
			break;
		}
		for(i=0;i<=BFUN;i++)
			if(Temp.num==boy[i].num)
			{
				system("cls");
				printf("\n\n\t该学籍已被注册！\n\n");INPUT();
			}
		getchar();
		printf("\n姓名：");
		scanf("%s",&Temp.name);
		if(strlen(Temp.name)>20)/* 限制姓名字符长度为20 */
		{
			system("cls");
			printf("\n\n\t姓名输入有误，超出限度。\n\n");INPUT();
		}
		printf("\n数学成绩：");
		scanf("%d",&Temp.math);
		if(Temp.math<=0||Temp.math>=150)
		{
			system("cls");
			printf("\t成绩输入有误！\n\n\n");
			INPUT();
		}
		printf("\n物理成绩：");
		scanf("%d",&Temp.physical);

		if(Temp.physical<=0||Temp.physical>=100)
		{
			system("cls");
			printf("\t成绩输入有误！\n\n\n");
			INPUT();
		}
		printf("\n外语成绩：");
		scanf("%d",&Temp.english);
		if(Temp.english<=0||Temp.english>=150)
		{
			system("cls");
			printf("\t成绩输入有误！\n\n\n");
			INPUT();
		}
		getchar();
		BFUN=x;/* 上面函数完全正确执行后，才会把现在的x值赋给BFUN */
		printf("\n\n\n");

		boy[BFUN-1]=Temp;
	}
}
