#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////const���εĳ�����
//int main()
//{
//	int num = 10;//����
//	num = 20;
//	printf("num=%d\n", num);//�õ�num=20
//
//
//	return 0;
//}


//int main()
//{
//	//const���εĳ�����
//	const int num = 10;//num���ǳ����� - ���г����ԣ������ܸı�����ԣ�
//	num = 20;
//	printf("num=%d\n", num);//����num�������Ǳ���
//	return 0;
//}
	
//int main()
//{
//    int arr[10] = { 0 };//�������� 10��Ԫ��
//
//	int n = 10;
//	int arr2[n] = { 0 };//n�Ǳ��������ﲻ��
//	//��ʹ��const int n=10Ҳ����
//
//	return 0;
//}

////define����ı�ʶ������
#define MAX 10000//����MAXΪ10000,��MAXΪ����
//int main()
//{
//	//MAX=20000//�ᱨ��
//	int n = MAX;
//	printf("n=%d\n", n);
//	return 0;
//}


////ö�ٳ���������һһ�оٵĳ���
enum Sex
{
	//����ö�����͵ı�����δ������ȡֵ
	MALE,//����ֵ//Ĭ��ֵΪ0
	FEMALE,//Ĭ��ֵΪ����ֵ+1
	SECRET//Ĭ��ֵΪ����ֵ+2
};
int main()
{
	enum Sex s = MALE;
	//��enum Sex s = FEMALE;
	//��enum Sex s = SECRET;
	printf("%d\n", MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
	return 0;
}