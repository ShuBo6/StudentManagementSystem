#ifndef MY_H_INCLUDED
#define MY_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<string.h>
#define NUMBER 200
extern  int BFUN;
struct stu
{
	char name[50];/* ���� */
	unsigned long num;/* ѧ�� */
	int math;/* ��ѧ */
	int physical;/* ���� */
	int english;/* Ӣ�� */
	int count; /* �ܷ� */

}boy[NUMBER],Temp;



/* ���庯��˵����ȫ��˵���� */
void INPUT();/* 1.����ѧ����Ϣ */

int QUERY(int q);/* 2 ��ѯѧ����Ϣ */

void CHANGE();/* 3 �޸�ѧ����Ϣ */

void DELETION();/* 4 ɾ��ѧ����Ϣ */

void SEQUENCE();/* 5 ����ѧ����Ϣ */

void SHOW();/* 6 ��ʾѧ����Ϣ */

void SAVE();/* 7 ����ѧ����Ϣ */

void LAYIN();/* 9 ������Ϣ */

void LOGOUT();/* �˳�������� */

void OI();/* ����ѡ�� */

void OUTPUT(int i);/* �����Ϣ */

void XG(int k);/* �޸���Ϣ���� */




#endif // MY_H_INCLUDED
