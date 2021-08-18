#include <stdio.h>
#include <locale.h>
//#include <stdib.h>


void preencherVetoresSimultaneamente(int *vetor1, int *vetor2, int tam) {
	int i = 0, contVetor = 1;

	for(; i < tam; i++) {
		printf("\nVetor %d [%d]: ", contVetor, i);
		scanf("%d", &vetor1[i]);
		printf("Vetor %d [%d]: ", contVetor+1, i);
		scanf("%d", &vetor2[i]);
	}
	contVetor++;
}


void preencherVetorComFor(int *vetor, int tam) {
	int i = 0, contVetor = 1;;
	printf("\nDigite os dados do %d vetor\n", contVetor);
	for(; i < tam; i++) {
		printf("Nº %d: ", i+1);
		scanf("%d", &vetor[i]);
	}
	contVetor++;
}

void preencherVetorComWhile(int *vetor, int tam) {
	int i = 0, contVetor = 1;

	printf("\nDigite os dados do %d vetor\n", contVetor);
	while(i < tam) {
		printf("Nº %d: ", i+1);
		scanf("%d", &vetor[i]);
		i++;
	}
	contVetor++;
}

void preencherVetorComDoWhile(int *vetor, int tam) {
	int i = 0, contVetor = 1;

	printf("\nDigite os dados do %d vetor\n", contVetor);
	do {
		printf("Nº %d: ", i+1);
		scanf("%d", &vetor[i]);
		i++;
	} while(i < tam);	
	contVetor++;
}


void exibirVetorComFor(int vetor[], int tam) {
	printf("\n[");
	int i = 0;
	for(; i < tam; i++) {
		if(i == tam-1) {
			printf("%2d]", vetor[i]);
		} else {
			printf("%2d ", vetor[i]);	
		}
	}
}

void exibirVetorComWhile(int vetor[], int tam) {
	printf("\n[");
	int i = 0;
	while(i < tam) {
		if(i == tam-1) {
			printf("%2d]", vetor[i]);
		} else {
			printf("%2d ", vetor[i]);	
		}
		i++;
	}
}

void exibirVetorComDoWhile(int vetor[], int tam) {
	printf("\n[");
	int i = 0;
	do {
		if(i == tam-1) {
			printf("%2d]", vetor[i]);
		} else {
			printf("%2d ", vetor[i]);	
		}
		i++;
	} while(i < tam);
}

void exibirSomaVetorComFor(int *vetor1,int *vetor2, int tam) {
	int i = 0;
	printf("\n\nSOMA DOS VETORES");
	printf("\n[");

	for(; i < tam; i++) {
		if(i == tam-1) {
			printf("%2d]", vetor1[i] + vetor2[i]);
		} else {
			printf("%2d ", vetor1[i] + vetor2[i]);	
		}
	}
}

void exibirSomaVetorComWhile(int *vetor1,int *vetor2, int tam) {
	int i = 0;
	printf("\n\nSOMA DOS VETORES");
	printf("\n[");

	while(i < tam) {
		if(i == tam-1) {
			printf("%2d]", vetor1[i] + vetor2[i]);
		} else {
			printf("%2d ", vetor1[i] + vetor2[i]);	
		}
		i++;
	}
}

void exibirSomaVetorComDoWhile(int *vetor1,int *vetor2, int tam) {
	int i = 0;
	printf("\n\nSOMA DOS VETORES");
	printf("\n[");

	do {
		if(i == tam-1) {
			printf("%2d]", vetor1[i] + vetor2[i]);
		} else {
			printf("%2d ", vetor1[i] + vetor2[i]);	
		}
		i++;
	} while(i < tam);
}

int main() {
	setlocale(LC_ALL,"");
	
	int tam = 0;	
	printf("Digite o tamanho dos vetores: ");
	scanf("%d", &tam);
	
	int vetor1[tam], vetor2[tam];
	int i = 0;

	//preencherVetorComFor(vetor1, tam);
	//preencherVetorComWhile(vetor2, tam);
	preencherVetoresSimultaneamente(vetor1, vetor2, tam);
	
	exibirVetorComFor(vetor1, tam);
	exibirVetorComWhile(vetor2, tam);
	
	//exibirSomaVetorComFor(vetor1, vetor2, tam);
	//exibirSomaVetorComWhile(vetor1, vetor2, tam);
	exibirSomaVetorComDoWhile(vetor1, vetor2, tam);
	
	return 0;
}
