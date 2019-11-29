#include<stdio.h>
#include "pointer.h"

int Test_Add(int a,int b)
{
	return a+b;
}
int Test_Sub(int a,int b)
{
	return a-b;
}
int Test_Mul(int a,int b)
{
	return a*b;
}
int Test_Div(int a,int b)
{
	return a/b;
}
int Test_Mod2(int a)
{
	return a%2;
}


typedef int function_1(int param);
typedef int *function_2(int param);
typedef int (*function_3)(int param);
typedef int* (*function_4)(int param);
int sum1(int n)
{
	int a=100;
	return a+n;
}

int* sum4(int n)//指针函数，即函数返回的是指针类型
{
	int a=200;
	return &a;
}

//int* sum3(int n)//函数指针，即本质是指针
//{
//	int a=300;
//	return a+n;
//}

int sum(function_3 fun)
{
	return fun(10);
}

int* my_sum4(function_4 fun)
{
	return fun(10);
}

void(*APITABLE[128])(void)={Test_Add,Test_Sub,Test_Mul,Test_Div,Test_Mod2};
#define  Test_Add_Table(a,b)	((*(int(*)(int,int))(*APITABLE[0]))(a,b))
#define  Test_Sub_Table(a,b)	((*(int(*)(int,int))(*APITABLE[1]))(a,b))
#define  Test_Mul_Table(a,b)	((*(int(*)(int,int))(*APITABLE[2]))(a,b))
#define  Test_Div_Table(a,b)	((*(int(*)(int,int))(*APITABLE[3]))(a,b))
#define  Test_Mod2_Table(a)		((*(int(*)(int))(*APITABLE[4]))(a))

void pointer_test()
{
	int a = 20;
	int b = 10;
	int (*parr[10])(int,int) = {Test_Add,Test_Sub,Test_Mul,Test_Div};
	printf("%d+%d = %d\r\n",a,b,(*parr[0])(a,b));
	printf("%d-%d = %d\r\n",a,b,(*parr[1])(a,b));
	printf("%d*%d = %d\r\n",a,b,(*parr[2])(a,b));
	printf("%d/%d = %d\r\n",a,b,(*parr[3])(a,b));

	printf("%d+%d = %d\r\n",a,b,Test_Add_Table(a,b));
	printf("%d-%d = %d\r\n",a,b,Test_Sub_Table(a,b));
	printf("%d*%d = %d\r\n",a,b,Test_Mul_Table(a,b));
	printf("%d/%d = %d\r\n",a,b,Test_Div_Table(a,b));
	printf("%d mod2 = %d\r\n",a,Test_Mod2_Table(a));
}