
		//  PROGRAM FOR MANIPULATION OF STRINGS
   // LENGTH, COPYing, CONCATENATing, COMPARing, REVERSing of strings
   // checking for PALINDROME, COUNTING alphabets


	#include<stdio.h>
	#include<conio.h>

	int main(void)
	  {

	   int length, diff;
	   char source[20]="", target[20]="" ;
	   char concat[20]="" , compar[20]="" ;
	   int mystrcpy(char *t, char *s), mystrcat(char *t, char *s) ;
	   int mystrcmp(char *t, char *s), mystrrev(char *t, char *s) ;
	   int mypaldrm(char *t, char *s), mystrlen(char *s), mycount(char *s) ;
	   clrscr();

	   printf("\n                 Enter any String : ");
	   scanf("%s", source);

	   printf("\n Enter a string for CONCATENATing : ");
	   scanf("%s",concat);

	   printf("\n     Enter a string for COMPARing : ");
	   scanf("%s",compar);

	   clrscr();

	   length = mystrlen(source);
	   printf("\n \t             LENGTH of \"%s\"\n\t\t\t\t\t   %4d  \n", source, length);

	   mystrcpy(target, source);
	   printf("\n \t  COPYing \"%s\" into another\n\t\t\t\t\t   \"%s\"  \n", source, target);

	   printf("\n \t  CONCATENATing \"%s\" & \"%s\"\n\t\t\t\t\t  ",  source, concat);
	   mystrcat(concat, source);
	   printf("\"%s\"  \n", concat);

	   getch();
	   clrscr();

	   diff = mystrcmp(compar, source);
	   printf("\n \t   COMPARing \"%s\" and \"%s\"\n\t\t\t\t\t  %4d  \n", compar, source, diff);

	   mystrrev(target, source);
	   printf("\n \t             REVERSing \"%s\"\n\t\t\t\t\t   \"%s\"  \n", source, target);

	   length = mypaldrm(target,source);
	   if (length == 0)
	   printf("\n \t             \"%s\" is a PALINDROME \n", source);
	   else
	   printf("\n \t             \"%s\" is NOT a PALINDROME \n", source);

	   printf("\n \t      COUNTING OF ALPHABETS in \"%s\" ", source);
	   mycount(source);


	   getch();
	   return 0;
	}


			// FUNCTION FOR FINDING STRING LENGTH
	int mystrlen(char *source)
	   {
		 int length = 0;
		 while(*source != '\0')
			{  length++;
			   source++;   }

		 return length;
	   }


			// FUNCTION FOR COPYING ONE STRING INTO ANOTHER
	int mystrcpy(char *target, char *source)
	   {
		 while(*source != '\0')
			{  *target = *source;
			   source++;   target++;   }
			*target = '\0';
		   return 0;
	   }


			// FUNCTION FOR CONCATENATING 2 STRINGS
	int mystrcat(char *target, char *source)
	   {
		 target += mystrlen(target);
		 while(1)
			{ *target = *source;
			  source++;  target++;
			  if(*source=='\0')
			   break;
			}
			*target = '\0';
		return 0;
	    }



			// FUNCTION FOR COMPARING 2 STRINGS
	   int mystrcmp(char *target, char *source)
		  {
			while(1)
			  {  if((*target != *source) || ((*target == '\0') || (*source=='\0')))
				  return (*target - *source);
				 else
				  { source++; target++;  }  }
		   }


			// FUNCTION FOR REVERSING A STRING
	   int mystrrev(char *target, char *source)
		  {
			 int k = mystrlen(source);
			 target += k-1;
			 while(1)
			   {  *target = *source;
				  ++source;
				  if(*source == '\0')
					 break;
				  target--;  }

				  *(target + k) = '\0';

			   return 0;
		  }


			// FUNCTION FOR CHECKING IF A STRING IS A PALINDROME 
	   int mypaldrm(char *target, char *source)
		  {
			 int k = 0;

			 while(1)
			   {  if(*target != *source)
				  {   k++; break;  }
				  ++source;
				  if(*source == '\0'|| *target == '\0')
					 break;
				  target++;  }

			  return k;
		   }

		// FUNCTION FOR COUNTING THE ALPHABETS IN THE STRING
	  int mycount(char *source)
	  {
	    int k = mystrlen(source), i ;
	    static int count[100];

		for(i=0; i<k; i++)
		 { count[source[i]] = count[source[i]] + 1;   }

		for(i=65; i<=122; i++)
		 { if(count[i] != 0)
		    printf("\n \t \t \t \t %c -- %d", i, count[i]); }

		 return 0;
	     }

/*  int mycount(char *source) // LOGIC -II
  {
  int i=0,j,k=0,l=1,m=mystrlen(source);
  char target[30];
    *target=*source;

      for(i=1;i<m;i++)
	{
	 for(j=0;j<i;j++)
	      {
	     if(source[j]==source[i])
	     l=0;
	       }
	  if(l==1)
	  target[++k] = source[i];
	   l=1;
	}

      for(i=0;i<=k;i++)
	{  l=0;
	for(j=0;j<m;j++)
	   if(target[i] == source[j])
	     l++;
      printf("\n\t\t\t%c occurred %d times",target[i],l);
	 }

   return 0;
   }  */