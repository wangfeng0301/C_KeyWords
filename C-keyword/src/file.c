#include "file.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int fsize(FILE *fp)
{
	while(!feof(fp))
	{
		
	}
}
int File_Test()
{
	FILE *fp;
	FILE *test2;
	char ch;
	unsigned char i;

	///////新建文件
	if((fp = fopen("..\\C_KeyWors\\test1.txt","w")) == NULL)
	{
		printf("cannot open this file\r\n");
		exit(0);
	}
	printf("请输入一个准备存储到磁盘的字符串，以#结束：\r\n");
	ch = getchar();
	while(ch != '#')
	{
		fputc(ch,fp);//向磁盘文件写入一个字符
		putchar(ch);//将输出的字符显示在屏幕
		ch = getchar();//再次获取一个字符
	}
	fclose(fp);
	putchar('\n');//输出换行

	///////追加数据
	printf("追加输入数据：\r\n");
	if((fp = fopen("..\\C_KeyWors\\test1.txt","a")) == NULL)
	{
		printf("cannot open this file\r\n");
		exit(0);
	}
	printf("请输入一个准备存储到磁盘的字符串，以#结束:\r\n");
	getchar();
	ch = getchar();
	while(ch != '#')
	{
		fputc(ch,fp);//向磁盘文件写入一个字符
		putchar(ch);//将输出的字符显示在屏幕
		ch = getchar();//再次获取一个字符
	}
	fclose(fp);
	putchar('\n');

	///////读文件内容
	printf("读文件内容：\r\n");
	if((fp = fopen("..\\C_KeyWors\\test1.txt","r")) == NULL)
	{
		printf("cannot open this file\r\n");
		exit(0);
	}
	while(!feof(fp))
	{
		ch = fgetc(fp);
		putchar(ch);
	}
	fclose(fp);
	putchar('\n');

	//将1个文件复制到另一个文件
	if((fp = fopen("..\\C_KeyWors\\test1.txt","r")) == NULL)
	{
		printf("cannot open this file\r\n");
		exit(0);
	}
	if((test2 = fopen("..\\C_KeyWors\\test2.txt","w+")) == NULL)
	{
		printf("cannot open test2.txt \r\n");
		exit(0);
	}
	while(!feof(fp))
	{
		ch = fgetc(fp);
		fputc(ch,test2);
		//putchar(ch);//显示在屏幕上
	}
	fclose(test2);
	if((test2 = fopen("..\\C_KeyWors\\test2.txt","r+")) == NULL)
	{
		printf("cannot open test2.txt \r\n");
		exit(0);
	}
	printf("test2.txt文件内容：\r\n");
	while(!feof(test2))//打印test2.txt内容
	{
		ch = fgetc(test2);
		putchar(ch);
	}
	putchar('\n');
	fclose(fp);
	fclose(test2);

	return 0;
}
int File_Test2()
{
	FILE *ftest3;
	FILE *ftest4;
	char ch;
	int i,j,k,n=3;
	char str[3][10],temp[10];

	printf("Enter string\r\n");
	for(i=0;i<n;i++)
		gets(str[i]);

	for(i=0;i<n-1;i++)//选择法对字符串排序
	{
		k= i;
		for(j = i+1;j<n;j++)
			if(strcmp(str[k],str[j])>0)
				k=j;
		if(k!=i)
		{
			strcpy(temp,str[i]);
			strcpy(str[i],str[k]);
			strcpy(str[k],temp);
		}
	}
	if((ftest3 = fopen("..\\C_KeyWors\\test3.txt","w+")) == NULL)
	{
		printf("cannot open test3.txt");
		exit(0);
	}
	printf("输出新的字符串\r\n");
	for(i = 0;i<n;i++)
	{
		fputs(str[i],ftest3);//写入磁盘
		fputc('\n',ftest3);//写入一个换行符
		puts(str[i]);//显示在屏幕
	}

	i = 0;
	//!feof
	printf("当前文件指针位置：%d\n",ftell(ftest3));
	rewind(ftest3);
	printf("当前文件指针位置：%d\n",ftell(ftest3));
	while(fgets(str[i],10,ftest3) != NULL)
	{
		printf("%s",str[i]);
		i++;
	}
	fclose(ftest3);
	return 0;
}