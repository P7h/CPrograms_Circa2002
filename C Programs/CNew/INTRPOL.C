
		// PROGRAM FOR INTERPOLATION USING LAGRANGE'S FORMULA

#include<stdio.h>
#include<conio.h>

float ax[100],ay[100];
float dr,nr,y,x;
int i,j,n;
int interpol(float);

int main(void)
{
clrscr();

printf("\n Enter number of co-ordinates:-  ");
scanf("%d",&n);
printf("\n Enter X & Y values:-  \n");

	for(i=0;i<n;i++)
	{
	printf("\n \t X%d = ",i+1);
	scanf("%f",&ax[i]);
	printf(" \t \t Y%d = ",i+1);
	scanf("%f",&ay[i]);
	}
   printf("\n \n Enter the X value at which Y is to be found:- ");
   scanf("%f",&x);

// for(x=6.0;x<=10.0;x+=.25)
   interpol(x);
getch();
return 0;
}

int interpol(float x)
{
  y=0.0;
	for(i=0;i<n;i++)
	{
	nr=1.0;
	dr=1.0;
	  for(j=0;j<n;j++)
	    {
		if(j!=i)
		{  nr=nr*(x-ax[j]);
		   dr=dr*(ax[i]-ax[j]);   }
	    }
	  y=y+(nr/dr)*ay[i];
	}
  printf("\n \n \t \t at X = %.3f,\t Y = %.3f",x,y);
  return 0;

}