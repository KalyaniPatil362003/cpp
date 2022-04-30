#include<stdio.h>
#include<conio.h>
void main()
{
int r,c,i,j;
int matrix[100][100];
printf("enter the value of row");
scanf("%d",&r);
printf(" enter the value of coloumn");
scanf("%d",&c);
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d%d",i,j);
scanf("%d",&matrix[i][j]);
}
}
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t"matrix[i][j]);
}
printf("\n");
}
getch();
}