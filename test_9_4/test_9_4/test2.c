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
////����---%d  ������float---%f  ˫����double---%lf 


//int a=100
////��������Ϊȫ�ֱ���
//
//int main()
//{
//	int a = 10;
//		//��������Ϊ�ֲ�����
//	//��ʱprintf("%d\n", a)��ʾ����10
//
//	return 0;
//}



//дһ��������2�������ĺ�
int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;

	scanf("%d %d", &a, &b);//scanf����  print���
	//��Ҫʹ��scanf ��һ�д������   #define _CRT_SECURE_NO_WARNINGS 1
	sum = a + b;
	printf("sum=%d\n",sum );

	return 0;
}