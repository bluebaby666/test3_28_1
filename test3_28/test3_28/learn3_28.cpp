#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����Ļ��д���˷��ھ���
int main()
{
	int i = 0;
	for (i = 1; i <=9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%2d ", i, j, i * j);
		}
		printf("\n");
	}
	return 0;
}
//��10�����е����ֵ
//int main()
//{
//	int arr[] = { 11,2,3,14,5,16,7,8,9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i <sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d ", max);
//	return 0;
//}
//����1/1-1/2+1/3-1/4+...+1/99-1/100��ֵ������ӡ����
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum+=flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("sum=%1f\n", sum);
//	return 0;
//}
//��1~100�����������г���9�ĸ���
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <=100; i++)
//	{
//		if (i%10 == 9)
//			count++;
//		if(i/10 == 9)
//			count++;	
//	}
//	printf("\n1~100�����������г���9�ĸ���:%d \n ", count);
//	return 0;
//}
//��ӡ100~200֮�������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}	
//	}
//	printf("\n�����ĸ���Ϊ��%d\n", count);
//	return 0;
//}
//��ӡ1000~2000֮�������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	printf("1000~2000֮�������Ϊ��", i);
//	for (i = 1000; i <=2000; i++)
//	{
//		
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	
//		else if(i%400==0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		
//	}
//	printf("\n����ĸ���Ϊ��%d\n", count);
//	return 0;
//}
//�������������Լ��
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (m % n)
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", r);
//	return 0;
//}
//��ӡ3�ı���
//int main()
//{
//	int i = 1;
//	int p = 0;
//	printf("1~100֮������3�ı���Ϊ��\n", i);
//	while (i < 100)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//���������Ӵ�С���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a<b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if(b<c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
