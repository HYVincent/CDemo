#include<stdlib.h>
#include<stdio.h>
#include<limits.h>
#include<float.h>
#include<stddef.h>
#include<ctype.h>
#include "c.h"
#include "demo.h"
#include "TestC.h"

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

	//��ȡ���ݵĸ�ʽ˵����
	//��ȡshort���͵���ֵ��%hd
	//��ȡint���͵���ֵ��%d
	//��ȡlong���͵���ֵ��%ld
	//��ȡfloat���͵���ֵ��%f��%e
	//��ȡdouble���͵���ֵ��%lf��%le
	//sizeof���������ͣ� ����ֵΪһ���޷��ŵ�int����ֵ����ʾ������������ռ�õ��ֽ���
	//ʹ��sizeof ��������Ҳ���Եõ�������������ռ�õ��ֽ���  sizeof int;

	int i = 10000;
	long r = 1000000L;//��ʾΪlongֵ
	//���������С��λ��
	double d = 1.215432134546165164;
	printf("d=%f.\n", d);
	printf("d=%.3f.\n", d);//�������С��������λ��  %.3f��ʾ���С�������3λ

	float zhouChang=getZhouChang(4.5);
	printf("circle's ZhouChang = %f \n", zhouChang);
	printf("circle's MianJi=%.3f\n", getCircleMianJi(55.6f));
	printf("\n");
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
	printf("m+n=%d.\n", sum);//����int�������ݵ������"%d"
	printf("\n");
	int j = getProduct(m, n);
	printf("m*n=%d.\n", j);
	int number = INT_MAX;
	printf("�޷��ŵ�int�������ֵΪ%d\n", number);
	long longMax = LONG_MAX;
	printf("�޷��ŵ�long���ֵ=%ld\n", longMax);
	float floatMax = FLT_MAX;
	printf("�޷���float���ֵ�ǣ�%f\n", floatMax);
	unsigned int size;
	size = sizeof(long long); //size��ʾlong��ռ�õ��ֽ���
	printf("long���͵�ֵռ���ֽ���Ϊ��%u\n", size);
	int inta[20];
	unsigned int fsfsf = _countof(inta);//_countof(inta) ���ز�ѯĿ����������Ԫ�ظ���
	printf("inta[20]ռ���ֽ���=%d\n", fsfsf);//�����inta[20]��ռ���ֽ���
	unsigned int fa = sizeof(inta);//sizeof(inta) ���ز�ѯĿ����ռ�õ��ֽ���
	printf("inta[20]ռ���ֽ���ffffff=%d\n", fa);
	const int constInt = 5;//��const���εı��������ٴθ�ֵ��������java�е�finalЧ��
	printf("%d\n", constInt);
	double result = 0.0;
	int a = 10;
	int b = 20;
	result = (double)(a + b) / 2 - (a + b) / (double)(a*a + b*b);//���ߵ���������Ҫͳһ����Ȼ����������ʽת������ֵ��С��תΪֵ���ģ�����int/float�������float��ֵ����Ϊintȡֵ��ΧС��float������ʽת��Ϊfloat��
	printf("result=%.2lf\n", result);//����double���͵��������ʹ��"%lf"��"%le"  "%.2lf"��ʾ������λС��
	int abc=0 ;
	float value = 2.4f;
	abc = (int)value;
	printf("number=%d\n", abc);
	double price = 10.0;//�۸�
	long count = 5L;//s����
	float shipe_cost = 2.5F;
	int discount = 15;
	long double total_coast = (count*price + shipe_cost)*((100L - discount) / 100.0F);
	printf("�ܼ��ǣ�%LF\n", total_coast);
	
	char letter = 'A';//��Ӧ����65
	char endZ = 'Z';
	printf("letter=%d\n", letter);
	printf("endZ=%d\n", endZ);
	system("pause");
	printf("�Ӽ����������ַ�\n");
	char ch[100] = "";
	unsigned int mm = sizeof(ch);
	scanf_s("%s", &ch, mm);//ע�⣺�������û�м���sizeof(ch)�ͻᱨ��û��Ϊ��ʽ���ַ������㹻�Ĳ���
	char *fsf = ch;
	for (int i = 0; i < 100; i++) {
		printf("%c", fsf[i]);
	}
	printf("\n");
	char first = 'T';
	char second = 63;//�����ŵ�char ȡֵ��Χ-128-127֮�䣬�޷��ŵ�ֵΪ0-255
	printf("The first example as a letter looks like this - %c\n", first);
	printf("The first example as a number looks like this -%d\n", first);
	printf("Ths second example as a letter looks like this - %c\n", second);
	printf("The second example as a number looks like this - %d\n", second);
	printf("ʮ������==%x\n", second);

	char aaa = 'a';
	char fff = 'A';
	char bbb=toupper(aaa);//���ַ�תΪ��д
	char ccc = tolower(fff);//���ַ�תΪСд
	printf("-->%c\n", bbb);
	printf("-->%c\n", ccc);
	test();//����TestC.h��������test��������
	system("pause");
	return 0; //��β����ֵΪ0��ʾ�����˳��������ʾ�쳣�˳�
}

//����һ����͵ķ���
int getSum(int a, int b) {
	return  a + b;
}



