#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int q = 0;//设定数，例如:2
	int w = 0;// 设定n个n位q的加数，；例如：输入3，就是2+22+222
	scanf("%d%d", &q, &w);
	int e = 0;//循环几次
	int r = 0;
	int t = 0;
	for (e = 0; e < w; e++)
	{
		r = r * 10 + q;//让第一个加数向下一个加数转变
		t = t + r;//各个加数的和
	}
	printf("%d\n", t);
	return 0;
}