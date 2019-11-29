#include "err.h"
#include <stdio.h>
#include <string.h>
#include <errno.h>
#include <stdlib.h>

void Err_Test()
{
	unsigned char i;
	fprintf(stderr,"error number: %d\n",errno);
	printf("error number: %d\n",errno);
	for(i=0;i<50;i++)
	{
		fprintf(stderr,"error string%d: %s\n",i,strerror(i));
		printf("error string%d: %s\n",i,strerror(i));
	}
	perror("perror");
	printf("%d\n",EXIT_FAILURE);
	printf("%d\n",EXIT_SUCCESS);
}