#include "my.h"
void OI()/* ??????? */
{
	int x;

    printf("|--------------------------------------------|\n");
	printf("|               ѧ���ɼ�����ϵͳ             |\n");
	printf("|--------------------------------------------|\n");
	printf("|                1---�ɼ�����                |\n");
	printf("|                2---�ɼ��޸�                |\n");
	printf("|                3---��ѯ�ɼ�                |\n");
	printf("|                4---��ʾ�ɼ�                |\n");
	printf("|                5---ͳ�Ƴɼ�                |\n");
	printf("|                6---ע��ѧ��                |\n");
	printf("|                7---�ɼ�����                |\n");//��ѧ����Ϣ���浽ĳ���ļ�
	printf("|                8---�ļ�����                |\n");//���ļ��е���ѧ����Ϣ
	printf("|                0---�˳�ϵͳ                |\n");
    printf("|--------------------------------------------|\n"); /* ���ö��庯���������棩*/
	printf("����������(0~8)��ѡ����Ӧ���ܣ�");
	scanf("%d",&x);
	getchar();
	printf("\n���Եȡ�����");
	Sleep(800);
	system("cls");
	switch(x)
	{
	case 1:INPUT();break;/* 1 ¼��ѧ����Ϣ*/
	case 2:CHANGE();break;/* 2 �޸�ѧ����Ϣ*/
	case 3:QUERY(0);break;/* 3 ��ѯѧ����Ϣ*/
	case 4:SHOW();break;/* 4 ��ʾѧ����Ϣ*/
	case 5:SEQUENCE();break;/* 5 ����ѧ����Ϣ*/
	case 6:DELETION();break;/* 6 ɾ��ѧ����Ϣ*/
	case 7:SAVE();break;/* 7 ����ѧ�����ļ���Ϣ*/
	case 8:LAYIN();break;/* 8 ���ļ��е���ѧ����Ϣ*/
	case 0:LOGOUT();break;/* 0 �˳�����*/
	default:printf("\n\t\t��������\n\n");printf("\n\t�������������������\n\n");getchar();
	}
	system("cls");
	OI();
}
