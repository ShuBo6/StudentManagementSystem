#include "my.h"
int QUERY(int q)/* 2 查询学生信息 */
{
	int i=0,x;
	char NAME[50];
	unsigned long NUM;
	do
	{
		printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
		printf("\n\t\t*       你已进入学生信息查询模块        *\n");
		printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
		printf("\t请选择你所了解的学生信息\n\n");
		printf("\t* 1-学生姓名  * 2-学生学号  * 0-退出查询\n");
		printf("\t选择：");
		scanf("%d",&x);
		if(x==1)
		{
			system("cls");
			printf("\n学生姓名：");
			scanf("%s",&NAME);
			printf("\n查找中...\n");
			Sleep(1000);
			system("cls");
			for(i=0;i<=BFUN;i++)
			{
				if(strcmp(NAME,boy[i].name)==0)
				{
					OUTPUT(i);
					break;
				}
			}
			if(i>BFUN)
			{
				printf("sorry!\n");
				printf("\n\t系统未查询到关于“%s”的信息!\n\n",NAME);
				printf("\t键入任意返回主界面\n\n");
				getchar();getchar();system("cls");
				OI();
			}
		}
		else if(x==2)
		{
			system("cls");
			printf("\n学生学号：");
			scanf("%d",&NUM);
			printf("\n查找中...\n");
			Sleep(1000);
			system("cls");
			for(i=0;i<BFUN;i++)
			{
				if(NUM==boy[i].num)
				{
					OUTPUT(i);
					break;
				}
			}
			if(i==BFUN)
			{
				printf("sorry!\n");
				printf("\n\t系统未查询到关于“%d”的信息!\n\n",NUM);
				printf("\t键入任意返回主界面\n\n");
				getchar();getchar();system("cls");
				OI();
			}
		}
		else if(x==0)
		{
			system("cls");
			OI();
		}
		else
		{
			system("cls");
			printf("\n\t键 入 操 作 选 项 有 误 ！\n\n");
			printf("\t重返【查询模块】中...\n\n");
			Sleep(1800);
			system("cls");
		}
	}while(q!=1);
	return(i);
}
