#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	long long fact(long long n){
		long long i;int result=1;
		if(n<0)return -1;
	if(n==0||n==1)	
	return 1;
	
	for ( i = 2; i <= n; i++) {
        result =result*i;
		
	}
	return result;
	}
	int main( ) {
	int n;int result;
	printf("Donner a\n");
	scanf("%d",&n);
	
     result=factoriel(n);
     if(result<0){
	 printf("Le factoriel de %d est trop grand pour être calculé avec un int.\n", n);
        } else {
            printf("Le factoriel de %d est : %d\n", n, result);
        }
	
	return 0;
	
}
