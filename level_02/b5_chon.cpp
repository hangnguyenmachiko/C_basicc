#include<stdio.h>
#include<math.h>
#include<conio.h>
main()
{
	int chon;
	float cv, dt;
	printf("chon 1,2,3,hoac 4 ");
	scanf("%d",&chon);
	if (chon==1)
		{
			float a,b,c,p;
			printf(" nhap vao 3 canh a,b,c");
			scanf("%f%f%f",&a,&b,&c);
			cv=a+b+c;
			p=cv/2;
			dt= sqrt(p*(p-a)*(p-b)*(p-c));
			printf("cv cua tam giac la cv=%f",cv);
			printf("dt=%f",dt);
		}
	if(chon==2)
		{
			float a;
			printf ("nhap vao canh cua hinh vuong a=");
			scanf("%f",&a);
			cv=4*a;
			dt=a*a;
			printf("cv cua hinh vuong la cv=%f",cv);
			printf("dt=%f",dt);
		}
	if(chon==3)
		{
			float a,b;
			printf (" nhap vao a,b");
			scanf("%f%f",a,b);
			cv=(a+b)/2;
			dt=a*b;
			printf(" cv cua hinh chu nhat la cv=%f",cv);
			printf("dt=",dt);
		}
	if (chon==4) 
		{
			float r;
			const float pi=3.14;
			printf("nhap vao r");
			scanf("%f",&r);
			cv=2*pi*r;
			dt=pi*r*r;
			printf("cv cua hinh tron la cv=%f",cv);
			printf ("dt=%f",dt);
		}
	getch();
}	
