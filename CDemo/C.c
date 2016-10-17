#include<stdlib.h>
#include<stdio.h>
#include<limits.h>
#include<float.h>
#include<stddef.h>
#include<ctype.h>
#include "c.h"
#include "demo.h"
#include "TestC.h"

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

	//读取数据的格式说明符
	//读取short类型的数值：%hd
	//读取int类型的数值：%d
	//读取long类型的数值：%ld
	//读取float类型的数值：%f或%e
	//读取double类型的数值：%lf或%le
	//sizeof（数据类型） 返回值为一个无符号的int类型值，表示该数据类型所占用的字节数
	//使用sizeof 数据类型也可以得到该数据类型所占用的字节数  sizeof int;

	int i = 10000;
	long r = 1000000L;//表示为long值
	//控制输出的小数位数
	double d = 1.215432134546165164;
	printf("d=%f.\n", d);
	printf("d=%.3f.\n", d);//限制输出小数点后面的位数  %.3f表示输出小数点后面3位

	float zhouChang=getZhouChang(4.5);
	printf("circle's ZhouChang = %f \n", zhouChang);
	printf("circle's MianJi=%.3f\n", getCircleMianJi(55.6f));
	printf("\n");
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
	printf("m+n=%d.\n", sum);//对于int类型数据的输出用"%d"
	printf("\n");
	int j = getProduct(m, n);
	printf("m*n=%d.\n", j);
	int number = INT_MAX;
	printf("无符号的int类型最大值为%d\n", number);
	long longMax = LONG_MAX;
	printf("无符号的long最大值=%ld\n", longMax);
	float floatMax = FLT_MAX;
	printf("无符号float最大值是：%f\n", floatMax);
	unsigned int size;
	size = sizeof(long long); //size表示long所占用的字节数
	printf("long类型的值占用字节数为：%u\n", size);
	int inta[20];
	unsigned int fsfsf = _countof(inta);//_countof(inta) 返回查询目标所包含的元素个数
	printf("inta[20]占用字节数=%d\n", fsfsf);//输出和inta[20]的占用字节数
	unsigned int fa = sizeof(inta);//sizeof(inta) 返回查询目标所占用的字节数
	printf("inta[20]占用字节数ffffff=%d\n", fa);
	const int constInt = 5;//被const修饰的变量不可再次赋值，类似于java中的final效果
	printf("%d\n", constInt);
	double result = 0.0;
	int a = 10;
	int b = 20;
	result = (double)(a + b) / 2 - (a + b) / (double)(a*a + b*b);//两边的数据类型要统一，不然编译器会隐式转换，把值域小的转为值域大的，比如int/float，结果是float的值，因为int取值范围小于float，被隐式转换为float了
	printf("result=%.2lf\n", result);//对于double类型的数据输出使用"%lf"或"%le"  "%.2lf"表示保留两位小数
	int abc=0 ;
	float value = 2.4f;
	abc = (int)value;
	printf("number=%d\n", abc);
	double price = 10.0;//价格
	long count = 5L;//s数量
	float shipe_cost = 2.5F;
	int discount = 15;
	long double total_coast = (count*price + shipe_cost)*((100L - discount) / 100.0F);
	printf("总价是：%LF\n", total_coast);
	
	char letter = 'A';//对应数字65
	char endZ = 'Z';
	printf("letter=%d\n", letter);
	printf("endZ=%d\n", endZ);
	system("pause");
	printf("从键盘上输入字符\n");
	char ch[100] = "";
	unsigned int mm = sizeof(ch);
	scanf_s("%s", &ch, mm);//注意：如果后面没有加上sizeof(ch)就会报错，没有为格式化字符传入足够的参数
	char *fsf = ch;
	for (int i = 0; i < 100; i++) {
		printf("%c", fsf[i]);
	}
	printf("\n");
	char first = 'T';
	char second = 63;//带符号的char 取值范围-128-127之间，无符号的值为0-255
	printf("The first example as a letter looks like this - %c\n", first);
	printf("The first example as a number looks like this -%d\n", first);
	printf("Ths second example as a letter looks like this - %c\n", second);
	printf("The second example as a number looks like this - %d\n", second);
	printf("十六进制==%x\n", second);

	char aaa = 'a';
	char fff = 'A';
	char bbb=toupper(aaa);//把字符转为大写
	char ccc = tolower(fff);//把字符转为小写
	printf("-->%c\n", bbb);
	printf("-->%c\n", ccc);
	test();//调用TestC.h中声明的test（）方法
	system("pause");
	return 0; //结尾返回值为0表示正常退出，否则表示异常退出
}

//定义一个求和的方法
int getSum(int a, int b) {
	return  a + b;
}



