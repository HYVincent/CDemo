#include<stdio.h>
#include<stdlib.h>
#include "demo.h" //引入demo.h头文件，就可以使用demo.h里面定义的值

char  s[80] = "fsfffffffffffffffffffffffffff";

void init() {
	char input[30] = "请输入圆的半径长度：\n";//注意字符数组的长度是否够用
	char *p = input;
	for (int i = 0; i < 30; i++) {
		printf("%c", p[i]);
	}
	printf("\n");
	//system("pause");
	float ranius=0.0;
	scanf_s("%f",&ranius);//注意使用randius之前要初始化  &是寻址运算符 它允许从键盘上输入的值存入radius变量中   注意：前方高能，Windows系统接收键盘输入需要使用scanf_s函数，Liunx用scanf就可以了
	fflush(stdin);



		printf("圆的周长=%.3f\n", getZhouChang(ranius));
		printf("圆的面积=%.3f\n", getCircleMianJi(ranius));

		system("pause");
		printf("C语言\n");//\n换行
						//printf("onPause");
		system("pause");//暂停显示结果
		printf("再次显示");
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
		printf("There are %d inches in a foot.\n", n);//用%d来代替n
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

