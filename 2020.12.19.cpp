
#include<stdio.h>
int main()
{

	int a = 10;
	int *b = &a;


	 printf("%d\n", &a);//a的储存地址
	 printf("%d\n", a);//a的储存单位
	 printf("%d\n", *b);//b的储存单位
	 printf("%d\n", b);// b = &a =a的储存地址
	 printf("%d\n", &b);//b的储存地址
		return 0;

}