/*
描述
最近Topcoder的XD遇到了一个难题，倘若一个数的三次方的后三位是111，他把这样的数称为小光棍数。他已经知道了第一个小光棍数是471,471的三次方是104487111，现在他想知道第m（m<=10000000000）个小光棍数是多少？
输入
有多组测试数据。第一行一个整数n，表示有n组测试数据。接下来的每行有一个整数m。
输出
输出第m个小光棍数。
样例输入
1
1
样例输出
471
*/
#include <stdio.h>

main()
{
	int n;
	
	scanf("%d",&n);
	while(n--)
	{
		long long m;
		scanf("%lld",&m);
		
		if(m!=1)
		printf("%lld471\n",m-1);
		else
		printf("471\n");
	}
	
	return 0;
}
/*
PS:
	//已知尾数471的数都是，其他验证
	for(i=471;i<=1471;i++)
	{
		//只有后三位影响结果 
		if((i%1000*i%1000*i%1000)==111)
		printf("%d\n",i);
	}
	//输出为471和1471，即中间无 
*/
