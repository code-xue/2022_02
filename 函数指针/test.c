#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����ָ�룺��ź�����ַ��ָ��

//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int (*pf1)(int ,int) = &Add;
//	int (*pf2)(int, int) = Add;
//	//���ֱ�﷽ʽ�����ԣ�Add�ȼ���&Add
//
//	//����ָ��ĵ���
//	int i = pf1(3, 5);
//	int j = (*pf1)(3, 5);
//	//�����ֱ�﷽ʽ�����ԣ���Ϊpf1��Add����ʾ�����ĵ�ַ�������÷���û������
//	printf("%d %d\n", i, j);
//	return 0;
//}

//���ι��ں���ָ����Ȥ�Ĵ���

//1.  (*((void (*)())0)()
//void (*)()�Ǻ���ָ�����ͣ���0ǿ��ת���ɺ���ָ��
//��0��ַ�����ã�����0��ַ���ĺ���

//2.  void (*signal(int, void(*)(int)))(int)
//signal�Ǻ���������һ������Ϊint,�ڶ�������Ϊ����ָ��
//signal�ķ�������Ϊָ�룬ָ��һ������Ϊint,��������Ϊvoid�ĺ���
//������typedef�ض������ͣ���߿ɶ���
//�Ϸ��������д��
//typedef void(*pfun_t)(int)
// pfun_t  signal(int, pfun_t) 

//***********************************************************************************************

//����ָ�����飺��ź���ָ�������

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
//	int (*pfarr[2])(int, int) = { Add,Sub }; //����ָ������
//	return 0;
//}

//*******����ָ�������Ӧ��**********
//��дһ���������������

//void menu()
//{
//	printf("**************************\n");
//	printf("**** 1.�ӷ�   2.����  ****\n");
//	printf("**** 3.�˷�   4.����  ****\n");
//	printf("****     0.�˳�       ****\n");
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

//*********��ʹ�ú���ָ�����飬��������***************
//int main()
//{
//	menu();
//	int input = 0;
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	do {
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("�������������\n");
//			scanf("%d %d", &a, &b);
//			ret = Add(a, b);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("�������������\n");
//			scanf("%d %d", &a, &b);
//			ret = Sub(a, b);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("�������������\n");
//			scanf("%d %d", &a, &b);
//			ret = Mul(a, b);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("�������������\n");
//			scanf("%d %d", &a, &b);
//			ret = Div(a, b);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("�������,����������\n");
//			break;
//		}
//	} while (input);
//	
//	return 0;
//}

//*********ʹ�ú���ָ�����飬�����****************

//int main()
//{
//	menu();
//	int (*pfarr[5])(int, int) = { 0,Add,Sub,Mul,Div };//��������ָ������
//	//������Ԫ�ش�0��ʼ��Ϊ����1234��������ܺ�����Ӧ
//	int input = 0;
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	do {
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("�������������\n");
//			scanf("%d %d", &a, &b);
//			ret = pfarr[input](a, b);
//			printf("%d\n", ret);
//		}
//		else if (input == 0)
//		{
//			printf("�˳�����\n");
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//	} while (input);
//	return 0;
//}

//*****************************************************************************************************

//����ָ�������ָ��

//int Add(int a, int b)
//{
//	return a + b;
//}
//
//int main()
//{
//	int (*pf)(int, int) = Add; //����ָ��
//	int (*pf2[5])(int, int) = { Add }; //����ָ������
//	int (*(*pf3)[5])(int, int) = &pf2; //����ָ�������ָ��
//	return 0;
//}

//************************************************************************************

//�ص�������ͨ������ָ����õĺ��������Ѻ����ĵ�ַ��������������һ������
//�����ָ�뱻������������ָ��ĺ���ʱ�����Ǿ�˵���ǻص�����

//���ûص������Ż��Ϸ��������������

//void menu()
//{
//	printf("**************************\n");
//	printf("**** 1.�ӷ�   2.����  ****\n");
//	printf("**** 3.�˷�   4.����  ****\n");
//	printf("****     0.�˳�       ****\n");
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
//int calc(int (*pf)(int, int)) //�ú���ָ�����
//{
//	int a = 0;
//	int b = 0;
//	printf("�������������\n");
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
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			//��Add������Ϊ��������calc����
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
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("�������,����������\n");
//			break;
//		}
//	} while (input);
//	
//	return 0;
//}