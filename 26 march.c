#include<stdio.h>
int main()
{
	int a=5,b=3;
	int bitwise_result;
	++a;
	printf("After Unary++,a is:%d\n",a);                                   //Prints6
	bitwise_result=a&b;
	printf("Bitwise&result:%d\n",bitwise_result);                          //Prints2
	return 0;
	
}
