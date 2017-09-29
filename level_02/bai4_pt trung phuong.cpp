#include<stdio.h>
#include<math.h>
#include<conio.h>
main()
{
	float a,b,c,t1,t2,denta;
	printf("nhap vao a,b,c, ");
	scanf("%f%f%f",&a,&b,&c);
	denta= b*b-4*a*c;
	if (a!=0)
		if(denta>=0)
			if (denta=0)
				{
					t1=-b/(2*a);
					if (t1>=0)printf("pt co nghiem la  x=+%f,x=-%f",sqrt(t1),sqrt(t1));
					else printf("pt vo nghiem");
				}
			else
				{
					t1=(-b+sqrt(denta))/(2*a);
					t2=(-b-sqrt(denta))/(2*a);
					if (t1>=0)printf("pt co nghiem x=-%f ,x=+%f",sqrt(t1),sqrt(t1));
					else printf("pt vo nghiem");
					if (t2>=0)printf("pt co nghiem x=-%f ,x=+%f",sqrt(t2),sqrt(t2));
					else printf("pt vo nghiem");
				}
		else printf("pt vo nghiem");
	else printf("nghiem cua pt la x=-%f, x=+%f",sqrt(-c/b),sqrt(-c/b));
	getch();
}
					 
