# include <stdio.h>
main()
{
	float diagonal1,diagonal2;
	float area;
	printf("\n Enter diagonal of the given rhombus:");
	scanf("%f%f",&diagonal1,&diagonal2);
	area = 0.5*diagonal1*diagonal2;
	printf("\n Area of rhombus is: % .3f",area);
	return 0;
}
