#include <iostream>

using namespace std;

int buscaSequencial (int vetor[], int n, int valorBuscado, int *encontrado) {
    for (int i = 0; i < n; i++){
		if (vetor[i] == valorBuscado){
    		*encontrado = 1;
    		cout << "O valor foi encontrado na posicao " << i;
    		return i;
    	}
    }
return -1;
}
    
int buscaBinaria(int vetor[], int n, int valorBuscado, int *encontrado){
	int inicio = 0;
	int fim = n - 1;

	while (inicio <= fim){
		int meio = (inicio + fim)/ 2;
		
		if (valorBuscado > vetor [meio]) {
			inicio = meio + 1;
    		
    	} else if (valorBuscado < vetor[meio]){
    		fim = meio - 1;
    	} else {
    	    *encontrado = 1;
    	    cout << "O valor foi encontrado na posicao " << meio;
    		return meio;
    	}
    }
	return -1;
}

int main(){ 
    
    int vetor[6] = {2, 3, 6, 9, 10, 11};
    int questao = 0;
    int valorBuscado;
    int encontrado = 0;
    
    cout << "Digite o valor a ser buscado: "  << endl;
    cin >> valorBuscado;
    
    cout << "Digite 1 para busca binaria e 2 para busca sequencial: " << endl;
    cin >> questao;
    
    if (questao == 1){
        buscaBinaria(vetor, 6, valorBuscado, &encontrado);
    } else if (questao == 2){
        buscaSequencial(vetor, 6, valorBuscado, &encontrado);
    }

    if (encontrado == 0){
        cout << "Valor não encontrado!";
    }
}
