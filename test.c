#include<stdio.h>

void main()
{
	int num = 1;
	int* ptr = &num;
	printf("num的值是%d, num的地址是%p\n", num, &num);
	*ptr = 2;
	printf("num的值是%d, num的地址是%p, ptr的地址是%p", num, &num, &ptr);
	getchar();
	return;
}