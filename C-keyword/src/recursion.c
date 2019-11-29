#include <stdio.h>
#include "recursion.h"

double factorial(unsigned int num)
{
	if(num<=1)
		return 1;
	return factorial(num-1)*num;
}
void Recursion_Test()
{
	unsigned int i,num = 100;
	for(i = 0;i<num;i++)
		printf("%dµÄ½×³Ë£º%f\n",i,factorial(i));
}