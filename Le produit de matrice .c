#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
	int a,n,m, T[50][50],S[50][50];
	int i ,j;
int main( ) {

	printf("Donner le nombre de lignes");
	scanf("%d",&n);  
	
	printf("Donner le nomlbre de colonnes");
	scanf("%d",&m);
	
 for(i=0;i<n;i++){
			for( j=0;j<m;j++){
			printf("Donner T[%d][%d]\n,i,j");		
				scanf("%d",T[i][j]);
			}
	}
 for( i=0;i<n;i++){
			for( j=0;j<m;j++){
			
				S[i][j]=T[i][j]*a;
				printf("matrice apres multiplication est :" ,S[i][j]);
			     	}
				
				} 
	for(i=0;i<n;i++){
			for(j=0;j<m;j++){
					
				printf( "%d", S[i][j]);
				
				}
				print("\n");
				}
	return 0;
}
