#include "my.h"
void OI()/* ??????? */
{
	int x;

    printf("|--------------------------------------------|\n");
	printf("|               学生成绩管理系统             |\n");
	printf("|--------------------------------------------|\n");
	printf("|                1---成绩输入                |\n");
	printf("|                2---成绩修改                |\n");
	printf("|                3---查询成绩                |\n");
	printf("|                4---显示成绩                |\n");
	printf("|                5---统计成绩                |\n");
	printf("|                6---注销学生                |\n");
	printf("|                7---成绩导入                |\n");//将学生信息保存到某个文件
	printf("|                8---文件导入                |\n");//从文件中导入学生信息
	printf("|                0---退出系统                |\n");
    printf("|--------------------------------------------|\n"); /* 调用定义函数（主界面）*/
	printf("请输入数字(0~8)以选择相应功能：");
	scanf("%d",&x);
	getchar();
	printf("\n请稍等。。。");
	Sleep(800);
	system("cls");
	switch(x)
	{
	case 1:INPUT();break;/* 1 录入学生信息*/
	case 2:CHANGE();break;/* 2 修改学生信息*/
	case 3:QUERY(0);break;/* 3 查询学生信息*/
	case 4:SHOW();break;/* 4 显示学生信息*/
	case 5:SEQUENCE();break;/* 5 排列学生信息*/
	case 6:DELETION();break;/* 6 删除学生信息*/
	case 7:SAVE();break;/* 7 保存学生到文件信息*/
	case 8:LAYIN();break;/* 8 从文件中导入学生信息*/
	case 0:LOGOUT();break;/* 0 退出程序*/
	default:printf("\n\t\t键入有误\n\n");printf("\n\t键入任意键返回主界面\n\n");getchar();
	}
	system("cls");
	OI();
}
