
		//  PROGRAM FOR REVERSING A FILE OF STRINGS

#include<stdio.h>
#include<conio.h>

 int main(void)
  {
	int rev(void);
	clrscr();

	printf("\n \t Plz enter your text here to change case and finally: ");
	printf("\n \t \t press CTRL+Z to stop entering \n \n");

	rev();

	getch();
	return 0;
  }


 int rev(void)
  {
	char ch;

	if( (ch=getchar())!= EOF )
		  rev();

	putchar(ch);
	return 0;
   }