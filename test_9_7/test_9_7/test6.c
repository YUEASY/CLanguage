#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//转义字符
//int main()
//{
//	//printf("D:\test\test.c");//(\t转变了原来的意思)
//		printf("ad\ncc");//(\n转变了原来的意思)
//
//	return 0;
//}

//int main()
//{
//	printf("D:\\test\\test.c");//继续加\即解决
//		printf("ad\\ncc");
//	return 0;
//}







//int main()
//{
//	//printf("(Are yuo ok??)");//在其他版本中可能出现   ??)  -->  ]    (即三字母词）
//		//  (Are you ok]
//	printf("(Are yuo ok?\?)");//即为正常
//	return 0;
//}

//若要打印单引号或双引号
//int main()
//{
//	//printf("%c",''');//应在需要打印的字符前加\
//
//	printf("%s", "\"");
//	return 0;
//}
//  %d打印整型数字
//  %c打印字符
//  %s打印字符串(包含字符)


//
//int main()
//{
//	printf("\a");//会发出警告声(蜂鸣)
//	return 0;
//}


//int main()
//{
//	//printf("%d\n",'/130');//得到 88
//	//printf("%c\n",'/130');//得到 X
//	//八进制130  --> 十进制88   --> ASCII码为88的是大写的X
//
//	printf("%c\n", '/x30');//十六进制30  -->十进制48  -->'0'
//	return 0;
//}

//作业
int main()
{
	printf("%d\n", strlen("c:\test\328\test.c"));//答案是

	return 0;
}