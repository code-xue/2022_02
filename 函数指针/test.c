#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����ָ�룺��ź�����ַ��ָ��

int Add(int a, int b)
{
	return a + b;
}

int main()
{
	int (*pf1)(int ,int) = &Add;
	int (*pf2)(int, int) = Add;
	//���ֱ�﷽ʽ�����ԣ�Add�ȼ���&Add

	//����ָ��ĵ���
	int i = pf1(3, 5);
	int j = (*pf1)(3, 5);
	//�����ֱ�﷽ʽ�����ԣ���Ϊpf1��Add����ʾ�����ĵ�ַ�������÷���û������
	printf("%d %d\n", i, j);
	return 0;
}