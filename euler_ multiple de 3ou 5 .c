#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
  int somme=0;
      int i; 
 int main( ) {
	 
	for(i=1;i<1000;i++){
		if(i%3==0||i%5==0){
			
			printf("%d\n",i);
			
		somme+=i;
	}	 
	

   }
 	printf("la somme des elements obtenus est:%d\n",somme);
	return 0;
     }
