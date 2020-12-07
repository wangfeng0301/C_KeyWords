#include<stdio.h>
#include<stdlib.h>

/* 定义枚举类型 */
enum DAY {MON=1,TUE,WED,THU,FRI,SAT,SUN};
//enum DAY {a=1,b,c,d,e,f,g};

void enum_test(void)
{
	/* 使用基本数据类型声明变量同时对变量赋初值 */
	int x=10,y=20,z=30;

	/* 使用枚举类型声明变量同时对枚举型变量赋初值 */
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