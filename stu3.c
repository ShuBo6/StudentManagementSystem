#include "my.h"
int QUERY(int q)/* 2 ��ѯѧ����Ϣ */
{
	int i=0,x;
	char NAME[50];
	unsigned long NUM;
	do
	{
		printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
		printf("\n\t\t*       ���ѽ���ѧ����Ϣ��ѯģ��        *\n");
		printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
		printf("\t��ѡ�������˽��ѧ����Ϣ\n\n");
		printf("\t* 1-ѧ������  * 2-ѧ��ѧ��  * 0-�˳���ѯ\n");
		printf("\tѡ��");
		scanf("%d",&x);
		if(x==1)
		{
			system("cls");
			printf("\nѧ��������");
			scanf("%s",&NAME);
			printf("\n������...\n");
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
				printf("\n\tϵͳδ��ѯ�����ڡ�%s������Ϣ!\n\n",NAME);
				printf("\t�������ⷵ��������\n\n");
				getchar();getchar();system("cls");
				OI();
			}
		}
		else if(x==2)
		{
			system("cls");
			printf("\nѧ��ѧ�ţ�");
			scanf("%d",&NUM);
			printf("\n������...\n");
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
				printf("\n\tϵͳδ��ѯ�����ڡ�%d������Ϣ!\n\n",NUM);
				printf("\t�������ⷵ��������\n\n");
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
			printf("\n\t�� �� �� �� ѡ �� �� �� ��\n\n");
			printf("\t�ط�����ѯģ�顿��...\n\n");
			Sleep(1800);
			system("cls");
		}
	}while(q!=1);
	return(i);
}
