#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//1.*************��S=a+aa+aaa+aaaa+aaaaa������ֵ**********

//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d %d", &a, &n);
//	int ret = 0;
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//2.**********ʹ��ָ���ӡһά���������ֵ******************

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int* pend = p + sz - 1;
//	while (p <= pend)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//3.*********���1-100000֮�����е�������***********************************


//int main()
//{
//	int i = 123;  //Ҫ�жϵ���
//	for (i = 123; i <= 100000; i++)
//	{
//		int n = 0;  //�������λ��
//		//�ж�λ��
//		int tmp = i;
//		while (tmp)
//		{
//			tmp /= 10;
//			n++;
//		}
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			int ret = pow(tmp % 10, n);
//			sum += ret;
//			tmp /= 10;
//		}
//		if (i == sum)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//*********��ӡ����*************

//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//��ӡ�ϲ�
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		int j = 0;
//		for (j = 0; j < line - 1 -i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�²�
//	for (i = 0; i < line - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//*************һƿ��ˮ1��Ǯ��������ƿ��һƿ����n��Ǯ���ܺȼ�ƿ************************

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = money;
//	int empty = money;
//	while (empty > 1)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("%d\n", total);
//	return 0;
//}

//int main()
//{
//	int money = 0;
//	scanf("%d", &money);
//	int total = 0;
//	if (money)
//	{
//		total = 2 * money - 1;
//	}
//	printf("%d\n", total);
//	return 0;
//}

//**********�����������е���������ǰ�棬ż�����ں���***************

//1.�±���ʽ����
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void move(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		//�����Ѱ��ż��
//		while ((left < right) && arr[left] % 2 == 1) //left < right��ֹ����Խ�����
//		{
//			left++;
//		}
//		//���Ҳ�Ѱ������
//		while ((left < right) && arr[right] % 2 == 0)
//		{
//			right--;
//		}
//		//�����ҵ���������ż��
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//	}
//}

//2.ָ����ʽ����
//void print_arr(int* pa, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//}
//
//void move(int* pa, int sz)
//{
//	int* start = pa;
//	int* end = pa + sz - 1;
//	while (start < end)
//	{
//		//�����Ѱ��ż��
//		while ((start < end) && *(start) % 2 == 1) //left < right��ֹ����Խ�����
//		{
//			start++;
//		}
//		//���Ҳ�Ѱ������
//		while ((start < end) && *(end) % 2 == 0)
//		{
//			end--;
//		}
//		//�����ҵ���������ż��
//		if (start < end)
//		{
//			int tmp = *(start);
//			*(start) = *(end);
//			*(end) = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);
//	print_arr(arr,sz);
//	return 0;
//}

//*********��ӡ�������*************

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if (i > 1 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//�ж�˭������
//A : ������
//B : ��C
//C : ��D
//D :C�ں�˵
//��֪3����˵���滰��1����˵�ļٻ�

//int main()
//{
//	int k = 0;
//	for (k = 'A'; k <= 'D'; k++)
//	{
//		int count = 0;
//		if (k != 'A')
//		{
//			count++;
//		}
//		if (k == 'C')
//		{
//			count++;
//		}
//		if (k == 'D')
//		{
//			count++;
//		}
//		if (k != 'D')
//		{
//			count++;
//		}
//		if (count == 3)
//		{
//			printf("%c", k);
//			break;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//		{
//			printf("%c", killer);
//		}
//	}
//	return 0;
//}

//5���˶�Ա�μ��������
//A˵:B�ڶ����ҵ���
//B˵���ҵڶ���E����
//C˵���ҵ�һ��D�ڶ�	
//D˵��C����ҵ���
//E˵���ҵ��ģ�A��һ
//ÿλѡ�ֶ�ֻ˵����һ�룬�����Ǹ��Ե�����

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (
//							((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 4) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1)
//							)
//						{
//							if (a * b * c * d * e == 120)
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			if (a == b)
//			{
//				continue;
//			}
//			for (c = 1; c <= 5; c++)
//			{
//				if ((a == c) || (b == c))
//				{
//					continue;
//				}
//				for (d = 1; d <= 5; d++)
//				{
//					if ((a == d) || (b == d) || (c == d))
//					{
//						continue;
//					}
//					for (e = 1; e <= 5; e++)
//					{
//						if ((a == e) || (b == e) || (c == e) || (d == e))
//						{
//							continue;
//						}
//						if (
//							((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 4) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1)
//							)
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


