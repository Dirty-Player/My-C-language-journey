#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>





//斐波那契数列
// 0 1 1 2 3 5 8 13……



////求n的阶乘 - 递归的方法
////有一个问题，无法实现假如Facl函数中，的参数n为0是返回值也为0；
//int Facl(int n)
//{
//	if (n > 1)
//	{
//		return  n * Facl(n - 1);
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Facl(n);
//	printf("%d", ret);
//
//	return 0;
//}




////求n的阶乘
//int Facl(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int main()
//{
//
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Facl(n);//循环的方式
//	printf("%d", ret);
//
//	return 0;
//}



////递归方法处理求字符串的长度
//int my_strlen(char* str);
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是数组第一个元素的地址 
//	printf("len = %d", len);
//
//	return 0;
//}
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	else
//	{
//		return 0;
//	}
//
//}

////求字符串的长度 —— 可利用函数strlen()也可自行写自定义函数如下
//int my_strlen(char* str);
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的不是整个数组，而是数组第一个元素的地址 
//	printf("len = %d\n", len);
//
//	return 0;
//}
//
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}


////递归函数的调用
////条件：1、要有限制条件，当满足限制条件，递归便不再继续。2、每次递归调用之后越来越接近这个限制条件
//void print(int n);
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//
//	return 0;
//}
//
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}

//int main()//打印素数
//{
//	//素数概念：能切仅能被1和她本身整除的数叫素数
//	//判断方法一：试除法
//	int i = 0;
//	int count = 0;
//	for(i = 101 ;i <= 200;i+=2)// 算法优化 跳过偶数 for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//算法优化for(j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("%d ", count);
//
//	return 0;
//}



//int main()//判断闰年，标准（1、年份不是整百，能被四整除的年份是闰年；2、年份是整百，能被四百整除的是闰年。）
//{
//	int year = 0;//定义一个年份的变量
//	int count = 0;//定义一个闰年个数的变量
//	for (year = 1000; year <= 2000; year++)//确定年份的范围，开始循环
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)//算法改进
//		{
//			printf("%d ", year);
//			count++;
//			
//		}
//		//if (year %4 == 0 && year %100 != 0)//判断标准1
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		//else if(year %400 == 0)//判断标准2
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		
//	}
//	printf("%d ", count);
//	return 0;
//}