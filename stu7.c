#include "my.h"

void SAVE()/* 7 保存学生信息 */
{
	FILE *fp;/* 定义文件指针变量 */
	printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
	printf("\n\t\t*      你已进入学生信息保存模块         *\n");
	printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
	printf("\n\n\t注意！文件将被格式化保存。\n");
	int i;
	char filename[30];
	printf("\n\t请输入要导入的文件名.例【G:\\xxxx.txt】\n");
	printf("\t地址：");
	scanf("%s",filename);
	getchar();
	if((fp=fopen(filename,"rt+"))==NULL)
	{
		printf("\t文件读取失败！\n");
		printf("\n\t键入任意键返回主界面\n");
		getchar();
		system("cls");
		OI();
	}
	printf("\n\n");
	for(i=0;i<BFUN;i++)
		printf("%-9d%-10s%-4d%-4d%-4d%-4d\n",boy[i].num,boy[i].name,boy[i].math,boy[i].physical,boy[i].english,boy[i].math+boy[i].physical+boy[i].english);
	for(i=0;i<BFUN;i++)
		fprintf(fp,"%-9d%-10s%-4d%-4d%-4d%-4d\n",boy[i].num,boy[i].name,boy[i].math,boy[i].physical,boy[i].english,boy[i].math+boy[i].physical+boy[i].english);
	printf("\n\t\t信息都已按以上格式保存。\n\n");
	printf("\t\t键入任意键返回主界面\n");
	getchar();
	fclose(fp);
}

