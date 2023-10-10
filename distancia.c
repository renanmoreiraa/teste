#include <stdio.h>
#include <math.h>

//funcao que calcula a distancia
float calculaDistancia(int x1, int y1, int x2, int y2){
	return sqrt(pow (x2-x1, 2) + pow (y2-y1, 2));
}

int main(){
	//def das variaveis
	int x1,y1,x2,y2;
	float distancia;
	
	//leitura das coordenadas dos pontos
	printf("Informe as coordenadas para o primeiro ponto: ");
	scanf("%i %i", &x1, &y1);
	printf("Informe as coordenadas para o segundo ponto: ");
	scanf("%i %i", &x2, &y2);
	
	//calculo da distancia entre pontos
	distancia = calculaDistancia(x1, y1, x2, y2);
	printf("Distancia: %f", distancia);
}
}
#include <stdio.h>
#include <math.h>

float calculaDistancia(int x1, int y1, int x2, int y2){
	return sqrt(pow (x2-x1, 2) + pow (y2-y1, 2));
}

int main(){
	
}