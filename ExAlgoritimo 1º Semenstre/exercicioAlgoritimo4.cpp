	/*4) Uma f�brica de camisetas produz os tamanhos pequeno, m�dio e grande, cada uma sendo vendida respectivamente por 12, 15 e 18 reais. 
	Construa um algoritmo em que o usu�rio forne�a a quantidade de camisetas pequenas, m�dias e grandes referentes a uma venda, 
	e a m�quina informe quanto ser� o valor arrecadado. */
	
	#include <iostream>
	#include <locale>

	using namespace  std;

	int main(int argc, char** argv) {		
	
	int p, m, g, total;
	
	
	cout << "quantas camisas pequenas: ";
	cin >> p;
	
	cout << "quantas camisas medias: ";
	cin >> m;
	
	cout << "quantas camisas grandes: ";
	cin >> g;
	
	total = (p*12)+(m*15)+(g*18);
	
	cout << "a empresa vai arrecadar " << total;
	
	return 0;
	
	};
