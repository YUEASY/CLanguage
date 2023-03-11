#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////const修饰的常变量
//int main()
//{
//	int num = 10;//变量
//	num = 20;
//	printf("num=%d\n", num);//得到num=20
//
//
//	return 0;
//}


//int main()
//{
//	//const修饰的常变量
//	const int num = 10;//num就是常变量 - 具有常属性（即不能改变的属性）
//	num = 20;
//	printf("num=%d\n", num);//报错，num归根结底是变量
//	return 0;
//}
	
//int main()
//{
//    int arr[10] = { 0 };//创建数组 10个元素
//
//	int n = 10;
//	int arr2[n] = { 0 };//n是变量，这里不行
//	//即使是const int n=10也不行
//
//	return 0;
//}

////define定义的标识符常量
#define MAX 10000//定义MAX为10000,即MAX为常量
//int main()
//{
//	//MAX=20000//会报错
//	int n = MAX;
//	printf("n=%d\n", n);
//	return 0;
//}


////枚举常量：可以一一列举的常量
enum Sex
{
	//这种枚举类型的变量的未来可能取值
	MALE,//赋初值//默认值为0
	FEMALE,//默认值为赋初值+1
	SECRET//默认值为赋初值+2
};
int main()
{
	enum Sex s = MALE;
	//或enum Sex s = FEMALE;
	//或enum Sex s = SECRET;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	return 0;
}