#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//函数指针：存放函数地址的指针

//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int (*pf1)(int ,int) = &Add;
//	int (*pf2)(int, int) = Add;
//	//两种表达方式都可以，Add等价于&Add
//
//	//函数指针的调用
//	int i = pf1(3, 5);
//	int j = (*pf1)(3, 5);
//	//这两种表达方式都可以，因为pf1和Add都表示函数的地址，解引用符号没有意义
//	printf("%d %d\n", i, j);
//	return 0;
//}

//两段关于函数指针有趣的代码

//1.  (*((void (*)())0)()
//void (*)()是函数指针类型，将0强制转换成函数指针
//将0地址解引用，调用0地址处的函数

//2.  void (*signal(int, void(*)(int)))(int)
//signal是函数名，第一个参数为int,第二个参数为函数指针
//signal的返回类型为指针，指向一个参数为int,返回类型为void的函数
//可以用typedef重定义类型，提高可读性
//上方代码可以写成
//typedef void(*pfun_t)(int)
// pfun_t  signal(int, pfun_t) 

//***********************************************************************************************

//函数指针数组：存放函数指针的数组

//int Add(int a, int b)
//{
//	return a + b;
//}
//int Sub(int a, int b)
//{
//	return a - b;
//}
//
//int main()
//{
//	int (*pf1)(int, int) = Add;
//	int (*pf2)(int, int) = Sub;
//	int (*pfarr[2])(int, int) = { Add,Sub }; //函数指针数组
//	return 0;
//}

//*******函数指针数组的应用**********
//编写一个四则运算计算器

//void menu()
//{
//	printf("**************************\n");
//	printf("**** 1.加法   2.减法  ****\n");
//	printf("**** 3.乘法   4.除法  ****\n");
//	printf("****     0.退出       ****\n");
//	printf("**************************\n");
//}
//
//int Add(int a, int b)
//{
//	return a + b;
//}
//int Sub(int a, int b)
//{
//	return a - b;
//}
//int Mul(int a, int b)
//{
//	return a * b;
//}
//int Div(int a, int b)
//{
//	return a / b;
//}

//*********不使用函数指针数组，代码冗余***************
//int main()
//{
//	menu();
//	int input = 0;
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	do {
//		printf("请选择：\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入操作数：\n");
//			scanf("%d %d", &a, &b);
//			ret = Add(a, b);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入操作数：\n");
//			scanf("%d %d", &a, &b);
//			ret = Sub(a, b);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入操作数：\n");
//			scanf("%d %d", &a, &b);
//			ret = Mul(a, b);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入操作数：\n");
//			scanf("%d %d", &a, &b);
//			ret = Div(a, b);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("输入错误,请重新输入\n");
//			break;
//		}
//	} while (input);
//	
//	return 0;
//}

//*********使用函数指针数组，更简洁****************

//int main()
//{
//	menu();
//	int (*pfarr[5])(int, int) = { 0,Add,Sub,Mul,Div };//创建函数指针数组
//	//数组首元素从0开始，为了让1234与各个功能函数对应
//	int input = 0;
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	do {
//		printf("请选择：\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入操作数：\n");
//			scanf("%d %d", &a, &b);
//			ret = pfarr[input](a, b);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出程序\n");
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//		}
//	} while (input);
//	return 0;
//}

//*****************************************************************************************************

//函数指针数组的指针

//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int (*pf)(int, int) = Add; //函数指针
//	int (*pf2[5])(int, int) = { Add }; //函数指针数组
//	int (*(*pf3)[5])(int, int) = &pf2; //函数指针数组的指针
//	return 0;
//}

//************************************************************************************

//回调函数：通过函数指针调用的函数。即把函数的地址当作参数传给另一个函数
//当这个指针被用来调用其所指向的函数时，我们就说这是回调函数

//利用回调函数优化上方计算器程序代码

//void menu()
//{
//	printf("**************************\n");
//	printf("**** 1.加法   2.减法  ****\n");
//	printf("**** 3.乘法   4.除法  ****\n");
//	printf("****     0.退出       ****\n");
//	printf("**************************\n");
//}
//
//int Add(int a, int b)
//{
//	return a + b;
//}
//int Sub(int a, int b)
//{
//	return a - b;
//}
//int Mul(int a, int b)
//{
//	return a * b;
//}
//int Div(int a, int b)
//{
//	return a / b;
//}
//
//int calc(int (*pf)(int, int)) //用函数指针接收
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入操作数：\n");
//	scanf("%d %d", &a, &b);
//	return pf(a, b);
//}
//
//int main()
//{
//	menu();
//	int input = 0;
//	
//	int ret = 0;
//	do {
//		printf("请选择：\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			//将Add函数作为参数传给calc函数
//			ret = calc(Add);  
//			printf("%d\n", ret);
//			break;
//		case 2:
//			ret = calc(Sub);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			ret = calc(Mul);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			ret = calc(Div);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("输入错误,请重新输入\n");
//			break;
//		}
//	} while (input);
//	
//	return 0;
//}