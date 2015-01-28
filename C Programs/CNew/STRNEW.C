
		// PROGRAM FOR SOME OTHER STRING MANIPULATIONS

	#include<stdio.h>
	#include<conio.h>

/*	int main(void)
	  {

	   int i, a, n;
	   static char *s[20] = {"MalayalaM", "able was i ere i saw elba" };
	   char rev[30];
	   clrscr();

	   for(i=0; i<2; i++)
	   {   strcpy(rev,s[i]);
	       strrev(rev);
	       a=strcmp(s[i],rev);

	       if(a==0)
		 printf("%s\n", s[i]);
	   }
	     getch();
	     return 0;
	}     */

int main(void)
    {
      static char str1[]="somewhere over the rainbow";
      static char str2[]="over";
      clrscr();

      printf("\n \t \"%s\" is found at place %d in \"%s\" ",str2,xstrstr(str1,str2), str1);
      getch();
      return 0;
    }

    int xstrstr(char *s1, char *s2)
    {
    int i, a, len1 =strlen(s1), len2=strlen(s2);

    for(i=0;i<=(len1-1);i++)
      {
	a=strncmp((s1+i),s2,len2);
	if(a==0)
	   return (i+1);
      }

    return 0;
  }


