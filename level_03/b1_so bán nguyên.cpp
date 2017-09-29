#include<stdio.h>
#include<conio.h>
main()
{
	int b;
	float a;
	printf("nhap vao a: ");
	scanf("%f",&a);
	b=a;
	if (a-b==0.5)
		printf("%f la so ban nguyen",a);
	else printf("%f khong la so ban nnguyen",a);
	getch();
}
