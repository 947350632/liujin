// 大作业.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<stdio.h>
#include<stdlib.h>
#include"会员特权管理.h"

;
double nowintegral=0;

int main()
{
	system("color f0");

	for(;;)
	{
		system("cls");
		int call=-1;
		puts("请call\n");
		puts("积分系统 1\t退出系统 2\t积分折扣 3");
		scanf_s("%d", &call);
		while (call != 1 && call != 2 && call != 3)
		{
			printf("\n您的输入出错了。\n");
			char a[10];
			gets_s(a);
			system("pause");
			system("cls");
			puts("\t请call\n");
			puts("积分系统 1\t退出系统 2\t积分折扣");
			scanf_s("%d", &call);
		}
		switch (call)
		{
		case 1:
			integral_system();
			break;
		case 3:
			consumption_discount_system();
			break;
		case 2:
			exit(0);
		}
	}
	system("PAUSE");
    return 0;
}

