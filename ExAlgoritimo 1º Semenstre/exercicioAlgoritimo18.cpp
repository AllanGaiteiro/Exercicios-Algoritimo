/*18) Fa�a uma fun��o que verifique se um valor � perfeito ou n�o. Um valor � dito perfeito quando ele � igual a soma dos seus divisores excetuando ele pr�prio. (Ex: 6 � perfeito, 6 = 1 + 2 + 3, que s�o seus divisores). A fun��o deve retornar um valor booleano. */

#include <iostream>
#include <math.h>

using namespace  std;

void perfect(int n)
{
	int i,div, soma = 0;
	
	for(i = 1; i < n; i++)
	{
		div = n % i;
		
		if(div == 0)
		{
			soma = soma + i;
			
		}
	}
	
	if(soma == n)
	{
		cout << "o numero " << n <<" e Perfeito";
		
	}
	
	if(soma != n)
	{
		cout << "o numero " << n << " Nao e perfeito";
	}
	
}




int main(int argc, char** argv) 
{
	int n;
	cout << "digite um numero: ";
	cin >> n;
	
	
	perfect(n);
	
	
	return 0;
}
