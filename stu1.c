#include "my.h"
void INPUT()/* 1.����ѧ��ȫ����Ϣ */
{
	int i;
	int x;
	printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
	printf("\n\t\t*      ���ѽ���ѧ����Ϣ¼��ģ��         *\n");
	printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
	x=BFUN;
	while(1)/* ��ȫ�ֱ���BFUN��ֵ����x */
	{

		printf("\t�������%d��ѧ������Ϣ�����롮0���˳�¼�룩\n",++x);
		printf("\n\t¼����Ϣ�����ѧ�ţ���������ѧ����������ܳɼ������س�������һ�\n");
		printf("\nѧ�ţ�");
		scanf("%d",&Temp.num);
		if(Temp.num==0)
		{
			system("cls");
			break;
		}
		for(i=0;i<=BFUN;i++)
			if(Temp.num==boy[i].num)
			{
				system("cls");
				printf("\n\n\t��ѧ���ѱ�ע�ᣡ\n\n");INPUT();
			}
		getchar();
		printf("\n������");
		scanf("%s",&Temp.name);
		if(strlen(Temp.name)>20)/* ���������ַ�����Ϊ20 */
		{
			system("cls");
			printf("\n\n\t�����������󣬳����޶ȡ�\n\n");INPUT();
		}
		printf("\n��ѧ�ɼ���");
		scanf("%d",&Temp.math);
		if(Temp.math<=0||Temp.math>=150)
		{
			system("cls");
			printf("\t�ɼ���������\n\n\n");
			INPUT();
		}
		printf("\n����ɼ���");
		scanf("%d",&Temp.physical);

		if(Temp.physical<=0||Temp.physical>=100)
		{
			system("cls");
			printf("\t�ɼ���������\n\n\n");
			INPUT();
		}
		printf("\n����ɼ���");
		scanf("%d",&Temp.english);
		if(Temp.english<=0||Temp.english>=150)
		{
			system("cls");
			printf("\t�ɼ���������\n\n\n");
			INPUT();
		}
		getchar();
		BFUN=x;/* ���溯����ȫ��ȷִ�к󣬲Ż�����ڵ�xֵ����BFUN */
		printf("\n\n\n");

		boy[BFUN-1]=Temp;
	}
}
