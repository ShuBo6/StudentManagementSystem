#include "my.h"
void CHANGE()/* 3 �޸�ѧ����Ϣ */
{
	int k;
	printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
	printf("\n\t\t*       ���ѽ���ѧ���ɼ��޸�ģ��        *\n");
	printf("\n\t\t* * * * * * * * * * * * * * * * * * * * *\n");
	printf("\n\n\t*     ���Ȳ���Ҫ�޸ĵ�ѧ����Ϣ     *\n");
	printf("\n\t\t���롮�س���ת�롾��ѯģ�顿...\n");
	getchar();
	Sleep(500);
	system("cls");
	k=QUERY(1);
	printf("\n\n\t�޸�����Ϣ\n");
	printf("\n\t¼����Ϣ�����ѧ�ţ���������ѧ����������ܳɼ������س�������һ�\n");
	XG(k);
	boy[k]=Temp;
	printf("\n\n\t�������������������");
	getchar();getchar();
}
void XG(int k)
{
	int i;
	printf("\nѧ�ţ�");
	scanf("%d",&Temp.num);
	for(i=0;i<=BFUN;i++)
		if(Temp.num==boy[i].num&&i!=k)
		{
			system("cls");
			printf("\n\n\t��ѧ���ѱ�ע�ᣡ\n\n");
			XG(k);
		}
	getchar();
	printf("\n������");
	scanf("%s",&Temp.name);
	if(strlen(Temp.name)>20)
		{
			system("cls");
			printf("\n\n\t�����������󣬳����޶ȡ�\n\n");/* ������������Ϊ20�ַ� */
			XG(k);
		}
	printf("\n��ѧ�ɼ���");
	scanf("%d",&Temp.math);
	if(Temp.math<=0||Temp.math>=150)
		{
			system("cls");
			printf("\t�ɼ���������\n\n\n");
			XG(k);
		}
		printf("\n����ɼ���");
		scanf("%d",&Temp.physical);

		if(Temp.physical<=0||Temp.physical>=100)
		{
			system("cls");
			printf("\t�Ա������޷�ʶ��\n\n");
			XG(k);
		}
		printf("\n����ɼ���");
		scanf("%d",&Temp.english);
		if(Temp.english<=0||Temp.english>=150)
		{
			system("cls");
			printf("\t�ý���������༶������ȷ����\n\n");
			XG(k);
		}
	Sleep(1000);
	printf("\n\n\t�޸ĳɹ���\n");
}
