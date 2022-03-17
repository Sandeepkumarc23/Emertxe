#include<stdio.h>
int main()
{
	char ch;char a;
	do
	{
	printf("Enter a character: ");
	scanf("%c",&ch);
		switch (ch)
		{
			case '0' ... '9':    /* ascii value of digits from 0 to 9 ranges with 48 to 57 decimal value */
		    printf("Entered character is a digit\n");
	        break;
		    case 'A' ... 'Z':  /* ascii value of upper case characters ranges from 65 to 90 decimal value */
		    printf("Entered character is in upper case\n");
		    break;
		    case 'a' ... 'z':  /* ascii value of lower case characters ranges from 97 to 122 decimal value */
		    printf("Entered character is in lower case\n");
	        break;
		    default:   /*If the entered character is none of teh above then print the default case statement */
		    printf("Entered character is neither a digit nor upper case nor lower case\n");
	    }
	    printf("Enter y to continue or press any key to exit: \n");
		getchar();
	    scanf("%c",&a);
		getchar();
	} while(a =='y');
    return 0;
}
