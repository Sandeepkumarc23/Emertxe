#include<stdio.h>

/*
Name : Sandeep Kumar c
Date : 29/12/21
description : Suppose, in a week let us assume first day is 'Sunday', then second day will be 'Monday' and so on. If first day is 'Monday' then the second day will be 'Tuesday' and so on.
input : Enter the value of 'n' : 9
Choose First Day :
1. Sunday
2. Monday
3. Tuesday
4. Wednesday
5. Thursday
6. Friday
7. Saturday
Enter the option to set the first day : 2
output : The day is Tuesday
*/

int main()
{
	int n, first_day;  //n is the var to store the Nth value of which the day will be figured out in a year. First_day is to choose any day as first day.
	printf("Enter the value of 'n' : ");
	scanf("%d", &n);
	if ( n > 0 && n <= 365 )  //n value has to be between 1 to 365, the number of days.
	{
		printf("Choose First Day : \n");
	    printf("1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\nEnter the option to set the first day : ");
	    scanf("%d", &first_day);
		if ( first_day > 0 && first_day <= 7 )
		{
			int nth_day = ( first_day + n - 1) % 7 ;   //logic to find thenth day in a year.
		    nth_day = nth_day == 0 ? 7 : nth_day;  //Here as case is starting from 1, first day becomes 0 if it gets 7 or 14 value, so only for 0,7th day has to be redirected so this statement.
            switch ( nth_day )
	        {
			    case 1:
				   printf("The day is Sunday\n");
			       break;
		        case 2:
			       printf("The day is Monday\n");
		    	   break;
	    	    case 3:
			       printf("The day is Tuesday\n");
		    	   break;
	    	    case 4:
		           printf("The day is Wednesday\n");
	    		   break;
	    	    case 5:
		    	   printf("The day is Thursday\n");
		    	   break;
		        case 6:
			       printf("The day is Friday\n");
			       break;
		           case 7:
		    	   printf("The day is Saturday\n");
		     }
		}
		else
		{
			    printf("Error: Invalid input, first day should be > 0 and <= 7\n");
		}
	}
	else
	{
		printf("Error: Invalid Input, n value should be > 0 and <= 365\n");
	}
	return 0;
}
