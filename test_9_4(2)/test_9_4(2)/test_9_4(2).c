#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//执行性的代码如printf都要在大括号内
//int main()
//{
//	int a = 10;
//	printf("a=%d", a);//a的作用域为{}之内
//
//	return 0;
//}


//extern int g_val;//声明一下另一个源文件的变量
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//生命周期：变量的创建和销毁的时间段、
//局部变量的生命周期：进入局部范围到出局部范围
//全局变量的生命周期：main函数/程序的生命周期

int main()
{
	{
		int a = 10;
		printf("%d/n", a);
	}

	return 0;
}
