# include <stdio.h>
main()
{
	int h,b;
	printf("\n Enter height");
	scanf("%d",&h);
	printf("\n Enter base");
	scanf("%d",&b);
	printf("\n Area is =%d",cal_area(h,b));
}
int cal_area(int height,int base)
{
	int area;
	area=(height*base)/2;
}
