//Obtener numeros del usuario 2
#include <iostream>
#include <vector>

using namespace std;

int obtener_valor_maximo_de_lista(vector<int> lista_numeros){
	int max = 0;
	for(int numero: lista_numeros){
		if(numero > max){
			max = numero;
		}
	}
	return max;
}
	int main(){
		vector<int> lista_numeros;
		
		bool pedir_numeros_al_usuario = true;
		
		while(pedir_numeros_al_usuario){
			int numero_ingresado;
			cout << "Ingrese un numero  ( 0 para detenerse ): ";
			cin >> numero_ingresado;
			if(numero_ingresado == 0){
				pedir_numeros_al_usuario = false;
			}
			else {
				lista_numeros.push_back(numero_ingresado);
			}
		}
		
		cout << "Valor maximo de la lista de numeros: "
			  << obtener_valor_maximo_de_lista(lista_numeros)
			  <<endl;
		return 0;
	}
	
