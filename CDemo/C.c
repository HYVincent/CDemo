#include<stdlib.h>
#include<stdio.h>
#include "c.h"
#include "demo.h"

//#include<string.h>//��Ϊstring�Ǳ�׼�ⶨ��ģ����Բ���Ҫд#include<string>,

#define DEFAULT 12  //�궨��

int main() {
	//�޷����������ͣ�unsigned char 1�ֽ�
	//unsigned short int����unsigned short 2�ֽ�
	//unsigned int 4�ֽ�
	//unsigned long int ����unsigned long 4�ֽ�
	//unsigned long long int ����unsigned long long 8�ֽ�
	//float �����ȸ����� 4�ֽ� ȡֵ��Χ��3.4E��38����ȷ��6-7λС����
	//double ˫���ȸ����� 8�ֽ� ȡֵ��Χ��1.7E��308����ȷ��15λС����
	//long double  12�ֽ� ȡֵ��Χ��1.19E��4932����ȷ18λС����


	init();
	printf("This is a C project\n");
	printf("\t1.\tA bird?\n");
	printf("Hi there!\n\n\nThis program is a bit\n");
	printf("\"It's freezing in here\",he said coldly. \n");
	
	char str[80] = "fffffffffffffffffffff";//c��������û���ַ����ĸ��ֻ�����ַ���������ʾjava�е�String���͵�ֵ
	//�ַ���������
	printf("%s", str);//��ʾ��ֵ�Ǹ�������֪��ʲô��
	//system("pause");
	printf("\n");


	char s[20] = "liwenxing";
	char *p = s;//��ʾ��s�ַ����鸳ֵ��p
	printf("%s\n", p);//��ʾ����   //����1 //p�ַ����飬����%s
	//system("pause");

	for (int i = 0; i < 20; i++) {//����2  //i�ַ�������%c
		printf("%c", s[i]);
	}
	printf("\n");//��ѭ�������
	//system("pause");

	for (int i = 0; i < 20; i++) {//����3
		printf("%c", p[i]);  //p[i] �ַ� %c
	}
	printf("\n");
	//system("pause");
	
	for (p; p < str + 20; p++) {//����4
		printf("%c", *p); 
	}
	printf("\n");
	printf("%s", str); //str �ַ�����  %s
	//system("pause");
	printf("\n");

	printf("%d",DEFAULT);
	printf("\n");
	int m = 111;
	int n = 222;
	int sum = getSum(m, n);
	printf("m+n=%d.\n", sum);
	printf("\n");
	int j = getProduct(m, n);
	printf("m*n=%d.\n", j);
	system("pause");
	return 0; //��β����ֵΪ0��ʾ�����˳��������ʾ�쳣�˳�
}

//����һ����͵ķ���
int getSum(int a, int b) {
	return  a + b;
}

