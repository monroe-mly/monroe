
#include<stdio.h>
int main()
{

	int a = 10;
	int *b = &a;


	 printf("%d\n", &a);//a�Ĵ����ַ
	 printf("%d\n", a);//a�Ĵ��浥λ
	 printf("%d\n", *b);//b�Ĵ��浥λ
	 printf("%d\n", b);// b = &a =a�Ĵ����ַ
	 printf("%d\n", &b);//b�Ĵ����ַ
		return 0;

}