###C语言练习Demo date:2016年10月16日23:55:43
* 主要是一些联系，printf，scan_f 
* 注意：在window系统，获取键盘输入要用scan_f("%f",&xx)  %f接受的数值为浮点数
* 无符号整数类型：unsigned char 1字节
* unsigned short int或者unsigned short 2字节
* unsigned int 4字节
* unsigned long int 或者unsigned long 4字节
* unsigned long long int 或者unsigned long long 8字节
* float 单精度浮点数 4字节 取值范围±3.4E±38（精确到6-7位小数）
* double 双精度浮点数 8字节 取值范围±1.7E±308（精确到15位小数）
* long double  12字节 取值范围±1.19E±4932（精确18位小数）

* 读取数据的格式说明符
* 读取short类型的数值：%hd
* 读取int类型的数值：%d
* 读取long类型的数值：%ld
* 读取float类型的数值：%f或%e
* 读取double类型的数值：%lf或%le

####函数调用
例如有两个源文件，A.c和B.c，A.c里面有main函数，B.c里面有gerCirclePerimeter(float radius)函数，此函数为输入半径获取圆的周长，如果要在A.c里面调用B.c的getCirclePerimeter（float radius），须按照如下步骤：
* 首先创建B.h文件，在我的理解中X.c和X.h文件，X.h就是X.c的使用说明书，在B.h文件中声明getCirclePerimeter(float radius)方法，然后在B.c中引入：#include "b.h"
* 然后在A.c里面引入B.h：#include "b.h" 

</br>好了现在就可以直接调用B.c源文件中定义的方法了
