#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>





//쳲���������
// 0 1 1 2 3 5 8 13����



////��n�Ľ׳� - �ݹ�ķ���
////��һ�����⣬�޷�ʵ�ּ���Facl�����У��Ĳ���nΪ0�Ƿ���ֵҲΪ0��
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




////��n�Ľ׳�
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
//	ret = Facl(n);//ѭ���ķ�ʽ
//	printf("%d", ret);
//
//	return 0;
//}



////�ݹ鷽���������ַ����ĳ���
//int my_strlen(char* str);
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���������һ��Ԫ�صĵ�ַ 
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

////���ַ����ĳ��� ���� �����ú���strlen()Ҳ������д�Զ��庯������
//int my_strlen(char* str);
//int main()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ�Ĳ����������飬���������һ��Ԫ�صĵ�ַ 
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


////�ݹ麯���ĵ���
////������1��Ҫ�����������������������������ݹ�㲻�ټ�����2��ÿ�εݹ����֮��Խ��Խ�ӽ������������
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

//int main()//��ӡ����
//{
//	//����������н��ܱ�1����������������������
//	//�жϷ���һ���Գ���
//	int i = 0;
//	int count = 0;
//	for(i = 101 ;i <= 200;i+=2)// �㷨�Ż� ����ż�� for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//�㷨�Ż�for(j = 2; j < i; j++)
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



//int main()//�ж����꣬��׼��1����ݲ������٣��ܱ�����������������ꣻ2����������٣��ܱ��İ������������ꡣ��
//{
//	int year = 0;//����һ����ݵı���
//	int count = 0;//����һ����������ı���
//	for (year = 1000; year <= 2000; year++)//ȷ����ݵķ�Χ����ʼѭ��
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)//�㷨�Ľ�
//		{
//			printf("%d ", year);
//			count++;
//			
//		}
//		//if (year %4 == 0 && year %100 != 0)//�жϱ�׼1
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		//else if(year %400 == 0)//�жϱ�׼2
//		//{
//		//	printf("%d ", year);
//		//	count++;
//		//}
//		
//	}
//	printf("%d ", count);
//	return 0;
//}