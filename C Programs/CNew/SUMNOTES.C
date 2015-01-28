
	//   PROGRAM FOR FINDING SMALLEST NUMBER OF NOTES REQD FOR MAKING

#include<stdio.h>
#include<conio.h>

int main(void)
{
   int sum, notes = 0;
   int denom(int *, int *, int);
   clrscr();

   printf("\n \t Enter the sum of rupees: ");
   scanf("%d", &sum);

   denom(&sum, &notes, 100);
   denom(&sum, &notes, 50);
   denom(&sum, &notes, 10);
   denom(&sum, &notes, 5);
   denom(&sum, &notes, 2);

   notes += sum;
   printf("\n \t Smallest number of notes = %d", notes);

   getch();
   return 0;
}

int denom(int *sum, int *notes, int c)
  {
   *notes += ( (*sum)/c);
   *sum %= c;
   return 0;
  }