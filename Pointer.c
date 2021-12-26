#include <stdio.h>

int main()
{
	int a = 0x11223344;
	int* pa = &a;
	char* pb = &a;

	printf("%p\n", pa);
	printf("%p\n", pa+1);

	printf("%p\n", pb);
	printf("%p\n", pb+1);

	//指针类型决定了指针+1可以向后跳几个字节(指针的步长)
	//int* p;*p+1 --> 4
	//char* p;*p+1 --> 1
	//double* p;*p --> 8
	return 0;
}