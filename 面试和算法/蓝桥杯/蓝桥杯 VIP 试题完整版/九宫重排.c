#include<stdio.h>
typedef struct Point
{
	int now[9];
    int x;
    int step;
}point;
	point init,goal;
	point T[400000];//�㼯�� 
	int vis[400000];//��¼���ʹ��ĵ� 
	int E[9]={1,1,2,6,24,120,720,5040,40320};
	int move[4][2] ={-1,0,1,0,0,-1,0,1};
	int start=0,end=0;
int main()
{
	int i;
	char a[10],b[10];
	scanf("%s%s",a,b);
   for(i=0;i<9;i++)
    {
        if(a[i]!='.')
           init.now[i]=a[i]-'0';//init.now Ϊ��ǰ������ 
      else
       {
           init.now[i]=0;
         init.x=i;//��¼"." ���λ�� 
        }
       if(b[i]!='.')
            goal.now[i]=b[i]-'0';//goal.now Ϊ��ǰ������ 
        else
           goal.now[i]=0;
    }
   init.step=0;
    bfs();
   return 0;
}

int cantor(int A[])//����չ��
{
    int i,j,s=0,n;
    for(i=0;i<9;i++)
    {
        n=0;
        for(j=i+1;j<9;j++)
             if(A[i]>A[j])    
                 n++;
        s+=n*E[8-i];
     }
     return s+1;
}


int bfs()
{
    int t,g=cantor(goal.now);
    point p;
    p=init;//ԭ���и�ֵ��P 
    T[end++]=p;//��p����T[end]��λ�� 
    vis[cantor(init.now)]=1;//����ѷ��� 
   while(end-start>0)
   {
        p=T[start];
        if(cantor(p.now)==g)
        {
        	printf("%d",p.step);
            return;
        }
        int i,x,y,x0,y0;
        x=p.x/3,y=p.x%3;
        for(i=0;i<4;i++)//�Ӹ�λ�ó������ĸ��ڵ� 
        {
            x0=x+move[i][0];
           y0=y+move[i][1];
            if (x0<0||x0>2||y0<0||y0>2)
               continue;//�����õ���ѭ�� 
           point q=p;//q��pΪ��� 
           q.x=x0*3+y0;//����"."�µ�λ�� 
           q.step++;
           q.now[p.x]=q.now[q.x];//��������λ�õ�ֵ����ԭ��"."��λ�� 
           q.now[q.x]=0;//����"."������λ�ø�ֵΪ0 
            t=cantor(q.now); 
            if(!vis[t])
            {
               vis[t]=1;
    		   T[end++]=q;
            }
       }
       start++;
   }
    printf("-1");
}

