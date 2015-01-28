
	#include<stdio.h>
	#include<conio.h>
	#include<alloc.h>

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

	  int num1[20], num2[20], n, i;
	  unsigned gcd(int a, int b);
	  int call(int num1[20], int num2[20], int n);
	  clrscr();

	  printf("\n \t For how many numbers, do u want to find HCF r GCD: ");
	  scanf("%d", &n);

	  printf("\n \t Enter the numbers \n");
	  for(i=0;i<n;i++)
	  {  printf("\t %d. \t",i+1);
	     scanf("%d", &num1[i]);   }
	  clrscr();


	  printf("\n\n\n\n\n\n \t \t Entered numbers: \n \t ");
	  for(i=0;i<n;i++)
	  printf("\t %d", num1[i]);

	  call(num2, num1, n);
	  if(n/2!=0)
	  call(num1, num2, n/2);
	  if(n/4!=0)
	  call(num2, num1, n/4);
	  if(n/8!=0)
	  call(num1, num2, n/8);
	  if(n/16!=0)
	  call(num2, num1, n/16);

	  printf("\n\n \t \t \t GCD of the above numbers %d ", num2[0]);
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
	}     


	int call(int num2[20], int num1[20], int n)
	{

	  int i, j=0;

	  for(i=0; i<n; i+=2)
	  num2[j++] = gcd(num1[i], num1[i+1]);

	  return 0;
	}
