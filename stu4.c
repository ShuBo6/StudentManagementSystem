#include "my.h"
void SHOW()/* 6 ��ʾѧ����Ϣ */
{
	int i;
	printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
	printf("\n\t\t*       ���ѽ���ѧ����Ϣ��ʾģ��        *\n");
	printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
	printf("......\n\n\n");
	Sleep(1000);
	for(i=0;i<BFUN;i++)
	OUTPUT(i);
	printf("\n�������������������\n\n");
	getchar();
}
