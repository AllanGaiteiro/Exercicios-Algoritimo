	/*2) A padaria Hotp�o vende uma certa quantidade de p�es franceses e uma quantidade de broas a cada dia. Cada p�ozinho custa R$ 0,50 e a broa custa R$ 2,50.
	Ao final do dia, o dono quer saber quanto arrecadou com a venda dos p�es e broas (juntos), e quanto deve guardar numa conta de poupan�a (15% do total arrecadado).
	Voc� foi contratado para fazer os c�lculos para o dono. Com base nestes fatos, fa�a um algoritmo para ler as quantidades de p�es e de broas, e depois calcular os dados solicitados. */
	
	#include <iostream>
	#include <locale>

	using namespace  std;

	int main(int argc, char** argv) {		
	
	
		int pao = 0, broa = 0;
		float reais = 0;
		
		cout << "quantidade de paos que vendeu: ";
		cin >> pao;
		cout << "quantidade de broas que vendeu ";
		cin >> broa;
		
		reais = (pao * 0.5) + (broa * 2.5);

		
		cout << "Quantia arrecadada foi de " << reais << " Reais. Seu deposito na poupan�a sera de " << reais * 0.15 << " Reais.";
		
		
		return 0;
	
	};	
