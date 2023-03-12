#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

//字符串
//用双引号括起来的的一串字符
//int main()
//{
//	"12345";
//
//	return 0;
//}

//int main()
//{
//	//字符数组 - 数组是一组形同类型的元素
//	//  \0是字符串的结束标志
// 
// 
//	char arr[] = "hello";//字符串结尾隐藏了一个/0
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};//最后增加'\0'则和"abc"效果一致
//
//	//打印字符串
//	printf("%s\n", arr1);//得到adc
//	printf("%s\n", arr2);//得到abc烫烫烫烫蘟bc
//
//	return 0;
//}



//求字符串的长度strlen
//代码第一行要引用头文件   #include<string.h>

//int main()
//{
//	int len = strlen("abcd");
//	printf("%d\n", len);
//
//	return 0;
//}


int main()
{
	char arr1[] = "abc";
	char arr2[] = {'a','b','c'};//最后增加'\0'则和"abc"一样都为3

	//求字符串长度
	printf("%d\n",strlen(arr1));//得到3
	printf("%d\n",strlen(arr2));//得到15(随机值),因为arr2到/0为止

	return 0;
}