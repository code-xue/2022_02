#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//******************************************************************************************
//一.杨氏矩阵
//有一个数组矩阵，每行从左向右是递增的，从上到下是递增的，
//编写一个程序在这样的矩阵中查找某个数字是否存在
//要求时间复杂度小于O(N)

int find_num(int arr[4][4], int* px, int* py, int k)
{
	int x = 0;
	int y = *py - 1;//从数组左上角开始判断
	while (x < *px && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--; //arr[x][y]是一列中最小的数，>k就可以排除这一列
		}
		else if (arr[x][y] < k)
		{
			x++; //arr[x][y]是一行中最大的数，<k就可以排除这一行
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16 };
	int k = 0;
	scanf("%d", &k);
	int x = 4;
	int y = 4;
    int ret = find_num(arr, &x, &y, k);//返回1则找到，找不到返回0
	if (ret == 1)
	{
		printf("找到了，下标为%d %d\n", x, y);
	}
	else if (ret == 0)
	{
		printf("没找到\n");
	}
	return 0;
}

//************************************************************************************
//二.字符串左旋：实现一个函数，可以左旋字符串中的k个字符
//例如ABCD左旋一个字符是BCDA       左旋两个字符是CDAB


//***********暴力移位法****************
void string_left_rotate(char* str, int k)
{
	int len = strlen(str);
	int i = 0;
	for (i = 0; i < k; i++)
	{
		char tmp = *str;  //将第一个字符放到最后
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			*(str + j) = *(str + j + 1); //将最后一个字符前的字符依次往前挪一位
		}
		*(str + len - 1) = tmp;
	}
}

int main()
{
	char arr[10] = "ABCDEF";
	int k = 0; //要左旋的字符数
	scanf("%d", &k);
	string_left_rotate(arr, k);
	printf("%s\n", arr);
    return 0;
}

//********三步翻转法************
//如左旋两次时，先翻转AB->BA,再翻转CDEF->FEDC,最后字符串整体翻转BAFEDC->CDEFAB

//翻转函数
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}

void string_left_rotate(char* str, int k)
{
	int len = strlen(str);
	//三步翻转
	reverse(str, str + k - 1);//翻转前部分
	reverse(str + k, str + len - 1);//翻转后部分
	reverse(str, str + len - 1);//整体翻转
}

int main()
{
	char arr[10] = "ABCDEF";
	int k = 0;
	scanf("%d", &k);
	string_left_rotate(arr, k);
	printf("%s\n", arr);
	return 0;
}

//**********************************************************************************************
//三.判断一个字符串是否可以由另一个字符串翻转得来

//1.穷举翻转之后的字符串依次比较
// 
int is_string_rotate(char* str1, char* str2)
{
	int len = strlen(str1);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		char tmp = *str1;  //将第一个字符放到最后
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			*(str1 + j) = *(str1 + j + 1); //将最后一个字符前的字符依次往前挪一位
		}
		*(str1 + len - 1) = tmp;
		if (strcmp(str1, str2) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	char arr1[10] = "AABCD";
	char arr2[10] = "BCDAA";
	int ret = is_string_rotate(arr1, arr2);
	if (ret == 1)
	{
		printf("是\n");
	}
	else
	{
		printf("不是\n");
	}
	return 0;
}


//2.利用库函数，先将arr1复制一份，AABCDAABCD,再判断arr2是否是其一部分
 
int is_string_rotate(char* str1, char* str2)
{
	//两字符串长度不相等肯定不是翻转得来的
	if (strlen(str1) != strlen(str2))
	{
		return 0;
	}
	int len = strlen(str1);
	strncat(str1, str1, len);//将arr1复制一份，变成AABCDAABCD
	char* ret = strstr(str1, str2); //strstr判断str2是否是str1的一部分
	return ret != NULL;
}

int main()
{
	char arr1[20] = "AABCD";
	char arr2[10] = "BCDAA";
	int ret = is_string_rotate(arr1, arr2);
	if (ret == 1)
	{
		printf("是\n");
	}
	else
	{
		printf("不是\n");
	}
	return 0;
}