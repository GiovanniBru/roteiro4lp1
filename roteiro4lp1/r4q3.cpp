#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

double porcentagem(int x, int i){
    double pct;
    pct = 0;

    pct = ((x/(double)i)*100);
    return pct;
}

int main(){
    int x, n, i, lado[7] = {0};
    int aux = 0,ld = 1;
    double result;
    result = 0;

    srand(time(0));
    cout << "Quantas vezes deseja rolar o dado?" << endl << ">> ";
    cin >> n;

    for(i = 0; i < n; i++){
        x = (rand() % 6)+1;
        cout << "Lancando dado..." << endl;
        lado[x]++;


    }

    cout << "\nO dado rolou " << i << " vez(es)";

    for(aux = 1, ld = 1; aux <= n, ld <= n; aux++, ld++){
        result = porcentagem(lado[aux],i);
        cout << endl;
        cout << "O Lado " << ld <<" apareceu " << lado[aux] << " vezes." << endl;
        cout << result << "% do total" << endl;
    }


    return 0;
}
