#include <stdio.h>
#include <stdlib.h> 

#define Max(a,b) (a>b)

#define vrai 1
#define faux 0

void main ()
    {
    	
    	
     int num1 , num2 ;
    		
    		printf("donnez num1 : ");
    		scanf("%d",&num1);
    		
    		printf("donnez num2 : ");
    		scanf("%d",&num2);
    		
     if ( Max(num1,num2) == vrai)
     {
     	printf("%d est supérieur A %d",num1,num2);
	 }
	 else {
	 	printf("%d est inférieur A %d",num1,num2);
	 }
    		
    	
	}
