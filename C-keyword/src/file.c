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

	///////�½��ļ�
	if((fp = fopen("..\\C_KeyWors\\test1.txt","w")) == NULL)
	{
		printf("cannot open this file\r\n");
		exit(0);
	}
	printf("������һ��׼���洢�����̵��ַ�������#������\r\n");
	ch = getchar();
	while(ch != '#')
	{
		fputc(ch,fp);//������ļ�д��һ���ַ�
		putchar(ch);//��������ַ���ʾ����Ļ
		ch = getchar();//�ٴλ�ȡһ���ַ�
	}
	fclose(fp);
	putchar('\n');//�������

	///////׷������
	printf("׷���������ݣ�\r\n");
	if((fp = fopen("..\\C_KeyWors\\test1.txt","a")) == NULL)
	{
		printf("cannot open this file\r\n");
		exit(0);
	}
	printf("������һ��׼���洢�����̵��ַ�������#����:\r\n");
	getchar();
	ch = getchar();
	while(ch != '#')
	{
		fputc(ch,fp);//������ļ�д��һ���ַ�
		putchar(ch);//��������ַ���ʾ����Ļ
		ch = getchar();//�ٴλ�ȡһ���ַ�
	}
	fclose(fp);
	putchar('\n');

	///////���ļ�����
	printf("���ļ����ݣ�\r\n");
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

	//��1���ļ����Ƶ���һ���ļ�
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
		//putchar(ch);//��ʾ����Ļ��
	}
	fclose(test2);
	if((test2 = fopen("..\\C_KeyWors\\test2.txt","r+")) == NULL)
	{
		printf("cannot open test2.txt \r\n");
		exit(0);
	}
	printf("test2.txt�ļ����ݣ�\r\n");
	while(!feof(test2))//��ӡtest2.txt����
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

	for(i=0;i<n-1;i++)//ѡ�񷨶��ַ�������
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
	printf("����µ��ַ���\r\n");
	for(i = 0;i<n;i++)
	{
		fputs(str[i],ftest3);//д�����
		fputc('\n',ftest3);//д��һ�����з�
		puts(str[i]);//��ʾ����Ļ
	}

	i = 0;
	//!feof
	printf("��ǰ�ļ�ָ��λ�ã�%d\n",ftell(ftest3));
	rewind(ftest3);
	printf("��ǰ�ļ�ָ��λ�ã�%d\n",ftell(ftest3));
	while(fgets(str[i],10,ftest3) != NULL)
	{
		printf("%s",str[i]);
		i++;
	}
	fclose(ftest3);
	return 0;
}