#include<stdio.h>
#include<stdlib.h>
#include "demo.h" //����demo.hͷ�ļ����Ϳ���ʹ��demo.h���涨���ֵ

char  s[80] = "fsfffffffffffffffffffffffffff";

void init() {

	printf("C����\n");//\n����
	printf("onPause");
	system("pause");//��ͣ��ʾ���
	printf("�ٴ���ʾ");
	system("pause");
	printf("2");
	//printf(getNum());
	system("pause");
	printf("Be  careful!!\n \a");
	system("pause");
	printf("\a");
	printf("What ??! \n");
	int m = 2;
	int n = m + INCHES_PER_FOOT;
	printf("There are %d inches in a foot.\n", n);//��%d������n
	printf("pause");
	//printf(getChar());
	char *a = "fsffjakhfal;";
	printf(a);
	system("pause");
}
char getChar() {
	return s[80];
}
int getProduct(int a, int b) {
	return a*b;
}