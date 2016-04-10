// Inclusao de codigo extra
#include<iostream>

//------------------------------------------------------------------

// Funcao principal
int main () 
{
	//--------------------------------------------------------------
	// Declaracao e Inicializacao de VARIAVEIS
	int MenorNumeroInt= 0.0f;
	int MaiorNumeroInt = 0.0f;
	int NumeroInf = 0.0f;
	//-----------------------------------------------------------------------------
	
	//-----------------------------------------------------------------------------
	// Leitura de dados - entrada padrao
	
	std::cout << "\t Digite o numero inteiro menor : " << std::endl << "\t";
	std::cin >> MenorNumeroInt;
	std::cout << "\t Digite o numero inteiro maior: " << std::endl << "\t";
	std::cin >> MaiorNumeroInt;
	std::cout << "\t Digite um numero qualquer para a contagem: " << std::endl << "\t";
	std::cin >> NumeroInf;

	

	std::cout << "--------------------------------------" << std::endl;
	//----------------------------------------------------------------------------
	
	//----------------------------------------------------------------------------
	// Processamento efetivo - resolve o problema

	int i;
	for (int i = 0; i < 11; i++)
	 {

		if 
			MaiorNumeroInt > NumeroInf;
			NumeroInf=MaiorNumeroInt;
		else	
			NumeroInf=MenorNumeroInt;
	 }


	//----------------------------------------------------------------------------
	
	//----------------------------------------------------------------------------
	// Mostra Resultado
	std::cout << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << " o numero menor e:\t" << MenorNumeroInt << std::endl;
	std::cout << "---------------------------" << std::endl;
	std::cout << " o numero maior e:\t" << MaiorNumeroInt << std::endl;
	std::cout << "---------------------------" << std::endl;

	return 0;	//---------------------------------------------------------------------------
} 
//-------------------------------------------------------------------------------
