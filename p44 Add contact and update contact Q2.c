# include <stdio.h>
main()
{
	int a;
	printf("\n Enter 1 for add yor contact");
	printf("\n Enter 2 to update your contact");
	printf("\n Enter 3 to exit");
	do
	{
		printf("\n Enter your choice");
		scanf("%d",&a);
		
		switch(a)
		{
			case1:
				add();
				break;
				
			case2:
				update();
				break;
		}
	}while(a!=3);
}
add()
{
	char a[12];
	printf("Add contact");
	scanf("%c",&a);
	printf("\n Entered contact: %c",a);
}
update()
{
	char a[12];
	printf("Add contact");
	scanf("%c",&a);
	printf("\n Update contact: %c",a);
}
