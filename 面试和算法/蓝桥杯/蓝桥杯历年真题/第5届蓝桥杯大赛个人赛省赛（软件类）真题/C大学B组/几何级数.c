#include<stdio.h>  
   
int main()  
{  
	double s = 0;
	int i;
	for(i = 1;s <= 15;i++){
		s+=(double)1/i;
		if(s >= 15)
			printf("%d %7f\n",i,s);
	}
	//printf("%d %7f\n",i-1,s);�����������ӡ��i��Ҫ�� 1 
    return 0;  
} 
