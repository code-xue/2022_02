#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//*********字符指针**************
//int main()
//{
//	char* ps = "hello world";//ps中存放的是字符串首字符的地址
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
//			//printf("%d ", *(arr[i] + j));  //两种打印方式都可以
//			printf("%d ", arr[i][j]);  //arr[i] 编译过程中的原理是arr+i
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


//数组指针：指向数组的指针
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	int (*pa)[] = &arr; //数组指针  
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

//*************利用数组指针打印二维数组*************
//二维数组的名字代表首元素的地址，二维数组的首元素是第一行，是一个数组指针
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

//********一维数组传参**********

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

//*********二维数组传参***********

//void test(int arr[3][5])
//void test(int arr[][5])    列不能省略
//void test(int (*arr)[5])   二维数组可以使用数组指针传参

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
//		printf(">\n"); //sizeof返回值为unsigned类型,-1和其比较时先整型提升
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//**************实现字符串逆序******************

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

