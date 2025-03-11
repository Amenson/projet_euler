#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int palindrome(int n){
    int inverse=0;
    int original=n;
    do{
    	
    	inverse=(inverse*10)+(n%10);
    	n=n/10;
    		}while(n!=0);
    	
    	// retour pour comparer 
 return original==inverse;
 }
 

int main( ) {
	int max=0,i,j;
	 int produit=0;
     int i_max,j_max;
	for(i=999;i>100;i--){
			
	for(j=999;j>100;j--){
		
			produit=i*j;
	if(palindrome(produit)&&produit>max){
		max=produit;
		i_max=i;
		j_max=j;
		
         }
	   }	
	 }
	
	 printf("le plus grand palindrome forme partir de deux nombre est :%lld\n",max);

	return 0;
}
