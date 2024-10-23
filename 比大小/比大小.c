#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int t, x, y,max,t1;
int main()
{
	int a, b, c, d, e, f, g, h, i, j;
	scanf("%d%d%d%d%d%d%d%d%d%d", &a, &b, &c,&d,&e,&f,&g,&h,&i,&j);
	int num[] = {a,b,c,d,e,f,g,h,i,j};
	max = 0;
	for (t = 0; t < 9;t++)
	{
		
		x = num[t];
		y = num[t+1];
		if (x > y&&x>max)
		{
			max = x;
			
		}
		else if (x<y && y>max)
		{
			max = y;
		}
		else
		{
			
		}
		
	}
	printf("%d",max);
}
