	/*1) Fa�a um algoritmo para calcular quantas ferraduras s�o necess�rias para equipar todos os cavalos comprados para um haras. 
	O algoritmo deve solicitar a quantidade de cavalos e exibir a quantidade de ferraduras. */
	
	#include <iostream>
	#include <locale>

	using namespace  std;

	int main(int argc, char** argv) {
	
	//Declara�ao de variavel//
	
		int cav, fer;
	
		cout << "quantos cavalos voce tem ?\n";
		cout << "digite a quantidade: ";
		cin >> cav;
	
		fer = cav * 4;
	
		cout << "voce necessitara de : " << fer << " Ferraduras.";
		
		return 0;
	
	};	
