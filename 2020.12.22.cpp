
#include <stdio.h>
int add(int x, int y);
int main()
{
	int  a, b, c;
	printf("please input value of a and b:\n");
	scanf_s("%d %d", &a, &b);
	c =add(a,b);
	printf("max=%d\n", c);
}

int add(int x, int y)
{
	return (x+y);
}