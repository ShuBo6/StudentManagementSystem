#include "my.h"



void LAYIN()/* 9 ������Ϣ */
{
	FILE *fp;/* �����ļ�ָ����� */
	char filename[30];
	int i;
	int h=0;
	int x,k=0;
	printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
	printf("\n\t\t*      ���ѽ���ѧ����Ϣ����ģ��         *\n");
	printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");

	x=k;

	printf("\t������Ҫ������ļ���������G:\\xxxx.txt��\n");
	printf("\t��ַ��");
	scanf("%s",&filename);getchar();
	if((fp=fopen(filename,"rt+"))==NULL)
	{
		printf("\t��ȡ�ļ�ʧ�ܣ����Ժ����²���\n\n");

		printf("\t�������ⷵ��������\n\n");getchar();
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
					printf("\nѧ����%-10d ",boy[BFUN+h].num);
					printf(" ������%-10s ",boy[BFUN+h].name);
					// printf(" ��ѧ�ɼ�%-4d ",boy[BFUN+h].math);
                    printf("\t��ѧ�ɼ���%-5d",boy[BFUN+h].math);
                    printf("\t����ɼ���%-5d",boy[BFUN+h].physical);
                    printf("\tӢ��ɼ���%-5d",boy[BFUN+h].english);
                    printf("\t�ܳɼ���%-5d",boy[BFUN+h].count);
					// if(boy[BFUN+h].sex==1)
					// 	printf("\t�Ա�Ϊ����");
					// else if(boy[BFUN+h].sex==0)
					// 	printf("\t�Ա�Ϊ��Ů");
					// else printf("\t�Ա�Ϊ��δ֪");
					// if(boy[BFUN+h].glass==201701)
					// 	printf("\t�༶Ϊ��2017��01��");
					// else if(boy[BFUN+h].glass==201702)
					// 	printf("\t�༶Ϊ��2017��02��");
					// else printf("\t�༶Ϊ��%d",boy[BFUN+h].glass);
					Sleep(2);h++;
					printf("\n\n\n");
				}
			}

		}
		printf("\n\tϵͳ�Ѻ���%d����ͬѧ�����\n",k);/* k���ظ�ѧ�� */
		printf("\n\t�µ���%d����Ϣ\n\n\n",h);/* �µ���h�� */

		BFUN=BFUN+h;/* ȫ�ֱ���������h�� */

		fclose(fp);
		printf("\n\t�������������������\n\n");getchar();


}

void LOGOUT()/* �˳�������� */
{
	Sleep(500);
	system("cls");
	printf("\t\t* * * * * * * * * * * * * * * * *\n");
	printf("\t\t*                               *\n");
	printf("\t\t*          ��ȫ�˳���           *\n");
	printf("\t\t*                               *\n");
	printf("\t\t* * * * * * * * * * * * * * * * *\n");
	printf("\t���Եȡ�����");
	Sleep(1200);
	system("cls");
	printf("\t\t�ټ���\n");
	exit(0);/* �˳� */
}
void OUTPUT(int i)/* �����Ϣ */ /* ����ʵ�θ�ֵ���β�i */
{
    // char name[50];/* ���� */
	// unsigned long num;/* ѧ�� */
	// int math;/* ��ѧ */
	// int physical;/* ���� */
	// int english;/* ���� */
	// int count; /* �ܳɼ� */
	printf("\nѧ��Ϊ:%d\n",boy[i].num);

	printf("\n����:%s\n",boy[i].name);

    printf("\n��ѧ:%d\n",boy[i].math);

    printf("\n����:%d\n",boy[i].physical);

    printf("\n����:%d\n",boy[i].english);
    boy[i].count=boy[i].math+boy[i].physical+boy[i].english;

    printf("\n�ܳɼ�:%d\n",boy[i].count);

	// if(boy[i].sex==1)
	// 	printf("\n�Ա�Ϊ����\n");
	// else if(boy[i].sex==0)
	// 	printf("\n�Ա�Ϊ��Ů\n");
	// else
	// 	printf("\n�Ա�Ϊ����\n");
	// printf("\n���䣺%d\n",boy[i].age);
	// if(boy[i].glass==201701)
	// 	printf("\n�༶Ϊ��2017��01��\n\n");
	// else if(boy[i].glass==201702)
	// 	printf("\n�༶Ϊ��2017��02��\n\n");
	// else printf("\n�༶Ϊ��%d\n\n",boy[i].glass);
}
