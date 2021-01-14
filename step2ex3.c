#include <stdio.h>
#include <stdlib.h> 
#include <math.h>

int main ()
{
	int a , b , c  ;
	float  D , x , x1 , x2 ;
	
        	   printf("Donnez a :");
	             scanf("%d",&a);
	     	   printf("Donnez b :");
	             scanf("%d",&b);
		       printf("Donnez c :");
	             scanf("%d",&c);
	             
	             	D=pow(b,2)-4*a*c;
         	
	    if (a==0 && b==0 && c==0){
	    	
 		printf("Tout réel est une solution de cette équation.\n");
 		
	    }
	    else if(a==0 && b==0){
	    	
	   	printf("Cette équation ne possède pas de solutions.\n");
	   	
		}
		else if (a==0){
			
			printf("cette equation posséde une solution :");
			printf("x = %.4f\n",(double)c/b);
			
		}
         else if(D<0){
		 	
            printf("l'equation n'a pas de solution");
				
			 }	
		 else if(D==0){	
		 
		    printf("l'equation accepte une solution x1=%f",(double)b/2*a);
		    
			 } 
	     else {
	     	x1=(-b-sqrt(D))/2*a;
	     	x2=(-b+sqrt(D))/2*a;
	     	
			 	printf("L'equation accepte deux solutions x1 = %f \n",x1);
			 	printf("L'equation accepte deux solutions x2 = %f \n" ,x2);	    
		    }
}
