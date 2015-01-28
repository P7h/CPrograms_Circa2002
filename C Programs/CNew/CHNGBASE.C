
//   PROGRAM FOR CONVERTING A NUMBER FROM DECIMAL to BINARY, HEXA and OCTAL

#include<stdio.h>
#include<conio.h>

   int main(void)
	 {
	int base2[40], floatb[40], num, nu, i=0, j;
	clrscr();

	printf("\n Enter a number for converting: ");
	scanf("%d",&num);
	nu = num;
	clrscr();

	printf("\n\n\t      Entered number is %d ",num);
	printf("\n\n\t  ");

	while (nu>0)
	   {  base2[i++] = nu%2;
		  nu /= 2;
	   }

	 j = i--;
	 printf("\n \n \t \t    Converting %d into ", num);
	 printf("\n \n \t         \"BINARY\" (2) format: ");
	 for (; i>=0; i--)
	      printf("%d",base2[i]);

	 printf("\n \n \t          \"OCTAL\" (8) format:  ");
	 chngbase8(base2, j);

	 printf("\n \n \t   \"HEXADECIMAL\" (16) format:  ");
	 chngbase16(base2, j);

	 getch();
	 return 0;
	 }


	 // FUNCTION FOR converting binary into OCTAL
int chngbase8(int base2[40],int j)
{
	 int i, k=j%3, m=0;
	 int base8[10];

	 for(i=0; i<j-k; i+=3)
	     base8[m++] = base2[i] + base2[i+1]*2 + base2[i+2]*4;

	 if(k==1)
	   base8[m++] = base2[j-k];
	 else if(k==2)
	   base8[m++] = base2[j-k] + base2[j-k+1]*2;

	 for(--m;m>=0;m--)
	  printf("%d",base8[m]);

	return 0;
}


	// FUNCTION FOR converting binary into HEXADECIMAL
int chngbase16(int base2[40], int j)
{
	 int i, k=j%4, m=0;
	 int base16[10];

	 for(i=0; i<j-k; i+=4)
	  base16[m++] = base2[i] + base2[i+1]*2 + base2[i+2]*4 + base2[i+3]*8;

	 if (k==1)
	   base16[m++] = base2[j-k];
	 else if (k==2)
	   base16[m++] = base2[j-k] + base2[j-k+1]*2;
	 else if (k==3)
	   base16[m++] = base2[j-k] + base2[j-k+1]*2 + base2[j-k+2]*4;

	 for(--m;m>=0;m--)
	     {
	     switch(base16[m])
	       {
		case 10:
		       printf("A");
		       break;
		case 11:
		       printf("B");
		       break;
		case 12:
		       printf("C");
		       break;
		case 13:
		       printf("D");
		       break;
		case 14:
		       printf("E");
		       break;
		case 15:
		       printf("F");
		       break;
		default:
		       printf("%d",base16[m]);
		}
	   }

   return 0;
  }
