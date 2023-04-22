#include<stdio.h>

main()

{
	char n;
	
	printf("press M for monday\n");
	printf("press T for tuesday\n");
	printf("press W for wednesday\n");
	printf("press t for thursday\n");
	printf("press F for friday\n");
	printf("press S for saturday\n");
	printf("press s for sunday\n");
	
	printf("enter your choice=");
	scanf("%c",&n);
	
	switch(n)
	{
		case 'M':
			
			      printf("Monday");
			      break;
			      
	    case 'T':
			      printf("tuesday");
			      break;
			      
		case 'W':
			      printf("wednesday");
			      break;
			      
		case 't':
			      printf("thursday");
			      break;
			      
		case 'F':
			      printf("friday");
			      break;
			      
		case 'S':
			      printf("saturday");
			      break;
			      
	   case 's':
			      printf("sunday");
			      break;
			      
			      default:
			      	       printf("plz enter youe proper choice!=");
			      	       
			      
	}
	
}
