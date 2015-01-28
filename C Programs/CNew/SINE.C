
			//  PROGRAM FOR SINE SERIES

	#include<stdio.h>
	#include<conio.h>
	#include<math.h>

	int main(void)
	 {
	   float angle,si[100],cose;
	   long double factorial(int),sine;
	   int i=1,j=-1;
	   clrscr();

	   printf("\n enter the angle in degrees: ");
	   scanf("%f",&angle);
	   angle *= (0.01745329);

	   while(i<=30)//(abs(si[j] - si[j-1])<=0.0005f)
	     {
		   j++;
		   si[j] = pow(-1.0,j) * pow(angle,i)/factorial(i);
		   sine += si[j];
		   i+=2;
	     }

	   cose = sqrt(1.0-sine*sine);
	   angle /= 0.01745329;
	   printf("\n \t  after %d terms,SIN(%.3f) =  %Lf  && ",j,angle,sine);
	   printf("\n \t\t\t COS(%.3f) =  %f",angle,cose);
	   getch();
	   return 0;

	 }
		// PROGRAM FOR FINDING FACTORIAL OF A NUMBER
	   long double factorial(int x)
	 {
/*		if(x==1)
		   return 1;
		else
		  return (x*factorial(x-1));  */

/*		static long double fact=1;
		fact *= x ;
		return fact;      */

 // following code is for calculating factorial for this program only
		static long double fact=1;
		if (x==1)
		fact *= x;
		else fact *= x * (x-1);
		return fact;

	  }



/*		//  My PROGRAM FOR GENERATING SINE & COSINE SERIES


	#include<stdio.h>
	#include<conio.h>
	#include<math.h>


	int main(void)
	 {
	   int i=1,j=-1;
	   float angle, si[100], cose;
	   long double factorial(int), sine;
	   clrscr();

	   printf("\n Enter angle in degrees: ");
	   scanf("%f",&angle);
	   angle *= 0.01745329;

	   while(i<=10)//(abs(si[j] - si[j-1])<=0.0005f)
	     {
		   j++;
		   si[j] = pow(-1.0,j) * pow(angle,i)/factorial(i);
		   sine += si[j];
		   i+=2;
	     }

	   cose = sqrt(1.0 - sine*sine);
	   angle /= 0.01745329;
	   printf("\n \t  after %d terms,SIN(%.3f) =  %.10Lf",j,angle,sine);
	   printf("\n \t  and COS(%.3f) = %.10f",angle,cose);
	   getch();
	   return 0;

	 }


		// PROGRAM FOR FINDING FACTORIAL OF A NUMBER
	   long double factorial(int x)
	 {
		if(x==1)
		   return 1;
		else
		  return (x*factorial(x-1));

		static long double fact=1;
		fact *= x ;
		return fact;

 // following code is for calculating factorial for this program only
		static long double fact=1;
		if (x==1)
		fact *= x;
		else fact *= x * (x-1);
		return fact;

	  }


		 FUNCTION FOR CALCULATING power(base, exponent)

 long double pow(float base, float exponent)
	{
	  int i;
	  long double myexp(float), answer =1;

  if (exponent == (int) exponent)
    {
	     if(exponent == 0)
	       return 1;

	     else
	     {  for (i=1; i<=myabs((int)exponent); i++)
		   answer *= base;
		if (exponent < 0)
		 answer = 1.0/answer;
	     }
    }   // end of if

 else
   {
	     if(base <= 0)
	     { printf("\n \n \n \n SORRY!!!- cannot raise a non-positive ");
	       printf("number to a floating-point power");
	       getch();
	       exit (0);}
	     else
	       answer = myexp(exponent * log(base));
   }    // end of else

     return (answer);
      }  //end of function


	// FUNCTION FOR FINDING ABSOLUTE VALUE OF AN INTEGER

      int myabs(int num)
      {
	return ((num<0 ? -num : num));
      }

       //  FUNCTION FOR EXPONENTIAL FUNCTION

      long double myexp(float num)
      {
	 int i= 1;
	 long double answer = 1, fact = 1;
	 long double pow(float, float);

	   while(i<=30)
	     {
		   fact *= i;
		   answer += pow(num,i)/fact;   // calling pow() function again
		   i++;
	     }
	     return (answer);
       }     */