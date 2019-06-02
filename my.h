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
	char name[50];/* 姓名 */
	unsigned long num;/* 学号 */
	int math;/* 数学 */
	int physical;/* 物理 */
	int english;/* 英语 */
	int count; /* 总分 */

}boy[NUMBER],Temp;



/* 定义函数说明（全局说明） */
void INPUT();/* 1.输入学生信息 */

int QUERY(int q);/* 2 查询学生信息 */

void CHANGE();/* 3 修改学生信息 */

void DELETION();/* 4 删除学生信息 */

void SEQUENCE();/* 5 排列学生信息 */

void SHOW();/* 6 显示学生信息 */

void SAVE();/* 7 保存学生信息 */

void LAYIN();/* 9 导入信息 */

void LOGOUT();/* 退出程序界面 */

void OI();/* 操作选项 */

void OUTPUT(int i);/* 输出信息 */

void XG(int k);/* 修改信息调用 */




#endif // MY_H_INCLUDED
