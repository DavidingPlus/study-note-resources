/*
描述
反过来的三角形乘法列表 
输入
第一有一个整数N，表示有N组数据（N<10）
接下来由N行，每行只有一个整数M(1<=M<=9);
输出
对应每个整数M，根据要求输出乘法表的前N行,具体格式参见输入输出样例和上图.
每两组测试数据结果之间有一个空行隔开，具体如输出样例。
样例输入
3
2
1
5
样例输出
1*1=1 1*2=2 1*3=3 1*4=4 1*5=5 1*6=6 1*7=7 1*8=8 1*9=9
2*2=4 2*3=6 2*4=8 2*5=10 2*6=12 2*7=14 2*8=16 2*9=18

1*1=1 1*2=2 1*3=3 1*4=4 1*5=5 1*6=6 1*7=7 1*8=8 1*9=9

1*1=1 1*2=2 1*3=3 1*4=4 1*5=5 1*6=6 1*7=7 1*8=8 1*9=9
2*2=4 2*3=6 2*4=8 2*5=10 2*6=12 2*7=14 2*8=16 2*9=18
3*3=9 3*4=12 3*5=15 3*6=18 3*7=21 3*8=24 3*9=27
4*4=16 4*5=20 4*6=24 4*7=28 4*8=32 4*9=36
5*5=25 5*6=30 5*7=35 5*8=40 5*9=45
*/
#include <stdio.h>

void M_tables(int row)
{
	int i,j;
	
	for(i=1;i<=row;i++)
	{
		for(j=i;j<=9;j++)
		{
			printf("%d*%d=%d ",i,j,i*j);
		}
		printf("\n");
	}
}

main()
{
	int N;
	
	scanf("%d",&N);
	while(N--)
	{
		int M;
		
		scanf("%d",&M);
		M_tables(M);
	}
	
	return 0;
}
