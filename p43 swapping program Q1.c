# include <stdio.h>
main()
{
	int n1,n2,temp;
	printf("\n Enter the number =>");
	scanf("%d",&n1);
	printf("\n Enter the number =>");
	scanf("%d",&n2);
	printf("\n After swapping");
	temp=n1;
	n1=n2;
	n2=temp;
	printf("\n n1 is =%d",n1);
	printf("\n n2 is =%d",n2);
}
swap(int n1,int n2)
{
	int t;
	t=n1;
	n1=n2;
	n2=t;
	printf("\n After swapping n2=%d n2=%d",n1,n2);
}
