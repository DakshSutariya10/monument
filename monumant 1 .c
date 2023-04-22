#include<stdio.h>

main()

{
	char ch;
	
     printf("enter the value = ");
     scanf("%c",&ch);
     
     if(ch>='a' && ch<='z')
     {
	    printf("value is small alphabet");
     }
     else if(ch>='A' && ch<='Z')
     {
        printf("value is capital alphabet");
     }
     else if(ch>='0'  &&  ch<='999')
     
     {
     	printf("value is numerical");
	 }
	 else
	 {
	 	printf("value is special");
	 }
}
