#include <iostream>

using namespace std;

double porcentagem(int votox, int votoy){
	double result;
	result = 0;


	result = (votox/(double)votoy)*100;
	return result;

}
int main()
{
	int jogadorv[24] = {0}, njogador, qtd = 0, aux = 0;
	double pct, final;

	cout << "Quem foi o melhor jogador? \n\n"<< endl;
	while(1){
		cout << "Numero do jogador: ";
		cout << "\tDigite [0] para sair." << endl;
		cin >> njogador;

		if (njogador == 0){
			break;
		}
		if (njogador > 23){
			cout << "Digite um valor [1-23]" << endl;
		} else {
		jogadorv[njogador]++;
		qtd++;
		}
	}
	cout << "Resultado"<< endl;

	cout << qtd << " votos computados." << endl;


	cout << "Votos do Jogador" << endl;

	for(int i =0; i < 24; i++){
		if (jogadorv[i] != 0){
			if (jogadorv[i] > jogadorv[aux]){
				aux = i;
			}
			pct = porcentagem(jogadorv[i], qtd);
		cout << i << "\t" << jogadorv[i] << "\t" <<  pct << "% [porcento]" << endl;

		}
	}
	final = porcentagem(jogadorv[aux],qtd);

cout << "\n\nO jogador " << aux << ", foi o melhor com " << jogadorv[aux] << " votos. Teve " << final <<  "% [porcento] do total de votos." << endl;

	return 0;
}
