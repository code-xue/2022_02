#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//*********�ַ�ָ��**************
//int main()
//{
//	char* ps = "hello world";//ps�д�ŵ����ַ������ַ��ĵ�ַ
//	printf("%c\n", *ps);
//	return 0;
//}

//int main()
//{
//	int a[] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//	int* arr[3] = { a, b, c };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", *(arr[i] + j));  //���ִ�ӡ��ʽ������
//			printf("%d ", arr[i][j]);  //arr[i] ��������е�ԭ����arr+i
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	float a = ;
//	printf("%d\n", a);
//	return 0;
//}


//����ָ�룺ָ�������ָ��
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int (*pa)[] = &arr; //����ָ��  
//	double* d[5];
//	double* (*pd)[5] = &d;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *((*pa)+i));
//	}
//	return 0;
//}	

//********************
//void print1(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}

//*************��������ָ���ӡ��ά����*************
//��ά��������ִ�����Ԫ�صĵ�ַ����ά�������Ԫ���ǵ�һ�У���һ������ָ��
//void print2(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6},{3,4,5,6,7} };
//	//print1(arr, 3, 5);
//	print2(arr, 3, 5);
//	return 0;
//}

//********һά���鴫��**********

//void test1(int arr[10])
//void test1(int arr[])
//void test1(int* p)

//void test2(int* arr2[20])
//void test2(int** arr2)

//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test1(arr);
//	test2(arr2);
//	return 0;
//}

//*********��ά���鴫��***********

//void test(int arr[3][5])
//void test(int arr[][5])    �в���ʡ��
//void test(int (*arr)[5])   ��ά�������ʹ������ָ�봫��

//int main()
//{
//	int arr[3][5] = {0};
//	test(arr);
//	return 0;	
//}

//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n"); //sizeof����ֵΪunsigned����,-1����Ƚ�ʱ����������
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//**************ʵ���ַ�������******************

//void reverse(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s\n", arr);
//	return 0;
//}

