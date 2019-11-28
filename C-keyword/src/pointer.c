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


//#define func_ptr_t
////#define INS_FUNC_PTR
//#define USER_FUNC_TABLE_OFFSET	0x0000A000
//typedef void(func_ptr_t* INS_FUNC_PTR)(void); //_INS_ATTR_;
//
//int Test_Sum(int a,int b)
//{
//	return a+b;
//}
//const INS_FUNC_PTR APITABLE[128]= //_attribute_((at(USER_FUNC_TABLE_OFFSET))) = 
//{
//	(INS_FUNC_PTR)Test_Sum
//}
//
//#define  Test_Sum1(a,b)	((*(int(*)(int,int))(APITABLE[0]))(a,b))
//
//int Test_Sum2(int a,int b)
//{
//	return ((*(int(*)(int,int))(APITABLE[0]))(a,b));
//}

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