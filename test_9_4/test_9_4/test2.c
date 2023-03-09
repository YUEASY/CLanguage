#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	char ch = 'a';
//	return 0;
//}




//int main()
//{
//	printf("%d",sizeof(char));
//
//	return 0;
//}

//int main()
//{
//	int age = 20;
//	double weight = 75.3;
//
//	age = age + 1;
//	weight = weight - 1.1;
//	printf(" % d\n", age);
//	printf("%lf\n", weight);
//	return 0;
//}
////整型---%d  单精度float---%f  双精度double---%lf 


//int a=100
////大括号外为全局变量
//
//int main()
//{
//	int a = 10;
//		//大括号内为局部变量
//	//此时printf("%d\n", a)显示的是10
//
//	return 0;
//}



//写一个代码求2个整数的和
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;

	scanf("%d %d", &a, &b);//scanf输入  print输出
	//若要使用scanf 第一行代码插入   #define _CRT_SECURE_NO_WARNINGS 1
	sum = a + b;
	printf("sum=%d\n",sum );

	return 0;
}