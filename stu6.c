#include "my.h"
void DELETION()/* 4 删除学生信息 */
{
	int k;
	int x;
	int i;

	printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
	printf("\n\t\t*       你已进入学生信息注销模块        *\n");
	printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
	printf("\n\n\t*     首先查找要注销的学生信息     *\n");
	printf("\n\t键入‘回车’转入【查询模块】...\n");
	getchar();
	Sleep(500);
	system("cls");
	k=QUERY(1);/* 将执行定义函数返回的值赋值给k */
	system("cls");
	do
	{
		OUTPUT(k);
		printf("\n\n确认是否删除该学生信息？\n\n");
		printf("键入‘1’-是    键入‘0’-否\n");
		scanf("%d",&x);
		getchar();
		if(x==1)
		{
			for(i=k;i<BFUN;i++)
			{
				boy[i]=boy[i+1];/* boy[i]的所有信息被boy[i+1]所覆盖 */
			}
			BFUN--;
			printf("\n删除学生信息中。\n");
			printf("\n请稍等...\n");
			Sleep(1200);
			system("cls");
			printf("        删除成功！\n\n");
			printf("键入任意返回主界面\n\n");
			getchar();system("cls");
			OI();
		}
		if(x==0)
		{
			OI();
		}
		system("cls");
		printf("\t\t* * * * * * * * *\n\n");
		printf("\t\t*    键入无效！ *\n\n");
		printf("\t\t* * * * * * * * *\n\n");
	}while(x!=1||x!=0);
}
