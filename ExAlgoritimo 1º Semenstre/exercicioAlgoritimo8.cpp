	/*8) A s�rie de Fibonacci � uma sequ�ncia de termos que tem como os 2 primeiros termos, 
	respectivamente, os n�meros 0 e 1. A partir da�, os demais termos s�o formados seguindo uma certa regra. 
	A s�rie de Fibonacci pode ser vista a seguir:                                            
	0 1 1 2 3 5 8 13 21..*/
	
	
	/////////////////// Fibonach no While ///////////////////
	#include <iostream>
	#include <locale>

	using namespace  std;

	int main(int argc, char** argv) {		
	int i = 1,fibonacci, limit = 10, n1 = 0 , n2 = 1;
	
		cout << "Quantos numes vc deseja saber do fibonacci ";
		cin >> limit;
		cout << n1 << " ";
	
	while(i < limit){
		cout << n2 << " ";
		fibonacci = n1+n2;
		n1 = n2;
		n2 = fibonacci;
		i++;
		
	}
	return 0;
	
	};

