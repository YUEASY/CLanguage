#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<string.h>

//�ַ���
//��˫�����������ĵ�һ���ַ�
//int main()
//{
//	"12345";
//
//	return 0;
//}

//int main()
//{
//	//�ַ����� - ������һ����ͬ���͵�Ԫ��
//	//  \0���ַ����Ľ�����־
// 
// 
//	char arr[] = "hello";//�ַ�����β������һ��/0
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};//�������'\0'���"abc"Ч��һ��
//
//	//��ӡ�ַ���
//	printf("%s\n", arr1);//�õ�adc
//	printf("%s\n", arr2);//�õ�abc���������abc
//
//	return 0;
//}



//���ַ����ĳ���strlen
//�����һ��Ҫ����ͷ�ļ�   #include<string.h>

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
	char arr2[] = {'a','b','c'};//�������'\0'���"abc"һ����Ϊ3

	//���ַ�������
	printf("%d\n",strlen(arr1));//�õ�3
	printf("%d\n",strlen(arr2));//�õ�15(���ֵ),��Ϊarr2��/0Ϊֹ

	return 0;
}