#include "my.h"


void SEQUENCE()/* 5 排列学生信息 */
{
	char x[2];
	int i,j;
	printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
	printf("\n\t\t*       你已进入学生信息排列模块        *\n");
	printf("\n\t\t * * * * * * * * * * * * * * * * * * * * *\n");
	do
	{
		printf("\n\n\t* 键入‘1’按数学成绩排序  * 键入‘2’按物理成绩排序 * 键入‘3’按外语成绩排序 * 键入 ‘4’ 按总成绩排序 * 键入‘0’返回主界面\n\n");
		printf("\t选择：");
		scanf("%s",&x);
		getchar();
		if(strcmp(x,"1")==0)
		{
			for(j=0;j<BFUN-1;j++)/* 冒泡排序法 */
				for(i=0;i<BFUN-j-1;i++)
					if(boy[i].math>boy[i+1].math)/* boy[i].math与boy[i+1].math比较 */
					{
						Temp=boy[i];
						boy[i]=boy[i+1];
						boy[i+1]=Temp;
					}
			printf("\n排列学生信息中。\n");
			printf("\n请稍等...\n");
			Sleep(600);
			system("cls");
			printf("        排列成功！\n\n");
			for(i=0;i<BFUN;i++)
				OUTPUT(i);
			printf("\n\t键入任意键返回主界面\n\n");
			getchar();
			break;
		}
		if(strcmp(x,"2")==0)
		{
			for(j=0;j<BFUN-1;j++)/* 冒泡排序法 */
				for(i=0;i<BFUN-j-1;i++)
					if(boy[i].physical>boy[i+1].physical)/* 字符串boy[i].physical与字符串boy[i+1].physical比较 */
					{
						Temp=boy[i];
						boy[i]=boy[i+1];
						boy[i+1]=Temp;
					}
		printf("\n排列学生信息中。\n");
		printf("\n请稍等...\n");
		Sleep(1200);
		system("cls");
		printf("        排列成功！\n\n");
		for(i=0;i<BFUN;i++)
			OUTPUT(i);
		printf("\n\n\t键入任意键返回主界面\n");
		getchar();
		break;
		}
        if(strcmp(x,"3")==0)
		{
			for(j=0;j<BFUN-1;j++)/* 冒泡排序法 */
				for(i=0;i<BFUN-j-1;i++)
					if(boy[i].english>boy[i+1].english)/* 字符串boy[i].english与字符串boy[i+1].english比较 */
					{
						Temp=boy[i];
						boy[i]=boy[i+1];
						boy[i+1]=Temp;
					}
		printf("\n排列学生信息中。\n");
		printf("\n请稍等...\n");
		Sleep(1200);
		system("cls");
		printf("        排列成功！\n\n");
		for(i=0;i<BFUN;i++)
			OUTPUT(i);
		printf("\n\n\t键入任意键返回主界面\n");
		getchar();
		break;
		}
         if(strcmp(x,"4")==0)
		{
			for(j=0;j<BFUN-1;j++)/* 冒泡排序法 */
				for(i=0;i<BFUN-j-1;i++)
					if(boy[i].count>boy[i+1].count)/* 字符串boy[i].count与字符串boy[i+1].count比较 */
					{
						Temp=boy[i];
						boy[i]=boy[i+1];
						boy[i+1]=Temp;
					}
		printf("\n排列学生信息中。\n");
		printf("\n请稍等...\n");
		Sleep(1200);
		system("cls");
		printf("        排列成功！\n\n");
		for(i=0;i<BFUN;i++)
			OUTPUT(i);
		printf("\n\n\t键入任意键返回主界面\n");
		getchar();
		break;
		}

		if(strcmp(x,"0")==0)
		{
			putchar('\n');
			system("cls");
			OI();
		}
		system("cls");
		printf("\t键入无效！\n\n");
	}while(strcmp(x,"1")!=0||strcmp(x,"2")!=0||strcmp(x,"0")!=0);
}
