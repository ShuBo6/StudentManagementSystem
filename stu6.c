#include "my.h"
void DELETION()/* 4 ɾ��ѧ����Ϣ */
{
	int k;
	int x;
	int i;

	printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
	printf("\n\t\t*       ���ѽ���ѧ����Ϣע��ģ��        *\n");
	printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
	printf("\n\n\t*     ���Ȳ���Ҫע����ѧ����Ϣ     *\n");
	printf("\n\t���롮�س���ת�롾��ѯģ�顿...\n");
	getchar();
	Sleep(500);
	system("cls");
	k=QUERY(1);/* ��ִ�ж��庯�����ص�ֵ��ֵ��k */
	system("cls");
	do
	{
		OUTPUT(k);
		printf("\n\nȷ���Ƿ�ɾ����ѧ����Ϣ��\n\n");
		printf("���롮1��-��    ���롮0��-��\n");
		scanf("%d",&x);
		getchar();
		if(x==1)
		{
			for(i=k;i<BFUN;i++)
			{
				boy[i]=boy[i+1];/* boy[i]��������Ϣ��boy[i+1]������ */
			}
			BFUN--;
			printf("\nɾ��ѧ����Ϣ�С�\n");
			printf("\n���Ե�...\n");
			Sleep(1200);
			system("cls");
			printf("        ɾ���ɹ���\n\n");
			printf("�������ⷵ��������\n\n");
			getchar();system("cls");
			OI();
		}
		if(x==0)
		{
			OI();
		}
		system("cls");
		printf("\t\t* * * * * * * * *\n\n");
		printf("\t\t*    ������Ч�� *\n\n");
		printf("\t\t* * * * * * * * *\n\n");
	}while(x!=1||x!=0);
}
