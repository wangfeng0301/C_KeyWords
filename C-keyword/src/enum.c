#include<stdio.h>
#include<stdlib.h>

/* ����ö������ */
enum DAY {MON=1,TUE,WED,THU,FRI,SAT,SUN};
//enum DAY {a=1,b,c,d,e,f,g};

void enum_test(void)
{
	/* ʹ�û�������������������ͬʱ�Ա�������ֵ */
	int x=10,y=20,z=30;

	/* ʹ��ö��������������ͬʱ��ö���ͱ�������ֵ */
	enum DAY yesterday = MON,
	today = TUE,
	tomorrow = WED;
	printf("%d %d %d \n",yesterday,today,tomorrow);

	printf("%d bytes \n", sizeof(enum DAY)); //4 bytes
	//printf("%d bytes \n", sizeof(DAY)); //4 bytes

	//printf("%d bytes \n", sizeof(enum BOOLEAN)); //4 bytes
	//printf("%d bytes \n", sizeof(BOOLEAN)); //4 bytes
	//printf("%d bytes \n", sizeof(match_flag)); //4 bytes

	printf("%d bytes \n", sizeof(yesterday)); //4 bytes
	printf("%d bytes \n", sizeof(MON)); //4 bytes
	printf("%d bytes \n", sizeof(SAT)); //4 bytes
	printf("%d bytes \n", sizeof(0)); //4 bytes
}