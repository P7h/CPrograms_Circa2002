
		// PROGRAM FOR COUNTING THE ALPHABETS IN A STRING

#include<stdio.h>
#include<conio.h>

int main()
 {
  char name[30] ;
  int mycount(char *name);
  clrscr();

  printf("Enter a String: ");
/*  while((c=getchar())!='\n')
  name[i++]=c; */
  scanf("%s",name);
  fflush(stdin);

  printf("\n\n Hey, you entered: %s \n\n\n and in this string...",name);
  mycount(name);

  getch();
  return;
  }

	// FUNCTION FOR COUNTING ALPHABETS IN A STRING
	  int mycount(char *s)
	  {
	    int k = strlen(s), i ;
	    static int count[100];
	    char p[20];

		for(i=0; i<k; i++)
		  count[s[i]] = count[s[i]] + 1;

		  for(i=65;i<=122;i++)
		   { if(count[i] != 0)
			 printf("\n \t \t \t %c -- %d", i, count[i]); }

		 return 0;
	   }
