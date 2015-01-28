

					//   PROGRAM FOR FINDING DAY OF ANY ENTERED DATE

#include<stdio.h>
#include<conio.h>


  /*	int main(void)		//  logic from www.faqs.org/c-faqs
	{
	int dd, mm, yy, i;
	int t[] = {0,3,2,5,0,3,5,1,4,6,2,4};

	char week[][10] = { "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY" };
	clrscr();

	printf("\n \t Enter date-month-year in the format of dd-mm-yyyy:  ");
	scanf("%d%*[/-]%d%*[/-]%d",&dd,&mm,&yy);

	clrscr();
	printf("\n \n \t \t The date %02d - %02d - %04d falls on ", dd,mm,yy);

	yy -= mm<3;
	i = (yy + yy/4 - yy/100 + yy/400 + t[mm-1] + dd) % 7;

	printf(" \"%s\". ",week[i]);
    printf("\n \n \t \t \t Have a good day. ");
	getch();
	return 0;

	}   */


/*	int main(void)    //  logic from MULLISH COOPER, "The Spirit of C"
	{

	int  dd, mm, yy, i, total_days = 0 ;
	int t[] = {0,31,28,31,30,31,30,31,31,30,31,30};

	char week[][10] = {  "SATURDAY", "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY" };
	clrscr();

	printf("\n \t Enter date-month-year in the format of dd-mm-yyyy:  ");
	scanf("%d%*[/-]%d%*[/-]%d",&dd,&mm,&yy);

	clrscr();
	printf("\n \n \t \t The date %02d - %02d - %04d falls on ", dd,mm,yy);

	 if ((yy % 4 == 0) && ((yy % 100 != 0) || (yy % 400 == 0)) && (mm>2))
			 dd += 1;

	 for (i=0; i<mm; i++)
		 total_days += t[i];
	 
	i = (yy + (yy-1)/4 - (yy-1)/100 + (yy-1)/400 + total_days + dd) % 7;

	printf(" \"%s\". ", week[i]);
	printf("\n \n \t \t \t Have a good day. ");
	getch();
	return 0;

	}  */



		//  logic from R.S. AGGARWAL QUANT APTITUDE
// 400 years hv 0 odd days, 100 years hv 5 odd days, basing on this logic, program is developed.
// for an ordinary year, only 1 odd day, whereas for a leap year, 2 odd days.
	int main(void)
	{

	int  dd, mm, yy, i, total_days = 0 ;
	int t[] = {0,31,28,31,30,31,30,31,31,30,31,30};

	char week[][10] = {  "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY" };
	clrscr();

	printf("\n \t Enter date-month-year in the format of dd-mm-yyyy:  ");
	scanf("%d%*[/-]%d%*[/-]%d",&dd,&mm,&yy);

	clrscr();
	printf("\n \n \t \t The date %02d - %02d - %04d falls on ", dd,mm,yy);

	 if ((yy % 4 == 0) && ((yy % 100 != 0) || (yy % 400 == 0)) && (mm>2))
			 total_days += 1;

	yy = (yy-1)%400;
	total_days += (yy/100) * 5;
	yy  = yy%100;

	total_days += yy/4 * 2;
	total_days += yy - yy/4;

	for (i=0; i<mm; i++)
	 total_days +=  t[i];

	total_days += dd;
	i = total_days % 7;

	printf(" \"%s\". ", week[i]);
	printf("\n \n \t \t \t Have a good day. ");
	getch();
	return 0;

	}

		//   PROGRAM FOR CHECKING WHETHER AN ENTERED YEAR IS A LEAP YEAR or NOT
// for a leap year, the year shud b divisible by 4, and also it shud b either divisible by 400
// r shud not be divisible by 100. for example, 2000 is a LY, whereas 1900 is not.

/*	int main(void)
	{
	   int yy;
	   clrscr();

	   printf("\n Enter any year for testing, whether it is a LEAP year or not: ");
	   scanf("%d",&yy);

	   if ((yy % 4 == 0) && ((yy % 100 != 0) || (yy % 400 == 0)))
			printf("\n \t \t %4d is a LEAP year");
	   else
			printf("\n \t \t %4d is not a LEAP year");
  
	   getch();
	   return 0;
	}     */