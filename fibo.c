 #include <stdio.h>
#include <stdlib.h>

   int fibonacci(int n){
   	int a=1,b=2;
   	int i,p,s=0;
   	//p=prochain
   	for(i=1;i<n;i++){
		   	}if(i%2==0){
		   		
   	            	if(i<=1){
   	            		
   		          	p=i;
   			
		   }else{
		   	
		   	p=a+b;
   		    a=b;
		   b=p;
		   
		  
		   	//	printf("%d",p);
		}
	s+=p; 
	    } 
     //	printf(" \n");
       printf("%d",s);
	    
}
int main( ) {
	int n;
	
	printf("Entrez le nombre de termes de la suite fibonacci a afficher :");
	scanf("%d",&n);
	
	fibonacci(n);
	
	return 0;
}
