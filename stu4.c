#include "my.h"
void SHOW()/* 6 显示学生信息 */
{
	int i;
	printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
	printf("\n\t\t*       你已进入学生信息显示模块        *\n");
	printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
	printf("......\n\n\n");
	Sleep(1000);
	for(i=0;i<BFUN;i++)
	OUTPUT(i);
	printf("\n键入任意键返回主界面\n\n");
	getchar();
}
