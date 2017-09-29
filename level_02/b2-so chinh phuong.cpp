#include<stdio.h>
#include<math.h>
#include<conio.h>
main()
{
	float a,b;
	int c;
	printf("nhap vao a");
	scanf("%f",&a);
	b=sqrt(a);
	c=b;
	if (b-c==0) 
		printf("%f la so chinh phuong",a);
	else printf("%f khog la so chinh phuong",a);
	getch();
}
