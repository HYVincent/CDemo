#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include<math.h>//��ѧ����

void test() {
	//Math.h��������
	//floox(x);���ز�����x(double����)���������
	//ceil(x);���ز�����x��double������С����
	//fabs(x);����x�ľ���ֵ
	//log(x);//����x����Ȼ��������Ϊe)
	//log10(x);//����x�Ķ�������Ϊ10��
	//exp(x);//����e��x��
	//sqrt(x);//����x��ƽ����
	//pow(x);//����x��y�η�ֵ


	//ö�� ѡ�е�ֵ����������ֵ�е�һ�������ǲ�ȷ��
	enum WeekDay
	{
		Monday, Tuesday,Wednesday, Thursday, Friday, Saturday, Sunday//ö�ٳ�����ö����
	};

	enum WeekDay today = Wednesday;//����ö����Ĭ��ֵ������WednesdayĬ��ֵΪ2��today=2
	//enum Weekday { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday }today = Monday, tomorrow = today + 1; Ҳ�����������岢��ʼ��today��tomorrow�������� ע��ȷ��ֵ����Ч��
	//ö�ٵ�ʹ�����ƣ����������޶������Ŀ���ֵ
	//enum{red,orange,yellow,green,blue,indigo,violet}shirt_color; δ������ö�٣�������һ������shirt_color,shirt_color=blue;������ֵ
	_Bool balid = true;//true-->1 false-->0  bool���Ժ�����������ֵת������0��ֵΪtrue������Ϊfalse

	int number = 10;
	number = number + 10;
	printf("number=%d\n", number);

	for (int i = 0; i < 3; i++) {
		number += 10;
		printf("num=%d,���е�%d��\n", number,i);
	}
	printf("num=%d", number);
	system("pause");

}