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
	int* p;//ָ�����ͱ���ֻ��������ű����ĵ�ַ��
	p = p1;
	p1 = p2;
	p2 = p;
}/*����˵����һ��������Ǻ�����ʵ�����β��ǵ��򴫵ݵģ��ñ��β����޷��ı�ʵ�ε�ֵ�ġ�
 ���ǿ��Ըı�ָ�������ָ���ֵ

 ����һ��ע���������ָ��û�ж�ô�����棬��ֻ�ǵ�ַ���ѡ���ָ�����Ҳֻ�������洢��ַ*/