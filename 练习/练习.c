#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int q = 0;//�趨��������:2
	int w = 0;// �趨n��nλq�ļ����������磺����3������2+22+222
	scanf("%d%d", &q, &w);
	int e = 0;//ѭ������
	int r = 0;
	int t = 0;
	for (e = 0; e < w; e++)
	{
		r = r * 10 + q;//�õ�һ����������һ������ת��
		t = t + r;//���������ĺ�
	}
	printf("%d\n", t);
	return 0;
}