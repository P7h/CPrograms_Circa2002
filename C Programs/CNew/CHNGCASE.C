

  // PROGRAM FOR CHANGING THE CASE OF AN ENTIRE FILE FROM ONE TO OTHER

	#include<stdio.h>
	#include<conio.h>

int main(void)
{
   char *str, *infile, *outfile;
   int chngcase(char ch, char *str), choice, ch;
   FILE *f;
   clrscr();

   printf("\n \t Do you want to input from: ");
   printf("\n \t \t 1. Key board \n \t \t 2. a File \n");
   printf("\n \t \t Please enter your choice (1 or 2) ¯¯ ");
   scanf("%d",&choice);

   clrscr();
   printf("\n\t\t");

   switch(choice)
   {
   case 1:
   {
   printf("\n \t \t your choice is from KEY BOARD: \n");
   printf("\n \t please enter your text here to change case and finally: ");
   printf("\n \t \t press CTRL+Z to stop entering \n \n");
   fflush(stdin);

      while((ch=fgetchar()) != EOF)
	     chngcase(ch, str);
      break;
    }
   case 2:
   {
   printf("\n \t \t your choice is from FILES: \n");
   printf("\n \t enter a input file name: ");
   scanf(" %[^\n]",infile); // in DOS, type e:/turboc/.....

   f  = fopen(infile,"r");
   printf("\n\n");

	 if(f==NULL)
	   { printf("\t \t SORRY!!!, input file not found");
	     printf(" \n \t \t     && exiting the program");
	    printf("\n \n \n \t \t \t Press any key to Exit");
	     getch();
	     return 0; }
	else
	   while((ch=fgetc(f)) != EOF)
	     chngcase(ch, str);

	   fclose(f);
	   break;
    }
    default:
	   printf("\n \t \t Invalid Choice, exiting the program");
	   printf("\n \n \n \t \t \t Press any key to Exit");
	   getch();
	   return 0;
    }

   clrscr();

   printf("\n \t Do you want write output into: ");
   printf("\n \t \t 1. VDU \n \t \t 2. A File \n");
   printf("\n \t \t Please enter your choice (1 or 2) ¯¯ ");
   scanf("%d", &choice);
   clrscr();

   printf("\n\t\t");
   if (choice==2)
   {
   printf("\n enter output file name: ");
   scanf("%s",outfile);
   f = fopen(outfile,"w");
   printf("\n \n \n \t \t ¯¯ DONE ®®");
   fprintf(f,"\n \t Your text after changing everything from one case to other is: ");
   fprintf(f,"\n\n\n%s", str);
   fclose(f);
   }
   else
   {
   printf("\n \t Your text after changing everything from one case to other is: ");
   printf("\n\n\n%s", str);
   }

   getch();
   return 0;
}

		// FUNCTION FOR CHANGING THE CASE FROM ONE TO OTHER
int chngcase(char ch, char *str)
    {
    static int i=0;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
	   (ch>='a' && ch<='z')? str[i]='A'+ch-'a':(str[i]='a'+ch-'A');

/*  else if (ch=='\n')
	   str[i]='\n';  */

   else
	   str[i]=ch;
    i++;
   return 0;
}

