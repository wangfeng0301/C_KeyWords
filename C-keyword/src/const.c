#include<stdio.h>
#include "const.h"

int function(const int a,const int b)
{

}
void const_test()
{
	const int array1[5]={1,2,3,4,5};
	int const array2[5]={1,2,3,4,5};

	const int test_1;
	const int test_2 = 10;

//	array1[0]=10;
//	test_1 = 10;
	printf("test_1 = %d,\r\n",test_1);
}