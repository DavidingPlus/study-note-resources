#include "stdio.h"  
#include "stdlib.h"  
void dfs(int a[9][9], int row, int col){  
 int count = 0, d[9] = { 0 },i,j,k; //dΪ��¼ÿһ������������һά����  
 //�������������о��ۼ���9  
 if (row == 9 && col == 9){  
  for (i = 0; i < 9; i++){  
   for (j = 0; j < 9; j++){  
    printf("%d", a[i][j]);  
   }  
   printf("\n");  
  }  
  return;  
 }  
 //��ʼ���ݣ����˸�Ϊ����Ҫ��������a[row][col] == 0�����Ǿ����С��С������޿��������count == 0  
 if (a[row][col] == 0){  
  for ( k = 0; k < 9; k++){      //�м���  
   if (a[row][k] != 0){  
    d[a[row][k] - 1] = 1;  
   }  //�м���  
   if (a[k][col] != 0){  
    d[a[k][col] - 1] = 1;  
   }  
  }  
//�����
int m,n;
  for ( m = (int)(row / 3) * 3; m < (int)(row / 3) * 3 + 3; m++){  
   for ( n = (int)(col / 3) * 3; n < (int)(col / 3) * 3 + 3; n++){  
    if (a[m][n] != 0)  
     d[a[m][n] - 1] = 1;  
   }  
  }  
  for (k = 0; k < 9; k++){  
   if (d[k] == 0) count++;  
  }  
  if (count == 0)  
   return;  
//��������£�����d�м�¼������������ٽ��ж����������뵽��һ���Ĳ�����������һ�����������������ԭ���ģ���֮ǰ�ı�Ļ�ԭ  
  else{  
   for ( k = 0; k < 9; k++){  
    if (d[k] == 0){  
//����d�м�¼���������  
     a[row][col] = k + 1;  
     d[k] = 1;  
//�ٽ��ж����������뵽��һ���Ĳ���  
     if (col == 8 && row == 8){  
      col = col + 1;  
      row = row + 1;  
     }  
     else if (col == 8 && row < 8){  
      col = 0;  
      row += 1;  
     }  
     else if(col < 8 && row <= 8){  
      col += 1;  
     }  
     dfs(a, row, col); //������һ��  
//������һ�����������������ԭ���ģ���֮ǰ�ı�Ļ�ԭ  
     if (col == 0){  
      col = 8;  
      row -= 1;  
     }  
     else{  
      col--;  
     }  
     a[row][col] = 0;  
     d[k] = 0;  
    }  
   }  
  }  
 }  
//��һ�����Ѿ��ṩ��������a[row][col] ��= 0��������������Ĳ�����ֱ�ӽ�����һ��  
 else{  
  if (col == 8 && row == 8){  
   col = col + 1;  
   row = row + 1;  
  }  
  else if (col == 8 && row < 8){  
   col = 0;  
   row += 1;  
  }  
  else if (col < 8 && row <= 8){  
   col += 1;  
  }  
  dfs(a, row, col); //������һ��  
 }  
}  
int main()  
{  
 char temp[10];  
 int a[9][9] = { 0 }, d[9] = { 0 }, row = 0, col = 0; 
 int i,j; 
   //�����ʽ����  
 for (i = 0; i<9; i++)   
 {  
  gets(temp);  
  for (j = 0; j<9; j++)  
  {  
   a[i][j] = (int)(temp[j] - '0');  
  }  
 }  
printf("\n");   
 dfs(a, row, col);  
 return 0;  
}  
