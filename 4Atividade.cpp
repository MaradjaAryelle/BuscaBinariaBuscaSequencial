#include <iostream>

using namespace std;

void buscaSequencial (int vetor[], int n, int valorBuscado, int *encontrado) {
    for (int i = 0; i < n; i++){
		if (vetor[i] == valorBuscado){
    		*encontrado = 1;
    		cout << "O valor foi encontrado na posicao " << i;
    	}
    }
    if (*encontrado = 0){
    	cout << "Valor nao encontrado!" << endl;
	}
    
}
    
void buscaBinaria(int vetor[], int n, int valorBuscado, int *encontrado){
	int inicio = 0;
	int fim = n - 1;

	while (inicio <= fim){
		int meio = (inicio + fim)/ 2;
		
		if (valorBuscado == vetor [meio]) {
			*encontrado = 1;
			int auxiliar = meio;
			
			cout << "O valor foi encontrado na posicao ";
            while (auxiliar >= 0 && vetor[auxiliar] == valorBuscado) {
                cout <<  auxiliar << " ";
                auxiliar -= 1;
            }

            auxiliar = meio + 1;
            while (auxiliar < n && vetor[auxiliar] == valorBuscado) {
                cout << auxiliar << " ";
                auxiliar+= 1;
            }

            break;  
        } else if (valorBuscado < vetor[meio]) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }

    if (!encontrado) {
        cout << "Chave nao encontrada." << endl;
    }
}

int main(){ 
    
    int vetor[6] = {2, 2, 6, 9, 10, 11};
    int questao = 0;
    int valorBuscado;
    int encontrado = 0;
    
    cout << "Digite o valor a ser buscado: " ;
    cin >> valorBuscado;
    
    cout << "Digite 1 para busca binaria e 2 para busca sequencial: " ;
    cin >> questao;
    
    if (questao == 1){
        buscaBinaria(vetor, 6, valorBuscado, &encontrado);
    } else if (questao == 2){
        buscaSequencial(vetor, 6, valorBuscado, &encontrado);
    }

    if (encontrado == 0){
        cout << "Valor nao encontrado!";
    }
}
