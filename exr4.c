#include <stdio.h>
#include <stdlib.h> 
int main (){
	
	   float moy   ,n ;
	   int i=0;
	   float avrg ;
	   

	   while(n!=-1)
	   {
	   		   printf("Donnez n : ");
	           scanf("%f",&n);
	           if (n == -1){
	           	
	           	break;
			   }
	   	         moy += n;
	   	         i++;
	   	        
	   }
	        avrg = moy/i;   
	    	printf("la moyenne est %f",avrg);

	    	
}
