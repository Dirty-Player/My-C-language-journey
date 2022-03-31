#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//打印出一百以内三的倍数
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if ( i%3 == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//求任意两个数的最大公约数
int main()//运用方法 - 辗转相除法
{
	int m = 24;
	int n = 18;
	int mid1 = 0;
	int mid2 = 0;
	scanf("%d %d", &m, &n);
	if ( m > n )
	{
		;
	}
	else
	{
		mid1 = n;
		n = m;
		m = mid1;
	}
	while (m % n)
	{
		mid2 = m%n;
		m = n;
		n = mid2;
	}
	printf("%d ", n);
}
