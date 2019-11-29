#include <stdio.h>
#include <stdlib.h>
#include "enum.h"
#include "const.h"
#include "pointer.h"
#include "struct.h"
#include "file.h"
#include "err.h"
#include "recursion.h"

int main()
{
	//const_test();
	//pointer_test();
	struct_test();
	//File_Test();
	//File_Test2();
	//Err_Test();
	Recursion_Test();

	system("pause");
	return 0;
}