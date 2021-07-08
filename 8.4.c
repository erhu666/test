#include<stdio.h>
int main()
{
	void swap(int* p1, int* p2);
		int a, b;
	int *point1, * point2;
	printf("please enter two integer numbers");
	scanf_s("%d,%d", &a, &b);
	point1 = &a, point2 = &b;
	if (a < b)
		swap(point1, point2);
	printf("max=%d,min=%d\n", *point1, *point2);
	return 0;
}
void swap(int* p1, int* p2)
{
	int* p;//指针类型变量只能用来存放变量的地址！
	p = p1;
	p1 = p2;
	p2 = p;
}/*此例说明的一个问题就是函数的实参与形参是单向传递的，该变形参是无法改变实参的值的。
 但是可以改变指针变量所指向的值

 还有一个注意事项就是指针没有多么的神奇，塔只是地址而已。而指针变量也只能用来存储地址*/