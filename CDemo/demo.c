#include<stdio.h>
#include<stdlib.h>
#include "demo.h" //����demo.hͷ�ļ����Ϳ���ʹ��demo.h���涨���ֵ

char  s[80] = "fsfffffffffffffffffffffffffff";

void init() {
	char input[30] = "������Բ�İ뾶���ȣ�\n";//ע���ַ�����ĳ����Ƿ���
	char *p = input;
	for (int i = 0; i < 30; i++) {
		printf("%c", p[i]);
	}
	printf("\n");
	//system("pause");
	float ranius=0.0;
	scanf_s("%f",&ranius);//ע��ʹ��randius֮ǰҪ��ʼ��  &��Ѱַ����� ������Ӽ����������ֵ����radius������   ע�⣺ǰ�����ܣ�Windowsϵͳ���ռ���������Ҫʹ��scanf_s������Liunx��scanf�Ϳ�����
	fflush(stdin);



		printf("Բ���ܳ�=%.3f\n", getZhouChang(ranius));
		printf("Բ�����=%.3f\n", getCircleMianJi(ranius));

		system("pause");
		printf("C����\n");//\n����
						//printf("onPause");
		system("pause");//��ͣ��ʾ���
		printf("�ٴ���ʾ");
		//system("pause");
		printf("2");
		//printf(getNum());
		//system("pause");
		printf("Be  careful!!\n \a");
		//system("pause");
		printf("\a");
		printf("What ??! \n");
		int m = 2;
		int n = m + INCHES_PER_FOOT;
		printf("There are %d inches in a foot.\n", n);//��%d������n
		printf("pause");
		//printf(getChar());
		char *a = "fsffjakhfal;";
		printf(a);
		//system("pause");
	}
char getChar() {
	return s[80];
}
int getProduct(int a, int b) {
	return a*b;
}

float getZhouChang(float radius) {
	return 2 * PI*radius;
}
float getCircleMianJi(float randus) {
	return PI*randus*randus;
}

