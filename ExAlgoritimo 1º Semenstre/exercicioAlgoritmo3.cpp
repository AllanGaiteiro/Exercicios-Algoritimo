/*3) Dois amigos jogam na loteria semanalmente. 
	Escreva um programa que solicite a quantia com que cada um participou e o valor do pr�mio a ser rateado em partes diretamente proporcionais �s quantias de cada um deles. 
	O programa deve imprimir quanto cada um dos amigos receber� caso sejam ganhadores. */
	
	#include <iostream>
	#include <locale>

	using namespace  std;

	int main(int argc, char** argv) {
		
	int joao, jose, premio;
	float razao;

	cout << "quantas vezes joao jogou: ";
	cin >> joao;
	
	cout << "quantas vezes jose jogou: ";
	cin >> jose;
	
	cout << "quando ganharam: ";
	cin >> premio;
	
	
	razao = (premio)/(joao + jose);
	
	cout << "joao deve ganhar "<< (joao*razao) << " e jose de ganhar " << (jose*razao)<< endl;
	
			return 0;
	
	};	
