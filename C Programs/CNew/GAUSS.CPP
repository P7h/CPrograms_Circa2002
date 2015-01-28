
		// PROGRAM FOR GAUSSIAN RANDOM NUMBERS

#include <math.h>
#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

   double gaussrand()
   {
	static double V1, V2, S;
	static int phase = 0;
	double X;

	if(phase == 0) {
	do {
	double U1 = (double)srand(100) / RAND_MAX;
	double U2 = (double)srand(100) / RAND_MAX;
	V1 = 2 * U1 - 1;
	V2 = 2 * U2 - 1;
	S = V1 * V1 + V2 * V2;
	   } while(S >= 1 || S == 0);
		X = V1 * sqrt(-2 * log(S) / S);
	}
	else
	     X = V2 * sqrt(-2 * log(S) / S);

	phase = 1 - phase;

	return X;
   }

  int main(void)
    {
	int i;
	clrscr();

	for(i=1;i<=240;i++)
	   printf("%+5.3lf\t",gaussrand());

	 getch();
	return 0;
     }

