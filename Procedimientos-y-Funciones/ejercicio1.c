//a) inicio del programa.
//b) variables: hora_total, horas diarias, sueldo. 
//c) crear funcion hora_total, la cual nos da el sueldo que recibira a final de semana.
//d) imprimir el nuemero de horas, y el sueldo obtenido por estas:
//e) fin del programa. 

# include <stdio.h>
void 
	hora_total(int sueldo){
	printf("sueldo obtenido al final de la semana %d",sueldo);
}
int horas_diarias(){
	int i; 
	int horas_diarias;
	int hora_total=0;
	for(i=1; i<=6; i++){
	printf("ingrese nuemro de horas trabajadas al dia: %d ",i);
	scanf("%d",&horas_diarias);
	hora_total=hora_total+ horas_diarias;
		}
	return hora_total; 	
} 


	int main (){
	int valor_hora; 
	int sueldo;
	int horas_totales;
	
	printf("ingrese sueldo por hora: ");
	scanf("%d",&valor_hora);
	horas_totales=horas_diarias();
	sueldo= horas_totales* valor_hora; 
	printf("trabajo estas horas a la semana: %d\n", horas_totales);
	
	hora_total(sueldo);
	 return 0;
 }
	
