#include "my.h"


void SEQUENCE()/* 5 ����ѧ����Ϣ */
{
	char x[2];
	int i,j;
	printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
	printf("\n\t\t*       ���ѽ���ѧ����Ϣ����ģ��        *\n");
	printf("\n\t\t * * * * * * * * * * * * * * * * * * * * *\n");
	do
	{
		printf("\n\n\t* ���롮1������ѧ�ɼ�����  * ���롮2��������ɼ����� * ���롮3��������ɼ����� * ���� ��4�� ���ܳɼ����� * ���롮0������������\n\n");
		printf("\tѡ��");
		scanf("%s",&x);
		getchar();
		if(strcmp(x,"1")==0)
		{
			for(j=0;j<BFUN-1;j++)/* ð������ */
				for(i=0;i<BFUN-j-1;i++)
					if(boy[i].math>boy[i+1].math)/* boy[i].math��boy[i+1].math�Ƚ� */
					{
						Temp=boy[i];
						boy[i]=boy[i+1];
						boy[i+1]=Temp;
					}
			printf("\n����ѧ����Ϣ�С�\n");
			printf("\n���Ե�...\n");
			Sleep(600);
			system("cls");
			printf("        ���гɹ���\n\n");
			for(i=0;i<BFUN;i++)
				OUTPUT(i);
			printf("\n\t�������������������\n\n");
			getchar();
			break;
		}
		if(strcmp(x,"2")==0)
		{
			for(j=0;j<BFUN-1;j++)/* ð������ */
				for(i=0;i<BFUN-j-1;i++)
					if(boy[i].physical>boy[i+1].physical)/* �ַ���boy[i].physical���ַ���boy[i+1].physical�Ƚ� */
					{
						Temp=boy[i];
						boy[i]=boy[i+1];
						boy[i+1]=Temp;
					}
		printf("\n����ѧ����Ϣ�С�\n");
		printf("\n���Ե�...\n");
		Sleep(1200);
		system("cls");
		printf("        ���гɹ���\n\n");
		for(i=0;i<BFUN;i++)
			OUTPUT(i);
		printf("\n\n\t�������������������\n");
		getchar();
		break;
		}
        if(strcmp(x,"3")==0)
		{
			for(j=0;j<BFUN-1;j++)/* ð������ */
				for(i=0;i<BFUN-j-1;i++)
					if(boy[i].english>boy[i+1].english)/* �ַ���boy[i].english���ַ���boy[i+1].english�Ƚ� */
					{
						Temp=boy[i];
						boy[i]=boy[i+1];
						boy[i+1]=Temp;
					}
		printf("\n����ѧ����Ϣ�С�\n");
		printf("\n���Ե�...\n");
		Sleep(1200);
		system("cls");
		printf("        ���гɹ���\n\n");
		for(i=0;i<BFUN;i++)
			OUTPUT(i);
		printf("\n\n\t�������������������\n");
		getchar();
		break;
		}
         if(strcmp(x,"4")==0)
		{
			for(j=0;j<BFUN-1;j++)/* ð������ */
				for(i=0;i<BFUN-j-1;i++)
					if(boy[i].count>boy[i+1].count)/* �ַ���boy[i].count���ַ���boy[i+1].count�Ƚ� */
					{
						Temp=boy[i];
						boy[i]=boy[i+1];
						boy[i+1]=Temp;
					}
		printf("\n����ѧ����Ϣ�С�\n");
		printf("\n���Ե�...\n");
		Sleep(1200);
		system("cls");
		printf("        ���гɹ���\n\n");
		for(i=0;i<BFUN;i++)
			OUTPUT(i);
		printf("\n\n\t�������������������\n");
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
		printf("\t������Ч��\n\n");
	}while(strcmp(x,"1")!=0||strcmp(x,"2")!=0||strcmp(x,"0")!=0);
}
