///week10-1.cpp �禡�I�s�禡 Recursion  ���j N���h
///�H�e�O�� for �j��g,���ѥ�{�禡�I�s�禡}�Ӽg
#include <stdio.h>
int func(int n)
{
	if(n==1) return 1; ///�פ����,��{�ƾ��k�Ǫk0}N=1����
	return n * func(n-1); ///�禡�I�s�禡
}
int main()
{
	printf("�п�JN:");
	int N;
	scanf("%d",&N);
	int ans = func(N);
	printf("%d",ans);
}
