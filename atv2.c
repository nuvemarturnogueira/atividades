#include <stdio.h>
int main(){
	int velocidade;
	int distancia;
	printf("Digite a velocidade em km/h:");
	scanf("%d",&velocidade);
	printf("Digite a dist�ncia em km:");
	scanf("%d",&distancia);
	int tempo = distancia / velocidade;
	printf("O tempo em horas �: %d",tempo);
	return 0;
}
