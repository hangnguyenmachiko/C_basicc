#include<stdio.h>
#include<math.h>
#include<conio.h>
main()
{
		float a,b,c,x1,x2,denta;
		printf("nhap vao a,b,c ");
		scanf("%f%f%f",&a,&b,&c);
		denta= b*b-4*a*c;
		if (a!=0)
			if (denta>=0)
				if (denta >0)
					{
						x1=(-b+sqrt(denta))/(2*a);
						x2=(-b-sqrt(denta))/(2*a);
						printf("pt co 2 nghiem pb x1=%f /n  x2=",x1,x2);
					}
				else 
					{
						x1=-b/(2*a);
						printf("pt co nghiem kep x1=x2=%f",x1);
					}
			else printf(" pt vo nghiem");
		else printf("pt co nghiem x=%f",-c/b);
		getch();
}
