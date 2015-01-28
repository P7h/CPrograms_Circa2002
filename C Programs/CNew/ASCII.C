
	// PROGRAM FOR PRINTING ALL THE ASCII CHARACTERS


	#include<stdio.h>
	#include<conio.h>

  int main(void)
    {
     int i,k=0;
     clrscr();

     for(i=1;i<=255;i++)
     {  printf("\t %3d - %c\n",i,i);
	k++;
	if(k==25)
	{ getch(); k=0;}
     }

     getch();
     return 0;
    }