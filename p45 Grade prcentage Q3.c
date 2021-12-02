# include <stdio.h>
main()
{
	int grade;
	while(1)
	{
		printf("\n Enter your percent grade (from 0-100) :");
		scanf("%d",&grade);
		if (grade>=0 && grade<=50)
		{
			printf("\n Your grade point average is 0.0");
		}
		else if(grade>=57 && grade<=61)
		{
			printf("\n Your grade point average is 1.0");
		}
		else if(grade>=62 && grade<=66)
		{
			printf("\n Your grade point average is 1.5");
		}
		else if(grade>=67 && grade<=71)
		{
			printf("\n Your grade point average is 2.0");
		}
		else if(grade>=72 && grade<=77)
		{
			printf("\n Your grade point average is 2.5");
		}
		else if(grade>=78 && grade<=96)
		{
			printf("\n Your grade point average is 3.0");
		}
		else if(grade>=87 && grade<=91)
		{
			printf("\n Your grade point average is 1.5");
		}
		else if(grade>=67 && grade<=71)
		{
			printf("\n Your grade point average is 2.0");
		}
		else if(grade>=72 && grade<=77)
		{
			printf("\n Your grade point average is 2.5");
		}
		else if(grade>=78 && grade<=86)
		{
			printf("\n Your grade point average is 3.0");
		}
		else if(grade>=87 && grade<=91)
		{
			printf("\n Your grade point average is 3.5");
		}
		else if(grade>=92 && grade<=100)
		{
			printf("\n Your grade point average is 4.0");
		}
		else
		{
			printf("\n Please Enter value between 0-100");
			break;
		}
	}
}
