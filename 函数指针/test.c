#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//函数指针：存放函数地址的指针

int Add(int a, int b)
{
	return a + b;
}

int main()
{
	int (*pf1)(int ,int) = &Add;
	int (*pf2)(int, int) = Add;
	//两种表达方式都可以，Add等价于&Add

	//函数指针的调用
	int i = pf1(3, 5);
	int j = (*pf1)(3, 5);
	//这两种表达方式都可以，因为pf1和Add都表示函数的地址，解引用符号没有意义
	printf("%d %d\n", i, j);
	return 0;
}