

	//  PROGRAM FOR REMOVING COMMENTS IN A "C" FILE

#include<stdio.h>
#include<conio.h>

 int main(int argc, char *argv[])
  {
	char ch1, ch2, source[30], target[30];
	FILE *fs, *ft;
	clrscr();

	if(argc != 3)
	  {  printf("\n \t Enter Source filename:  ");
	     scanf("%s", source);
	     printf("\n \t Enter Target filename:  ");
	     scanf("%s", target);
	     }

	else
	  {   strcpy(source, argv[1]);
	      strcpy(target, argv[2]);  }

	if ((fs=fopen(source,"r")) == NULL)
	  { printf("\n Cannot open source file....Press any key ");
	    getch();
	    return 0;  }

	if ((ft=fopen(target,"r")) == NULL)
	  { printf("\n Cannot open target file....Press any key ");
	    getch();
	    fclose(fs);
	    return 0;  }

  while((ch1=getc(fs))!=EOF)
    {
       if(ch1=='/')
	{   if((ch2=getc(fs))=='*')
	     {  while(1)
		{   if((ch1=getc(fs)) == '*')
		    {  if((ch1=getc(fs))=='/')
			  break;
		    }
		}
	     }
	    else
	     { putc(ch1,ft);
	       putc(ch2,ft);
	     }
	 }
       else
	 putc(ch1,ft);
    }

    printf("\n \n Done!! Pres any key...");
    getch();
    fclose(fs);
    fclose(ft);
    return 0;
  }