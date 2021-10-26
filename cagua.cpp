#include<iostream>
#include<math.h>

using namespace std;

int main()
{
	int tipocon;
	float consumo, conta;
	
	cout << "\n\n Digite o tipo do consumidor: ";
	cout<< "\n Residencial(1) \n Comercial(2) \n Industrial(3) ";
	cin >> tipocon;
	cout << "\n Digite o consumo de agua em metros cubicos: ";
	cin >> consumo;
	
	if(tipocon == 1)
	{
		conta = 5+(0.05*consumo);
		
		cout << "\n O valor da conta para o cliente residencial e de: R$" << conta;
	}
	if(tipocon == 2)
	{
		if(consumo <= 80)
		{
			conta = 500;
			cout << "\n O valor da conta para o cliente comercial e de: R$" << conta;
		}
		else
		{
			consumo = consumo - 80;
			conta = 500+ (0.25 * consumo);
			cout << "\n O valor da conta para o cliente comercial e de: R$" << conta;
		}
	}
	if (tipocon == 3)
	{
		if(consumo <= 100)
		{
			conta = 800;
			cout << "\n O valor da conta para o cliente industrial e de: R$" << conta;
		}
		else
		{
			consumo = consumo - 100;
			conta = 800 + (consumo * 0.04);
			cout << "\n O valor da conta para o cliente industrial e de: R$" << conta;
		}
	}		
	return 0;
}
