/*
描述
现在给你一个16进制的加减法的表达式，要求用8进制输出表达式的结果。
输入
第一行输入一个正整数T（0<T<100000）
接下来有T行，每行输入一个字符串s（长度小于15)字符串中有两个数和一个加号或者一个减号，且表达式合法并且所有运算的数都小于31位
输出
每个表达式输出占一行，输出表达式8进制的结果。
样例输入
3
29+4823
18be+6784
4ae1-3d6c
样例输出
44114
100102
6565
*/
#include <stdio.h>

main()
{
	int T;
	long long a,b;
	char sign;
	
	scanf("%d",&T);
	while(T--)
	{
		scanf("%x%c%x",&a,&sign,&b);
		
		if(sign=='+')
		printf("%o\n",a+b);
		if(sign=='-')
		printf("%o\n",a-b);
	}
	
	return 0;
}
