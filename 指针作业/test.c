#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//******************************************************************************************
//һ.���Ͼ���
//��һ���������ÿ�д��������ǵ����ģ����ϵ����ǵ����ģ�
//��дһ�������������ľ����в���ĳ�������Ƿ����
//Ҫ��ʱ�临�Ӷ�С��O(N)

int find_num(int arr[4][4], int* px, int* py, int k)
{
	int x = 0;
	int y = *py - 1;//���������Ͻǿ�ʼ�ж�
	while (x < *px && y >= 0)
	{
		if (arr[x][y] > k)
		{
			y--; //arr[x][y]��һ������С������>k�Ϳ����ų���һ��
		}
		else if (arr[x][y] < k)
		{
			x++; //arr[x][y]��һ������������<k�Ϳ����ų���һ��
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
    int ret = find_num(arr, &x, &y, k);//����1���ҵ����Ҳ�������0
	if (ret == 1)
	{
		printf("�ҵ��ˣ��±�Ϊ%d %d\n", x, y);
	}
	else if (ret == 0)
	{
		printf("û�ҵ�\n");
	}
	return 0;
}

//************************************************************************************
//��.�ַ���������ʵ��һ�����������������ַ����е�k���ַ�
//����ABCD����һ���ַ���BCDA       ���������ַ���CDAB


//***********������λ��****************
void string_left_rotate(char* str, int k)
{
	int len = strlen(str);
	int i = 0;
	for (i = 0; i < k; i++)
	{
		char tmp = *str;  //����һ���ַ��ŵ����
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			*(str + j) = *(str + j + 1); //�����һ���ַ�ǰ���ַ�������ǰŲһλ
		}
		*(str + len - 1) = tmp;
	}
}

int main()
{
	char arr[10] = "ABCDEF";
	int k = 0; //Ҫ�������ַ���
	scanf("%d", &k);
	string_left_rotate(arr, k);
	printf("%s\n", arr);
    return 0;
}

//********������ת��************
//����������ʱ���ȷ�תAB->BA,�ٷ�תCDEF->FEDC,����ַ������巭תBAFEDC->CDEFAB

//��ת����
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
	//������ת
	reverse(str, str + k - 1);//��תǰ����
	reverse(str + k, str + len - 1);//��ת�󲿷�
	reverse(str, str + len - 1);//���巭ת
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
//��.�ж�һ���ַ����Ƿ��������һ���ַ�����ת����

//1.��ٷ�ת֮����ַ������αȽ�
// 
int is_string_rotate(char* str1, char* str2)
{
	int len = strlen(str1);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		char tmp = *str1;  //����һ���ַ��ŵ����
		int j = 0;
		for (j = 0; j < len - 1; j++)
		{
			*(str1 + j) = *(str1 + j + 1); //�����һ���ַ�ǰ���ַ�������ǰŲһλ
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
		printf("��\n");
	}
	else
	{
		printf("����\n");
	}
	return 0;
}


//2.���ÿ⺯�����Ƚ�arr1����һ�ݣ�AABCDAABCD,���ж�arr2�Ƿ�����һ����
 
int is_string_rotate(char* str1, char* str2)
{
	//���ַ������Ȳ���ȿ϶����Ƿ�ת������
	if (strlen(str1) != strlen(str2))
	{
		return 0;
	}
	int len = strlen(str1);
	strncat(str1, str1, len);//��arr1����һ�ݣ����AABCDAABCD
	char* ret = strstr(str1, str2); //strstr�ж�str2�Ƿ���str1��һ����
	return ret != NULL;
}

int main()
{
	char arr1[20] = "AABCD";
	char arr2[10] = "BCDAA";
	int ret = is_string_rotate(arr1, arr2);
	if (ret == 1)
	{
		printf("��\n");
	}
	else
	{
		printf("����\n");
	}
	return 0;
}