#include<stdio.h>
int main()
{
	int year;
	printf("请输入一个年份：");
	scanf_s("%d", &year);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("%d年是闰年！",year);
	else
		printf("%d年不是闰年！",year);
}