	/*9) Escrever um programa que calcule e apresente a somat�ria do numero de gr�os de trigo que se pode
	 obter em um tabuleiro de xadrez, obedecendo a seguinte regra: 
	 colocar um gr�o de trigo no primeiro quadro e nos quadros seguintes o dobro do quadro anterior.
	Ou seja, no primeiro coloca-se um gr�o, no segundo quadro coloca-se dois gr�os 
	(neste momento tem-se tr�s gr�os), no terceiro coloca-se quatro gr�os, 
	repetir at� atingir o sexag�simo quarto quadro. 
	(Este exerc�cio foi baseado em uma situa��o do cap�tulo 16 do livro �O Homem que calculava� de Malba Tahan. */
	
	#include <iostream>
	#include <locale>

	using namespace  std;

	int main(int argc, char** argv) {	
	
	int  i;
	char ops;
	long grao ,totalGrao = 0;
	
	
	do{
		cout << "numeros de graos";
		cin >> grao ;
		
		for(i=1; i < 65; i++){
			if( i > 1){
				grao = grao * 2;
				
			}else{
			}
			totalGrao = totalGrao + grao;
			cout << "no "<< i << "� guadro tera [" << grao << "] de grao\n";
			
		}
		cout << "total de graos no tabuleiro: "<< totalGrao << endl;
		cout << "deseja tentar denovo ? [S/N]";
		cin >> ops;
		system("CLS");
		
	}while(ops == 'S' || ops == 's');
	
	return 0;
	
	};
	
