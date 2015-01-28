
	#include<stdio.h>
	#include<conio.h>
	#include<alloc.h>
	#include<math.h>

/*	int main(void)
	{		// PROGRAM FOR FINDING gcd OF TWO NUMBERS

	  int num1, num2;
	  unsigned gcd(int a, int b), GCD;
	  clrscr();

	  printf("\n \t \t Enter two numbers whose GCD is to be found: ");
	  scanf("%d%d", &num1, &num2);

	  GCD = gcd(num1, num2);
	  printf("\n \t \t \t GCD of two numbers %d & %d is %d", num1, num2, GCD);
	  if (GCD==1)
	  printf("\n \t \t \t the two numbers %d & %d are CO-PRIMES", num1, num2);
	  getch();
	  return 0;
	}


	unsigned gcd(int a, int b)
	{
	  if (b > a)
		 return gcd(b, a);

	  if (b == 0)
		 return a;
	  else
		 return gcd(b, a%b);
	}      */


		// PROGRAM FOR FINDING gcd OF MANY NUMBERS

	int main(void)
	{
	  static long unsigned num1[50], num2[50], n, i, j;
	  long unsigned gcd(long unsigned int a,long unsigned int b);
	  long unsigned int call(long unsigned int num1[20], long unsigned int num2[20], long unsigned int n), prod=1;
	  clrscr();

	  printf("\n \t For how many numbers, do u want to find HCF r GCD: ");
	  scanf("%lu", &n);

	  printf("\n \t Enter the numbers \n");
	  for(i=0;i<n;i++)
	  {  printf("\t %lu. \t",i+1);
	     scanf("%lu", &num1[i]);
	     prod *= num1[i];  }
	  clrscr();


	  printf("\n\n\n\n\n\n \t \t Entered numbers: \n \t ");
	  for(i=0;i<n;i++)
	  printf("\t %lu", num1[i]);

	  i=0;
	  do {
	  j = pow(2,i);
	  call(num2, num1, n/j);
	  call(num1,num2,n/j);
	  i++;
	  }while (n/j != 0);

	  printf("\n\n \t \t \t GCD of the above numbers is %lu ", num2[0]);
 //	  printf("\n\n \t \t \t LCM of the above numbers is %lu ", (long unsigned int)prod/num2[0]);

	  getch();
	  return 0;
	}


	long unsigned gcd(long unsigned int a, long unsigned int b)
	{
	  if (b > a)
		 return gcd(b, a);

	  if (b == 0)
		 return a;
	  else
		 return gcd(b, a%b);
	}


	long unsigned int call(long unsigned int nu2[20], long unsigned int nu1[20], long unsigned int n)
	{

	  int i, j=0;

	  for(i=0; i<n; i+=2)
	  {  nu2[j++] = gcd(nu1[i], nu1[i+1]);  }

	  return 0;
	}