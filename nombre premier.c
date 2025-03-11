#include <stdio.h>
#include <stdlib.h>


    
/*	 int main(){
	 	
    int i,a;
    	printf("Donner un nombre positif \n");
		scanf("%d",&a);
	 
 		for(i=2;i*i<=a;i++){
		 
		if((a%i==0)){
				printf("%d",i);
		}
			}         
         	
		printf("   \n");

        return 0;
       	} */
       	
       	
       	

// Fonction pour vérifier si un nombre est premier
int est_premier(int n) {
    int i;
    for ( i = 2; i * i <= n; i++) {
    	
        if (n % i == 0) return 0; // Si divisible par un nombre autre que 1 et lui-même
    }
    return 1; // Nombre premier
}

// Fonction pour afficher les nombres premiers jusqu'à une limite
  long long nombres_premiers(int limite) {
	int i;
 long long s=0;
    printf("Nombres premiers jusqu'a %d :\n", limite);
    for (i = 2; i < limite; i++) {
        if (est_premier(i)) {
            printf("%d ", i);
            s+=i;
        }
    }
    
    printf("\n"); // Nouvelle ligne à la fin
    
    return s;
}

int main() {
	
    int limite=2000000;
    
    long  long r;
      
   r=nombres_premiers(limite);
    // Demander la limite à l’utilisateur
   /* printf("Entrez une limite pour afficher les nombres premiers : ");
    scanf("%d", &limite);
    
    */
   printf("la somme des nombres premier est:%lld\n",r,limite);
   
    
    
    return 0;
}
