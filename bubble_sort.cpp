#include<iostream>
using namespace std;

void bubblesort (int* vet, int n){  //bubble sort ou ordenação por flutuação (ornedação por bormulhamento)
int aux;

	for (int i=0; i<n; i++){
	for (int j=0; j<(n-1); j++){
	if (vet[j] > vet[j+1]){
	aux = vet[j];
    vet[j] = vet[j+1];
    vet[j+1] = aux;

   }
  }
 }
}

int main(){
int n = 13;             //tamanho do vetor
int vet[n]={89, 87, 82, 79, 77, 70, 57, 52, 49, 42, 41, 33, 32};   //números para serem ordenados  

cout << "\n";	
cout << " Tamanho do vetor: " << n << "\n";
	
  bubblesort (vet, n);
	  for(int i = 0; i<n; i++){

cout << vet[i] << ( (i!=n-1) ? " - " : ""); //operador condicional ternario "|variável| = `if`(condição) ? <valor1> : <valor2>;". uilizei para trar o simbolo separador após o último número 

  }

cout << "\n \n";

bubblesort (vet, n);
  
cout << " Vetor ordenado por borbulhamento (Bubble sort) " << "\n";
  
  for (int i = 0; i < n; i++){
	  
cout << vet[i] << ( (i!=n-1) ? " < " : ""); //operador condicional ternario "|variável| = `if`(condição) ? <valor1> : <valor2>;" . uilizei para trar o simbolo separador após o último número 
  
  }

cout << "\n"; 

return 0;

}

