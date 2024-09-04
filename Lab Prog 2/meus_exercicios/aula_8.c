#include <stdio.h>
#include <stdlib.h>


int main() {
	int peso = 0;
	
	if (peso >=0 && peso < 1000){
        printf("Categoria A \n");
	}else{
	      if(peso >= 1000 && peso < 2000){
	         	printf ("Categoria B \n");
	      }else{
		        if(peso >= 2000 && peso < 5000){
	             	printf ("Categoria C \n");
	            }else{
		         	  printf("Categoria D \n");
	             	}
	            
	        }   
        
    }
	
	return 0;
}
