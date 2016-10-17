#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<math.h>//数学函数

void test() {
	//Math.h函数方法
	//floox(x);返回不大于x(double类型)的最大整数
	//ceil(x);返回不大于x（double）的最小整数
	//fabs(x);返回x的绝对值
	//log(x);//返回x的自然对数（底为e)
	//log10(x);//返回x的对数（底为10）
	//exp(x);//返回e的x方
	//sqrt(x);//返回x的平方根
	//pow(x);//返回x的y次方值


	//枚举 选中的值可能是以下值中的一个，但是不确定
	enum WeekDay
	{
		Monday, Tuesday,Wednesday, Thursday, Friday, Saturday, Sunday//枚举常量或枚举器
	};

	enum WeekDay today = Wednesday;//由于枚举有默认值，所以Wednesday默认值为2，today=2
	//enum Weekday { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday }today = Monday, tomorrow = today + 1; 也可以这样定义并初始化today和tomorrow两个变量 注意确保值的有效性
	//枚举的使用限制：变量是有限定数量的可能值
	//enum{red,orange,yellow,green,blue,indigo,violet}shirt_color; 未命名的枚举，定义了一个变量shirt_color,shirt_color=blue;变量赋值
	_Bool balid = true;//true-->1 false-->0  bool可以和其它类型数值转换，非0数值为true，否则为false

	int number = 10;
	number = number + 10;
	printf("number=%d\n", number);

	for (int i = 0; i < 3; i++) {
		number += 10;
		printf("num=%d,运行第%d次\n", number,i);
	}
	printf("num=%d", number);
	system("pause");

}