
//Desenvolvido por:
//Leonardo Gini Ferreira 

#include <iostream>

using namespace std;

//Variaveis usadas ao longo do codigo
//Vetores para os produtos
double NumeroProduto [10];
double ValorProduto[10];
int QuantidadeProduto[10];
//Variaveis para controle
int Escolha;
int EscolhaAdmin;
int ControlePrincipal = 1;
bool Start = true;
double Pagamento;
double Adicional;
double Troco;
int CapacidadeMaquina = 5;
int Reposicao;
double Faturado = 0;
double Prospeccao = 0;
double ProspeccaoGeral = 0;

//Principal
int main()
{
	//Variaveis de controle para implementar codigo aos produtos e o preco
	int i;
	int v;
	double DefineValor = 0.5;

	//Implementa codigo ao produto 
	for (i = 0; i <= 9; i++)
	{ 
		NumeroProduto[i] = i;
		QuantidadeProduto[i] = 5;
	}

    //Implemeta valor ao produto
	for (v = 0; v <= 9; v++)
	{
		ValorProduto[v] = DefineValor + v;
	}

	//Inicializa��o, caso o usuario digite valores diferentes de 1 o loop manter a maquina ativa ate ser digitado o comando de inicio
	while (Start == true)
	{
		//Inicia o sistema
		cout << "Pressione 1 para iniciar a maquina" << endl;
		cin >> ControlePrincipal;
		cout << "\n" << endl;

		//Valida o valor armazenado em ConteudoPrincipal para iniciar a maquina
		if (ControlePrincipal == 1)
		{
			//Mantem o menu ativo enquanto o ControlePrincipal for igual a 1, este valor que e digitado pelo administrador ao iniciar o sistema
			while (ControlePrincipal == 1)
			{
				//Menu
				//Senha Modo Administrativo: 666 (Sera fornecido ao Administrador do produto pessoalmente)
				cout << "Escolha seu produto" << endl;
				cout << "0 a 9 " << endl;
				cin >> Escolha;
				cout << "\n" << endl;

				if (Escolha == 0)
				{
					//Verifica quantidade
					if (QuantidadeProduto[0] >= 1 && QuantidadeProduto[0] <= 5)
					{
						cout << "Valor do produto: " << ValorProduto[0] << endl;
						cout << "Insira o dinheiro" << endl;
						cin >> Pagamento;
						cout << "\n" << endl;

						//Verifica o valor do pagamento e caso seja menor que o valor do produto, solicita mais dinheiro
						while (Pagamento < ValorProduto[0])
						{
							cout << "Insira mais dinheiro" << endl;
							cin >> Adicional;
							cout << "\n" << endl;

							Pagamento = Pagamento + Adicional;
						}

						//Pagamento sem troco
						if (Pagamento == ValorProduto[0])
						{
							Troco = 0;
							Faturado = Faturado + (Pagamento - Troco);
							cout << "Valor do troco: " << Troco << endl;
							cout << "Retire seu produto" << endl;
							cout << "Obrigado" << endl;
							QuantidadeProduto[0] = QuantidadeProduto[0] - 1;
							cout << "\n" << endl;
						}

						//Pagamento com troco
						else if (Pagamento > ValorProduto[0])
						{
							Troco = Pagamento - ValorProduto[0];
							Faturado = Faturado + (Pagamento - Troco);
							cout << "Valor do troco: " << Troco << endl;
							cout << "Retire seu produto" << endl;
							cout << "Obrigado" << endl;
							QuantidadeProduto[0] = QuantidadeProduto[0] - 1;
							cout << "\n" << endl;
						}
					}
					else
						cout << "Produto Indisponivel" << endl;

					    cout << "\n" << endl;
					    cout << "Pressione 1 para continuar" << endl;;
						cin >> ControlePrincipal;
						cout << "\n" << endl;
				}
				else if (Escolha == 1)
				{
					//Verifica quantidade
					if (QuantidadeProduto[1] >= 1 && QuantidadeProduto[1] <= 5)
					{
						cout << "Valor do produto: " << ValorProduto[1] << endl;
						cout << "Insira o dinheiro" << endl;
						cin >> Pagamento;
						cout << "\n" << endl;

						//Verifica o valor do pagamento e caso seja menor que o valor do produto, solicita mais dinheiro
						while (Pagamento < ValorProduto[1])
						{
							cout << "Insira mais dinheiro" << endl;
							cin >> Adicional;
							cout << "\n" << endl;

							Pagamento = Pagamento + Adicional;
						}

						//Pagamento sem troco
						if (Pagamento == ValorProduto[1])
						{
							Troco = 0;
							Faturado = Faturado + (Pagamento - Troco);
							cout << "Valor do troco: " << Troco << endl;
							cout << "Retire seu produto" << endl;
							cout << "Obrigado" << endl;
							QuantidadeProduto[1] = QuantidadeProduto[1] - 1;
							cout << "\n" << endl;
						}

						//Pagamento com troco
						else if (Pagamento > ValorProduto[1])
						{
							Troco = Pagamento - ValorProduto[1];
							Faturado = Faturado + (Pagamento - Troco);
							cout << "Valor do troco: " << Troco << endl;
							cout << "Retire seu produto" << endl;
							cout << "Obrigado" << endl;
							QuantidadeProduto[1] = QuantidadeProduto[1] - 1;
							cout << "\n" << endl;
						}
						
					}
					else
						cout << "Produto Indisponivel" << endl;
					    cout << "Pressione 1 para continuar" << endl;
					    cin >> ControlePrincipal;
						cout << "\n" << endl;
				}
				else if (Escolha == 2)
				{
					//Verifica a quantidade
					if (QuantidadeProduto[2] >= 1 && QuantidadeProduto[2] <= 5)
					{
						cout << "Valor do produto: " << ValorProduto[2] << endl;
						cout << "Insira o dinheiro" << endl;
						cin >> Pagamento;
						cout << "\n" << endl;

						//Verifica o valor do pagamento e caso seja menor que o valor do produto, solicita mais dinheiro
						while (Pagamento < ValorProduto[2])
						{
							cout << "Insira mais dinheiro" << endl;
							cin >> Adicional;
							cout << "\n" << endl;

							Pagamento = Pagamento + Adicional;
						}

						//Pagamento sem troco
						if (Pagamento == ValorProduto[2])
						{
							Troco = 0;
							Faturado = Faturado + (Pagamento - Troco);
							cout << "Valor do troco: " << Troco << endl;
							cout << "Retire seu produto" << endl;
							cout << "Obrigado" << endl;
							QuantidadeProduto[2] = QuantidadeProduto[2] - 1;
							cout << "\n" << endl;
						}
						//Pagamento com troco
						else if (Pagamento > ValorProduto[2])
						{
							Troco = Pagamento - ValorProduto[2];
							Faturado = Faturado + (Pagamento - Troco);
							cout << "Valor do troco: " << Troco << endl;
							cout << "Retire seu produto" << endl;
							cout << "Obrigado" << endl;
							QuantidadeProduto[2] = QuantidadeProduto[2] - 1;
							cout << "\n" << endl;
						}
					}
					else
						cout << "Produto Indisponivel" << endl;
					    cout << "Pressione 1 para continuar" << endl;
					    cin >> ControlePrincipal;
						cout << "\n" << endl;
				}
				else if (Escolha == 3)
				{
				    //Verifica quantidade
					if (QuantidadeProduto[3] >= 1 && QuantidadeProduto[3] <= 5)
					{
						cout << "Valor do produto: " << ValorProduto[3] << endl;
						cout << "Insira o dinheiro" << endl;
						cin >> Pagamento;
						cout << "\n" << endl;

						//Verifica o valor do pagamento e caso seja menor que o valor do produto, solicita mais dinheiro
						while (Pagamento < ValorProduto[3])
						{
							cout << "Insira mais dinheiro" << endl;
							cin >> Adicional;
							cout << "\n" << endl;

							Pagamento = Pagamento + Adicional;
						}

						//Pagamento sem troco
						if (Pagamento == ValorProduto[3])
						{
							Troco = 0;
							Faturado = Faturado + (Pagamento - Troco);
							cout << "Valor do troco: " << Troco << endl;
							cout << "Retire seu produto" << endl;
							cout << "Obrigado" << endl;
							QuantidadeProduto[3] = QuantidadeProduto[3] - 1;
							cout << "\n" << endl;
						}
						//Pagamento com troco
						else if (Pagamento > ValorProduto[3])
						{
							Troco = Pagamento - ValorProduto[3];
							Faturado = Faturado + (Pagamento - Troco);
							cout << "Valor do troco: " << Troco << endl;
							cout << "Retire seu produto" << endl;
							cout << "Obrigado" << endl;
							QuantidadeProduto[3] = QuantidadeProduto[3] - 1;
							cout << "\n" << endl;
						}
					}
					else
						cout << "Produto Indisponivel" << endl;
					    cout << "Pressione 1 para continuar" << endl;
					    cin >> ControlePrincipal;
						cout << "\n" << endl;
				}
				else if (Escolha == 4)
				{
				    //Verifica quantidade
					if (QuantidadeProduto[4] >= 1 && QuantidadeProduto[4] <= 5)
					{
						cout << "Valor do produto: " << ValorProduto[4] << endl;
						cout << "Insira o dinheiro" << endl;
						cin >> Pagamento;
						cout << "\n" << endl;

						//Verifica o valor do pagamento e caso seja menor que o valor do produto, solicita mais dinheiro
						while (Pagamento < ValorProduto[4])
						{
							cout << "Insira mais dinheiro" << endl;
							cin >> Adicional;
							cout << "\n" << endl;

							Pagamento = Pagamento + Adicional;
						}

						//Pagamento sem troco
						if (Pagamento == ValorProduto[4])
						{
							Troco = 0;
							Faturado = Faturado + (Pagamento - Troco);
							cout << "Valor do troco: " << Troco << endl;
							cout << "Retire seu produto" << endl;
							cout << "Obrigado" << endl;
							QuantidadeProduto[4] = QuantidadeProduto[4] - 1;
							cout << "\n" << endl;
						}

						//Pagamento com troco
						else if (Pagamento > ValorProduto[4])
						{
							Troco = Pagamento - ValorProduto[4];
							Faturado = Faturado + (Pagamento - Troco);
							cout << "Valor do troco: " << Troco << endl;
							cout << "Retire seu produto" << endl;
							cout << "Obrigado" << endl;
							QuantidadeProduto[4] = QuantidadeProduto[4] - 1;
							cout << "\n" << endl;
						}
					}
					else
						cout << "Produto Indisponivel" << endl;
					    cout << "Pressione 1 para continuar" << endl;
					    cin >> ControlePrincipal;
						cout << "\n" << endl;
				}
				else if (Escolha == 5)
				{
				    //Verifica quantidade
					if (QuantidadeProduto[5] >= 1 && QuantidadeProduto[5] <= 5)
					{
						cout << "Valor do produto: " << ValorProduto[5] << endl;
						cout << "Insera o dinheiro" << endl;
						cin >> Pagamento;
						cout << "\n" << endl;

						//Verifica o valor do pagamento e caso seja menor que o valor do produto, solicita mais dinheiro
						while (Pagamento < ValorProduto[5])
						{
							cout << "Insira mais dinheiro" << endl;
							cin >> Adicional;
							cout << "\n" << endl;

							Pagamento = Pagamento + Adicional;
						}

						//Pagamento sem troco
						if (Pagamento == ValorProduto[5])
						{
							Troco = 0;
							Faturado = Faturado + (Pagamento - Troco);
							cout << "Valor do troco: " << Troco << endl;
							cout << "Retire seu produto" << endl;
							cout << "Obrigado" << endl;
							QuantidadeProduto[5] = QuantidadeProduto[5] - 1;
							cout << "\n" << endl;
						}

						//Pagamento com troco
						else if (Pagamento > ValorProduto[5])
						{
							Troco = Pagamento - ValorProduto[5];
							Faturado = Faturado + (Pagamento - Troco);
							cout << "Valor do troco: " << Troco << endl;
							cout << "Retire seu produto" << endl;
							cout << "Obrigado" << endl;
							QuantidadeProduto[5] = QuantidadeProduto[5] - 1;
							cout << "\n" << endl;
						}
					}
					else
						cout << "Produto Indisponivel" << endl;
					    cout << "Pressione 1 para continuar" << endl;
					    cin >> ControlePrincipal;
						cout << "\n" << endl;
				}
				else if (Escolha == 6)
				{
				    //Verifica a quantidade
					if (QuantidadeProduto[6] >= 1 && QuantidadeProduto[6] <= 5)
					{
						cout << "Valor do produto: " << ValorProduto[6] << endl;
						cout << "Insira o dinheiro" << endl;
						cin >> Pagamento;
						cout << "\n" << endl;

						//Verifica o valor do pagamento e caso seja menor que o valor do produto, solicita mais dinheiro
						while (Pagamento < ValorProduto[6])
						{
							cout << "Insira mais dinheiro" << endl;
							cin >> Adicional;
							cout << "\n" << endl;

							Pagamento = Pagamento + Adicional;
						}

						//Pagamento sem troco
						if (Pagamento == ValorProduto[6])
						{
							Troco = 0;
							Faturado = Faturado + (Pagamento - Troco);
							cout << "Valor do troco: " << Troco << endl;
							cout << "Retire seu produto" << endl;
							cout << "Obrigado" << endl;
							QuantidadeProduto[6] = QuantidadeProduto[6] - 1;
							cout << "\n" << endl;
						}

						//Pagamento com troco
						else if (Pagamento > ValorProduto[6])
						{
							Troco = Pagamento - ValorProduto[6];
							Faturado = Faturado + (Pagamento - Troco);
							cout << "Valor do troco: " << Troco << endl;
							cout << "Retire seu produto" << endl;
							cout << "Obrigado" << endl;
							QuantidadeProduto[6] = QuantidadeProduto[6] - 1;
							cout << "\n" << endl;
						}
					}
					else
						cout << "Produto Indisponivel" << endl;
					    cout << "Pressione 1 para continuar" << endl;
					    cin >> ControlePrincipal;
						cout << "\n" << endl;
				}
				else if (Escolha == 7)
				{
				    //Verifica a quantidade
					if (QuantidadeProduto[7] >= 1 && QuantidadeProduto[7] <= 5)
					{
						cout << "Valor do produto: " << ValorProduto[7] << endl;
						cout << "Insira o dinheiro" << endl;
						cin >> Pagamento;
						cout << "\n" << endl;

						//Verifica o valor do pagamento e caso seja menor que o valor do produto, solicita mais dinheiro
						while (Pagamento < ValorProduto[7])
						{
							cout << "Insira mais dinheiro" << endl;
							cin >> Adicional;
							cout << "\n" << endl;

							Pagamento = Pagamento + Adicional;
						}

						//Pagamento sem troco
						if (Pagamento == ValorProduto[7])
						{
							Troco = 0;
							Faturado = Faturado + (Pagamento - Troco);
							cout << "Valor do troco: " << Troco << endl;
							cout << "Retire seu produto" << endl;
							cout << "Obrigado" << endl;
							QuantidadeProduto[7] = QuantidadeProduto[7] - 1;
							cout << "\n" << endl;
						}

						//Pagamento com troco
						else if (Pagamento > ValorProduto[7])
						{
							Troco = Pagamento - ValorProduto[7];
							Faturado = Faturado + (Pagamento - Troco);
							cout << "Valor do troco: " << Troco << endl;
							cout << "Retire seu produto" << endl;
							cout << "Obrigado" << endl;
							QuantidadeProduto[7] = QuantidadeProduto[7] - 1;
							cout << "\n" << endl;
						}
					}
					else
						cout << "Produto Indisponivel" << endl;
					    cout << "Pressione 1 para continuar" << endl;
					    cin >> ControlePrincipal;
						cout << "\n" << endl;
				}
				else if (Escolha == 8)
				{
                    //Verifica a quantidade
					if (QuantidadeProduto[8] >= 1 && QuantidadeProduto[8] <= 5)
					{
						cout << "Valor do produto: " << ValorProduto[8] << endl;
						cout << "Insira o dinheiro" << endl;
						cin >> Pagamento;
						cout << "\n" << endl;

						//Verifica o valor do pagamento e caso seja menor que o valor do produto, solicita mais dinheiro
						while (Pagamento < ValorProduto[8])
						{
							cout << "Insira mais dinheiro" << endl;
							cin >> Adicional;
							cout << "\n" << endl;

							Pagamento = Pagamento + Adicional;
						}

						//Pagamento sem troco
						if (Pagamento == ValorProduto[8])
						{
							Troco = 0;
							Faturado = Faturado + (Pagamento - Troco);
							cout << "Valor do troco: " << Troco << endl;
							cout << "Retire seu produto" << endl;
							cout << "Obrigado" << endl;
							QuantidadeProduto[8] = QuantidadeProduto[8] - 1;
							cout << "\n" << endl;
						}

						//Pagamento com troco
						else if (Pagamento > ValorProduto[8])
						{
							Troco = Pagamento - ValorProduto[8];
							Faturado = Faturado + (Pagamento - Troco);
							cout << "Valor do troco: " << Troco << endl;
							cout << "Retire seu produto" << endl;
							cout << "Obrigado" << endl;
							QuantidadeProduto[8] = QuantidadeProduto[8] - 1;
							cout << "\n" << endl;
						}
					}
					else
						cout << "Produto Indisponivel" << endl;
					    cout << "Pressione 1 para continuar" << endl;
					    cin >> ControlePrincipal;
						cout << "\n" << endl;
				}
				else if (Escolha == 9)
				{
				    //Verifica a quantidade
					if (QuantidadeProduto[9] >= 1 && QuantidadeProduto[9] <= 5)
					{
						cout << "Valor do produto: " << ValorProduto[9] << endl;
						cout << "Insira o dinheiro" << endl;
						cin >> Pagamento;
						cout << "\n" << endl;

						//Verifica o valor do pagamento e caso seja menor que o valor do produto, solicita mais dinheiro
						while (Pagamento < ValorProduto[9])
						{
							cout << "Insira mais dinheiro" << endl;
							cin >> Adicional;
							cout << "\n" << endl;

							Pagamento = Pagamento + Adicional;
						}

						//Pagamento sem troco
						if (Pagamento == ValorProduto[9])
						{
							Troco = 0;
							Faturado = Faturado + (Pagamento - Troco);
							cout << "Valor do troco: " << Troco << endl;
							cout << "Retire seu produto" << endl;
							cout << "Obrigado" << endl;
							QuantidadeProduto[9] = QuantidadeProduto[9] - 1;
							cout << "\n" << endl;
						}

						//Pagamento com troco
						else if (Pagamento > ValorProduto[9])
						{
							Troco = Pagamento - ValorProduto[9];
							Faturado = Faturado + (Pagamento - Troco);
							cout << "Valor do troco: " << Troco << endl;
							cout << "Retire seu produto" << endl;
							cout << "Obrigado" << endl;
							QuantidadeProduto[9] = QuantidadeProduto[9] - 1;
							cout << "\n" << endl;
						}
					}
					else
						cout << "Produto Indisponivel" << endl;
					    cout << "Pressione 1 para continuar" << endl;
					    cin >> ControlePrincipal;
						cout << "\n" << endl;
				}
				else if (Escolha == 666)
				{
				  //Menu de opcoes Administrativo
				  cout << "Bem-Vindo ao modo Administrativo" << endl;
				  cout << "Opcoes Administrativas" << endl;
				  cout << "1 - Inventario e Reposicao" << endl;
				  cout << "2 - Faturado" << endl;
				  cout << "3 -Prospeccao de faturamento" << endl;
				  cin >> EscolhaAdmin;
				  cout << "\n" << endl;

				  if (EscolhaAdmin == 1)
				  {
					  //Verifica o estoque da maquina
					  for (i = 0; i <= 9; i++)
					  {
						  //Verifica e especifica o estoque por produto
						  NumeroProduto[i] = i;
						  QuantidadeProduto[i];
						  cout << "Produto: " << NumeroProduto[i] << endl;
						  cout << "Quantidade: " << QuantidadeProduto[i] << endl;
						  
						  //Subtrai a capacidade da maquina pela quantidade restante de produtos
						  Reposicao = CapacidadeMaquina - QuantidadeProduto[i];
						  cout << "Quantidade para repor: " << Reposicao << endl;
						  cout << "\n" << endl;
					  }
				  }
				  else if (EscolhaAdmin == 2)
				  {
					  //Demonstra o faturamento at� o momento
					  cout << "Seu Faturamento ate agora foi de " << Faturado << endl;
					  cout << "\n" << endl;
				  }
				  else if (EscolhaAdmin == 3)
				  {
					  //Verifica produtos na maquina
					  for (i = 0; i <= 9; i++)
					  {
						  NumeroProduto[i] = i;
						  QuantidadeProduto[i];
						  cout << "Prod " << NumeroProduto[i] << endl;
						  cout << "Quantidade: " << QuantidadeProduto[i] << endl;

						  //Multiplica os produtos restantes na maquina por seu valor e exibir a possibilidade de ganho por produto
						  Prospeccao = QuantidadeProduto[i] * ValorProduto[i];
						  cout << "Possibilidade de faturamento atual por produto " << Prospeccao << endl;

						  //Demonstra o valor total que pode ser arrecadado com a venda dos produtos
						  ProspeccaoGeral = ProspeccaoGeral + Prospeccao;
					  }
					  cout << "\n" << endl;
					  cout << "O valor total de Prospeccao e de: " << ProspeccaoGeral << endl;
				  }				  
                }
				else
					cout << "Opcao Invalida" << endl;
			}
		}
		else
			cout << "Opcao Invalida" << endl;

	}
	system("pause");
	return 0;
}