#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( ) {
	int a,b,c,produit;
	for(a=1;a<1000;a++){
		for(b=a;b<1000-a;b++){
			c=1000-a-b;
			if(c>0 && a*a+b*b==c*c){
				produit =a*b*c;
	printf("le triplet de pythagorien: a=%d,b=%d,c=%d)\n",a,b,c);
	
              printf("Verification : %d + %d + %d = %d\n", a, b, c, a + b + c);
              
                printf("Pythagore : %d² + %d² = %d² -> %d + %d = %d\n", 
                       a, b, c, a * a, b * b, c * c);        
                       printf("le produit est:%d*%d*%d=%d\n",a,b,c,produit);
   } 
}  
}	
return 0;
}
		
