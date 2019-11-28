#include <stdio.h>
#include "struct.h"

typedef struct  
{
	char a;
	short b;
	int c;
}test_t1;
typedef struct  
{
	int a;
	short b;
	char c;
}test_t2;
typedef struct  
{
	short a;
	char b;
	int c;
}test_t3;
typedef struct  
{
	short a;
	int b;
	char c;
}test_t4;
typedef struct  
{
	char a;
	char b;
	int c;
}test_t5;
typedef struct  
{
	int a;
	long long b;
	char c;
	char d[6];
}test_t6;
typedef struct  
{
	char a;
	char b;
	int c;
	char d;
	char e;
	short f;
}test_t7;
/*测试结构体变量在空间中的分配*/
void struct_test()
{
	test_t1 test1;
	test_t2 test2;
	test_t3 test3;
	test_t4 test4;
	test_t5 test5;
	test_t6 test6;
	test_t7 test7;
	printf("sizeof(char) :%d\r\n",sizeof(char));
	printf("sizeof(short):%d\r\n",sizeof(short));
	printf("sizeof(int)  :%d\r\n\r\n",sizeof(int));

	printf("sizeof(test1):%d\r\n",sizeof(test1));
	printf("sizeof(a):%d\r\n",sizeof(test1.a));
	printf("sizeof(b):%d\r\n",sizeof(test1.b));
	printf("sizeof(c):%d\r\n",sizeof(test1.c));
	printf("&(test1):%4x\r\n",&(test1));
	printf("&(a):%4x\r\n",&(test1.a));
	printf("&(b):%4x\r\n",&(test1.b));
	printf("&(c):%4x\r\n\r\n",&(test1.c));

	printf("sizeof(test2):%d\r\n",sizeof(test2));
	printf("sizeof(a):%d\r\n",sizeof(test2.a));
	printf("sizeof(b):%d\r\n",sizeof(test2.b));
	printf("sizeof(c):%d\r\n",sizeof(test2.c));
	printf("&(test2):%4x\r\n",&(test2));
	printf("&(a):%4x\r\n",&(test2.a));
	printf("&(b):%4x\r\n",&(test2.b));
	printf("&(c):%4x\r\n\r\n",&(test2.c));

	printf("sizeof(test3):%d\r\n",sizeof(test3));
	printf("sizeof(a):%d\r\n",sizeof(test3.a));
	printf("sizeof(b):%d\r\n",sizeof(test3.b));
	printf("sizeof(c):%d\r\n",sizeof(test3.c));
	printf("&(test3):%4x\r\n",&(test3));
	printf("&(a):%4x\r\n",&(test3.a));
	printf("&(b):%4x\r\n",&(test3.b));
	printf("&(c):%4x\r\n\r\n",&(test3.c));

	printf("sizeof(test4):%d\r\n",sizeof(test4));
	printf("sizeof(a):%d\r\n",sizeof(test4.a));
	printf("sizeof(b):%d\r\n",sizeof(test4.b));
	printf("sizeof(c):%d\r\n",sizeof(test4.c));
	printf("&(test4):%4x\r\n",&(test4));
	printf("&(a):%4x\r\n",&(test4.a));
	printf("&(b):%4x\r\n",&(test4.b));
	printf("&(c):%4x\r\n\r\n",&(test4.c));

	printf("sizeof(test5):%d\r\n",sizeof(test5));
	printf("sizeof(a):%d\r\n",sizeof(test5.a));
	printf("sizeof(b):%d\r\n",sizeof(test5.b));
	printf("sizeof(c):%d\r\n",sizeof(test5.c));
	printf("&(test5):%4x\r\n",&(test5));
	printf("&(a):%4x\r\n",&(test5.a));
	printf("&(b):%4x\r\n",&(test5.b));
	printf("&(c):%4x\r\n\r\n",&(test5.c));

	printf("sizeof(test6):%d\r\n",sizeof(test6));
	printf("sizeof(a):%d\r\n",sizeof(test6.a));
	printf("sizeof(b):%d\r\n",sizeof(test6.b));
	printf("sizeof(c):%d\r\n",sizeof(test6.c));
	printf("sizeof(d):%d\r\n",sizeof(test6.d));
	printf("&(test6):%4x\r\n",&(test6));
	printf("&(a):%4x\r\n",&(test6.a));
	printf("&(b):%4x\r\n",&(test6.b));
	printf("&(c):%4x\r\n",&(test6.c));
	printf("&(d):%4x\r\n\r\n",&(test6.d));

	printf("sizeof(test7):%d\r\n",sizeof(test7));
	printf("sizeof(a):%d\r\n",sizeof(test7.a));
	printf("sizeof(b):%d\r\n",sizeof(test7.b));
	printf("sizeof(c):%d\r\n",sizeof(test7.c));
	printf("sizeof(d):%d\r\n",sizeof(test7.d));
	printf("sizeof(e):%d\r\n",sizeof(test7.e));
	printf("sizeof(f):%d\r\n",sizeof(test7.f));
	printf("&(test7):%4x\r\n",&(test7));
	printf("&(a):%4x\r\n",&(test7.a));
	printf("&(b):%4x\r\n",&(test7.b));
	printf("&(c):%4x\r\n",&(test7.c));
	printf("&(d):%4x\r\n",&(test7.d));
	printf("&(e):%4x\r\n",&(test7.e));
	printf("&(f):%4x\r\n\r\n",&(test7.f));
}