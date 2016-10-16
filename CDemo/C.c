#include<stdlib.h>
#include<stdio.h>
#include "c.h"
#include "demo.h"

//#include<string.h>//因为string是标准库定义的，所以不需要写#include<string>,

#define DEFAULT 12  //宏定义

int main() {
	//无符号整数类型：unsigned char 1字节
	//unsigned short int或者unsigned short 2字节
	//unsigned int 4字节
	//unsigned long int 或者unsigned long 4字节
	//unsigned long long int 或者unsigned long long 8字节
	//float 单精度浮点数 4字节 取值范围±3.4E±38（精确到6-7位小数）
	//double 双精度浮点数 8字节 取值范围±1.7E±308（精确到15位小数）
	//long double  12字节 取值范围±1.19E±4932（精确18位小数）


	init();
	printf("This is a C project\n");
	printf("\t1.\tA bird?\n");
	printf("Hi there!\n\n\nThis program is a bit\n");
	printf("\"It's freezing in here\",he said coldly. \n");
	
	char str[80] = "fffffffffffffffffffff";//c语言里面没有字符串的概念，只能用字符数组来表示java中的String类型的值
	//字符数组的输出
	printf("%s", str);//显示的值是负数，不知道什么鬼
	//system("pause");
	printf("\n");


	char s[20] = "liwenxing";
	char *p = s;//表示把s字符数组赋值给p
	printf("%s\n", p);//显示正常   //方法1 //p字符数组，用呢%s
	//system("pause");

	for (int i = 0; i < 20; i++) {//方法2  //i字符，用了%c
		printf("%c", s[i]);
	}
	printf("\n");//用循环来输出
	//system("pause");

	for (int i = 0; i < 20; i++) {//方法3
		printf("%c", p[i]);  //p[i] 字符 %c
	}
	printf("\n");
	//system("pause");
	
	for (p; p < str + 20; p++) {//方法4
		printf("%c", *p); 
	}
	printf("\n");
	printf("%s", str); //str 字符数组  %s
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
	return 0; //结尾返回值为0表示正常退出，否则表示异常退出
}

//定义一个求和的方法
int getSum(int a, int b) {
	return  a + b;
}

