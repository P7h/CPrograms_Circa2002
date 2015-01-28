

	//  PROGRAM FOR CHANGING A FLOATING NUMBER TO BINARY FORMAT


	#include<math.h>
	#include<stdio.h>
	#include<conio.h>

   int main(void)
	 {
	int intb[40], floatb[40], nu, i=0,j=0;
	float num, fl, sum=0;
	clrscr();

	printf("\n Enter any number for changing into BINARY: ");
	scanf("%f",&num);
	nu = (int)num;
	fl = num - nu;

	printf("\n\n\t      Entered number is %f, \n\t whose INTEGRAL part is %d and ",num,(int)num);
	printf("\n\t     FRACTIONAL part is %f",fl);
	printf("\n\n\t  ");

	while (nu>0)
	   {  intb[i++] = nu%2;
		  nu /= 2;
	   }

	 for (i--;i>=0;i--)
	   {  sum += intb[i] * pow(2,i);
	      printf("%d",intb[i]);
	   }

//    printf("\n\n\tThe check for integral part got out to be %.0f", sum);

	 printf("\n\n\t  ");
	 i=j=0;
	 while (fl!=1.0f)
	   {  fl *= 2;
		if (fl < 1)
		   floatb[j++] = 0;
		else if (fl > 1)
		   { fl -= 1; floatb[j++] = 1; }
	   }

	 floatb[j] = 1;
	 sum = 0;
	 for (i=0;i<=j;i++)
	   {  sum += floatb[i] * pow(2,-(i+1));
		  printf("%d",floatb[i]);
	   }

//	printf("\n\n\tThe check for fractional part got out to be %f", sum);

	 getch();
	 return 0;
	 }
