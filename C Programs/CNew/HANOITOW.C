
		//   PROGRAM FOR HANOI OF TOWERS

#include<stdio.h>
#include<conio.h>

int main(void)
{
   int n = 4;
   clrscr();

   move(n, 'A', 'B', 'C');
   getch();
   return 0;
}

int move(int n, char a, char b, char c)
{

   if(n == 1)
     printf("\n \t Move from %c to %c", a, c);

   else
   {
     move(n-1,a, c, b);
     move(1, a,' ' , c);
     move(n-1, b, a, c);
   }
    return 0;
}

