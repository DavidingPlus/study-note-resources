/*
描述
很多小学生在学习加法时，发现“进位”特别容易出错。你的任务是计算两个三位数在相加时需要多少次进位。你编制的程序应当可以连续处理多组数据，直到读到两个0（这是输入结束标记）。
输入
输入两个正整数m,n.(m,n,都是三位数)
输出
输出m,n,相加时需要进位多少次。
样例输入
123 456
555 555
123 594
0 0
样例输出
0
3 
1
*/
#include <stdio.h>

main()
{
	int n,m;
	
	scanf("%d%d",&n,&m);
	while(n!=0&&m!=0)
	{
		int i=0,sum=0;
		
		if((n%10+m%10)>=10)
		{
			sum++;
			i=(n%10+m%10)/10;
		}
		if(((n/10%10+m/10%10)+i)>=10)
		{
			sum++;
			i=((n/10%10+m/10%10)+i)/10;
		}
		if(((n/100+m/100)+i)>=10)
		{
			sum++;
		}
		
		printf("%d\n",sum);
		scanf("%d%d",&n,&m);
	}
	
	return 0;
}
