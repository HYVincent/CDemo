#include<stdio.h>
#include<stdlib.h>
#include "demo.h" //引入demo.h头文件，就可以使用demo.h里面定义的值

char  s[80] = "fsfffffffffffffffffffffffffff";

void init() {

	printf("C语言\n");//\n换行
	printf("onPause");
	system("pause");//暂停显示结果
	printf("再次显示");
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
	printf("There are %d inches in a foot.\n", n);//用%d来代替n
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