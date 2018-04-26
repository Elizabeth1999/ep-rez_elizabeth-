//a) iniciar programa.
//b)  variables: cuota_mensual, total_a_pagar.
//c) crear funcion, que calcule la cuota_mensual.
//d) llamar funcion 
//e) responder cuanto se debe pagar.
//f) fin del programa. 


# include <stdio.h>
			
	
int cuota_mensual(){
	int i; 
	int cuota_mensual=10;
	for(i=1; i<=20; i++){
		printf("cuota mensual %d: %d\n",i,cuota_mensual);
		cuota_mensual= cuota_mensual*2;
	}
	return cuota_mensual;	
}
	 

int main(){
	int total_a_pagar;
	total_a_pagar= cuota_mensual();
	printf("El monto total a pagar es: %d \n", total_a_pagar);
	return 0;  
}

	
