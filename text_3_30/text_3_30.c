#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int main()
{

	//int ch = 0;
	//while ((ch = getchar()) != EOF)
	//{
	//	if (ch < '0' || ch > '9')
	//		continue;
	//	putchar(ch);

	//}
	//int ch = 0;
	////eof - end of file 文件结束标志
	////while ((ch = getchar()) != eof)
	////{
	////	putchar(ch);
	////}
	//int ret = 0;
	//char password[20] = {0};
	//printf("请输入密码：》");
	//scanf("%s", password);//输入密码，并存放在password数组中
	//printf("请确认（Y/N）：》");
	//ret = getchar();//Y/N
	//if (ret == 'Y')
	//	{
	//		printf("确认成功\n");
	//	}
	//else
	//	{
	//		printf("放弃确认\n");
	//	}
		/*失败原因，输入缓冲区（新的概念，getchar（）会读取键盘上所有敲击的命令，
		包括回车，所以，在此，ret所读取到的值是\n所对应的ASCII值10）所以不等，接受到Y\N*/
	//int ret = 0;
	//int ch = 0;
	//char password[20] = {0};
	//printf("请输入密码：》");
	//scanf("%s", password);//输入密码，并存放在password数组中
	////getchar();//一直读取直到将输入缓冲区中的缓存清空（第一种解决方法）
	//while ((ch = getchar()) != '\n')//第二种解决方法
	//{
	//	;
	//}
	//printf("请确认（Y/N）：》");
	//ret = getchar();//Y/N
	//if (ret == 'Y')
	//	{
	//		printf("确认成功\n");
	//	}
	//else
	//{
	//	printf("放弃确认\n");
	//}

	return 0;
}