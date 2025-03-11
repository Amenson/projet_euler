#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 // comùbinaison c(n,k)
 
   long long binomial( int n ,int k){
   	 if(k>n) return 0;
   	 if(k==0||k==n) return 1;
   	   
   	   if(k>n-k) k=n-k;
   	   
   	 long long result=1;
   	 int i;
   	 for( i=0;i<k;i++){
   	 	result*=(n-i);
   	 	result/=(i+1);
   	 	
		}
   	
   	return result;
   }


int main( ) {
	
	 int n=40;
	 int k=20;
	 
	 long long result;
	 
	result=binomial(n,k);
	
	printf("le nombre de routes possible :%lld\n",result);
	
	
	return 0;
}
