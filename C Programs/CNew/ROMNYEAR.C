		// CHANGING YEAR INTO ROMAN EQUIVALENT
			// only a 4 digited year shud be inputted

  #include<stdio.h>
  #include<conio.h>


  int main(void)
  {
   int year, chngroman(int);
   clrscr();

   printf("\n \n \n \t \t Enter a year: ");
   scanf("%d",&year);

   printf("\n \n \t \t Roman equivalent of year %d is  ",year);

   chngroman(year);

   getch();
   return 0;
  }

 int chngroman(int year)
  {
     int place[4],j,i=0;
     int Iplace(int);
     int Xplace(int);
     int Cplace(int);
     int Mplace(int);

	     while(year>0)
	     {
	       place[i++]=year%10;
	       year/=10;
	     }
     Mplace(place[--i]);//for thousands place

     if(place[--i]>=5) //for hundreds place
       {  printf("D");  // for five hundreds
	  Cplace(place[i]-5); }

     else if(place[i]>0)
	Cplace(place[i]);

      if(place[--i]==9)
	 printf("XC");

      else if(place[i]>=5)
       { printf("L");      // for any fifty
	 Xplace(place[i]-5);  }

      else if(place[i]>0)
	 Xplace(place[i]);

     if(place[--i]==9)
	 printf("IX");  // for any nine

     else if(place[i]>=5)
      {  printf("V");   // for any five
	 Iplace(place[i]-5);    }

     else if(place[i]==4)
	 printf("IV");   // for any four

      else if (place[i]>0)
	 Iplace(place[i]);

	return 0;
   }     // end of function for chngroman

  int Iplace(int num)    // for ones
   {
     int i;

     for(i=0;i<num;i++)
	printf("I");

     return 0;
   }

  int Xplace(int num)   // for tens
   {
     int i;

     for(i=0;i<num;i++)
	 printf("X");

    return 0;
   }

  int Cplace(int num)  // for hundreds
    {
     int i;

     for(i=0;i<num;i++)
	printf("C");

     return 0;
    }

  int Mplace(int num)  // for thousands
   {
      int i;

    for(i=0;i<num;i++)
	printf("M");

     return 0;
   }