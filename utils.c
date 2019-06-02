#include "my.h"



void LAYIN()/* 9 导入信息 */
{
	FILE *fp;/* 定义文件指针变量 */
	char filename[30];
	int i;
	int h=0;
	int x,k=0;
	printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
	printf("\n\t\t*      你已进入学生信息导入模块         *\n");
	printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");

	x=k;

	printf("\t请输入要导入的文件名，例【G:\\xxxx.txt】\n");
	printf("\t地址：");
	scanf("%s",&filename);getchar();
	if((fp=fopen(filename,"rt+"))==NULL)
	{
		printf("\t读取文件失败，请稍后重新操作\n\n");

		printf("\t键入任意返回主界面\n\n");getchar();
		system("cls");
		OI();
	}

		while(1)
		{
			if(fscanf(fp,"%d%s%d%d%d%d",&Temp.num,&Temp.name,&Temp.math,&Temp.physical,&Temp.english,&Temp.count)==EOF)
				break;
			else
			{
				for(i=0;i<BFUN;i++)
				{
					if(Temp.num==boy[i].num)
					{
						k++;/*  */
						break;
					}
					x=k;
				}
				if(x==k)
				{

					boy[BFUN+h]=Temp;
					printf("\n学号是%-10d ",boy[BFUN+h].num);
					printf(" 姓名是%-10s ",boy[BFUN+h].name);
					// printf(" 数学成绩%-4d ",boy[BFUN+h].math);
                    printf("\t数学成绩：%-5d",boy[BFUN+h].math);
                    printf("\t物理成绩：%-5d",boy[BFUN+h].physical);
                    printf("\t英语成绩：%-5d",boy[BFUN+h].english);
                    printf("\t总成绩：%-5d",boy[BFUN+h].count);
					// if(boy[BFUN+h].sex==1)
					// 	printf("\t性别为：男");
					// else if(boy[BFUN+h].sex==0)
					// 	printf("\t性别为：女");
					// else printf("\t性别为：未知");
					// if(boy[BFUN+h].glass==201701)
					// 	printf("\t班级为：2017级01班");
					// else if(boy[BFUN+h].glass==201702)
					// 	printf("\t班级为：2017级02班");
					// else printf("\t班级为：%d",boy[BFUN+h].glass);
					Sleep(2);h++;
					printf("\n\n\n");
				}
			}

		}
		printf("\n\t系统已忽略%d个相同学籍编号\n",k);/* k个重复学籍 */
		printf("\n\t新导入%d个信息\n\n\n",h);/* 新导入h人 */

		BFUN=BFUN+h;/* 全局变量新增加h个 */

		fclose(fp);
		printf("\n\t键入任意键返回主界面\n\n");getchar();


}

void LOGOUT()/* 退出程序界面 */
{
	Sleep(500);
	system("cls");
	printf("\t\t* * * * * * * * * * * * * * * * *\n");
	printf("\t\t*                               *\n");
	printf("\t\t*          安全退出中           *\n");
	printf("\t\t*                               *\n");
	printf("\t\t* * * * * * * * * * * * * * * * *\n");
	printf("\t请稍等。。。");
	Sleep(1200);
	system("cls");
	printf("\t\t再见。\n");
	exit(0);/* 退出 */
}
void OUTPUT(int i)/* 输出信息 */ /* 接受实参赋值给形参i */
{
    // char name[50];/* 姓名 */
	// unsigned long num;/* 学号 */
	// int math;/* 数学 */
	// int physical;/* 物理 */
	// int english;/* 外语 */
	// int count; /* 总成绩 */
	printf("\n学号为:%d\n",boy[i].num);

	printf("\n姓名:%s\n",boy[i].name);

    printf("\n数学:%d\n",boy[i].math);

    printf("\n物理:%d\n",boy[i].physical);

    printf("\n外语:%d\n",boy[i].english);
    boy[i].count=boy[i].math+boy[i].physical+boy[i].english;

    printf("\n总成绩:%d\n",boy[i].count);

	// if(boy[i].sex==1)
	// 	printf("\n性别为：男\n");
	// else if(boy[i].sex==0)
	// 	printf("\n性别为：女\n");
	// else
	// 	printf("\n性别为：无\n");
	// printf("\n年龄：%d\n",boy[i].age);
	// if(boy[i].glass==201701)
	// 	printf("\n班级为：2017级01班\n\n");
	// else if(boy[i].glass==201702)
	// 	printf("\n班级为：2017级02班\n\n");
	// else printf("\n班级为：%d\n\n",boy[i].glass);
}
