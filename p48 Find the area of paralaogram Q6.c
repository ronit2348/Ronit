# include <stdio.h>
main()
{
	float base,altitude;
	float area;
	printf("\n Enter the base and altitude of the given paralalogram:");
	scanf("%f%f",&base,&altitude);
	area = base*altitude;
	printf("\n Area of paralalogram is: %.3f",area);
}
