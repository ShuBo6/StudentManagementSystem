#include "my.h"

void SAVE()/* 7 ����ѧ����Ϣ */
{
	FILE *fp;/* �����ļ�ָ����� */
	printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
	printf("\n\t\t*      ���ѽ���ѧ����Ϣ����ģ��         *\n");
	printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
	printf("\n\n\tע�⣡�ļ�������ʽ�����档\n");
	int i;
	char filename[30];
	printf("\n\t������Ҫ������ļ���.����G:\\xxxx.txt��\n");
	printf("\t��ַ��");
	scanf("%s",filename);
	getchar();
	if((fp=fopen(filename,"rt+"))==NULL)
	{
		printf("\t�ļ���ȡʧ�ܣ�\n");
		printf("\n\t�������������������\n");
		getchar();
		system("cls");
		OI();
	}
	printf("\n\n");
	for(i=0;i<BFUN;i++)
		printf("%-9d%-10s%-4d%-4d%-4d%-4d\n",boy[i].num,boy[i].name,boy[i].math,boy[i].physical,boy[i].english,boy[i].math+boy[i].physical+boy[i].english);
	for(i=0;i<BFUN;i++)
		fprintf(fp,"%-9d%-10s%-4d%-4d%-4d%-4d\n",boy[i].num,boy[i].name,boy[i].math,boy[i].physical,boy[i].english,boy[i].math+boy[i].physical+boy[i].english);
	printf("\n\t\t��Ϣ���Ѱ����ϸ�ʽ���档\n\n");
	printf("\t\t�������������������\n");
	getchar();
	fclose(fp);
}

