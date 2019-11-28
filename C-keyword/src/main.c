#include <stdio.h>
#include <stdlib.h>
#include "enum.h"
#include "const.h"
#include "pointer.h"
#include "struct.h"

typedef struct 
{
	int age;
	char name[6];
	short score;
}student;


///////////////////////////////////////////////////
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

int main()
{
	//int i;
	//unsigned int ii;
	//char c;
	//short sh;
	//double dou;
	//float f;
	//long l;
	//long int li;
	//long long int lli;
	//char str1[]={"abcde"};
	//char str2[]={'a','b','c','d','e'};
	//char str3[5]={"abcde"};

	//student wang={20,"wangf",80};

	//printf("wang.age=%d\r\n",wang.age);
	//printf("wang.name=%s\r\n",wang.name);
	//printf("wang.score=%d\r\n",wang.score);

	//printf("length of int: %d\r\n",sizeof(i));
	//printf("length of unsigned int: %d\r\n",sizeof(ii));
	//printf("length of char: %d\r\n",sizeof(c));
	//printf("length of short: %d\r\n",sizeof(sh));
	//printf("length of double: %d\r\n",sizeof(dou));
	//printf("length of float: %d\r\n",sizeof(f));
	//printf("length of long: %d\r\n",sizeof(l));
	//printf("length of long int: %d\r\n",sizeof(li));
	//printf("length of long long int: %d\r\n",sizeof(lli));
	//printf("length of str1: %d\r\n",sizeof(str1));
	//printf("length of str2: %d\r\n",sizeof(str2));
	//printf("length of str3: %d\r\n",sizeof(str3));


	//num_test test;
	//int test;
	//int a = 0x02;
	//test = a;
	//printf("num1 is %d\r\n",num1);
	//printf("num2 is %d\r\n",num2);
	//printf("num3 is %d\r\n",num3);
	//printf("num_test is %d\r\n",test);
	//if(test == num3)
	//	printf("true\r\n");

	//printf("test_a is %d\r\n",test_a);
	//printf("test_b is %d\r\n",test_b);
	//printf("test_c is %d\r\n",test_c);
	//printf("test_a is %d\r\n",test_a);


//#define LOADER 0x00012000
//	char test[4]={0xff,0xee,0xdd,0xcc};
//	char FlagBuf[4]={0,1,2,3};
//	int a = (*(int*)(FlagBuf));
//	(void(*)(char *))(*(int*)(FlagBuf));
//	(*(void(*)(char *))(*(int*)(FlagBuf)))(test);
//
	

	
	//printf("函数指针：%d \r\n",sum(sum1));
	//printf("返回指针的函数指针：%d \r\n",my_sum4(sum4));

	//const_test();
	//pointer_test();
	struct_test();

	system("pause");
	return 0;
}