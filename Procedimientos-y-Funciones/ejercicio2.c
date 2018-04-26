//a) iniciar programa.
//b) creo la funcion calculo_termometro, que muetra los guiones.
//c) creo la funcion termometro, que imprime los grados del 0 al 50.
//d) ingrese temperatura. 
//e) llamar funciones.
//f) fin del programa. 
# include <stdio.h>
 void calculo_termometro(int n){
	
	int i;
	for (i=0; i < n-1; i++){
		printf ("-");
	}
	printf ("*");

}
void termometro(){
	printf("0         10        20        30        40        50\n");
	printf("|         |         |         |         |         |\n");
}
int main()
{
	int n;
	printf("ingrese temperatura: \n");
	scanf("%d",&n);
	termometro();
	calculo_termometro(n);
	return 0;
}
