#ifndef TESTACALCULADORA_H_
#define TESTACALCULADORA_H_
#include "Calculadora.h"

class TestaCalculadora{
    private:
        Calculadora Objeto;
    public:
        void menu();
};

void TestaCalculadora::menu(){
    double entrada;
    int alt;
    int flag;
    double result;
    do{
        try{
            cout << "Digite dois numeros: ";
            cin >> entrada;
            Objeto.setA(entrada);
            cin >> entrada;
            Objeto.setB(entrada);

            do{
                cout << "Escolha uma opcao: \n";
                cout << "1 - Soma\n";
                cout << "2 - Subtracao\n";
                cout << "3 - Multiplicacao\n";
                cout << "4 - Divisao\n";
                cout << "5 - Encerrar programa\n";
                cin >> alt;
            }while(alt <1 || alt>5);
            switch(alt){
                case 1:
                    result = Objeto.soma();
                    break;
                case 2:
                    result = Objeto.subtracao();
                    break;
                case 3:
                    result = Objeto.multiplicacao();
                    break;
                case 4:
                    if (Objeto.getB() == 0){
                        throw 1;
                    }
                    result = Objeto.divisao();
                    break;
                case 5:
                    cout << "Tem certeza que deseja encerrar?\n";
                    throw 2;
            }
            cout << "Resultado: " << result << "\n";
        }
        catch (int erro){
            if (erro == 1){
                cout << "Erro: Divisao por zero\n";
            }
        }
        cout << "Insira 0 para encerrar\n";
        cin >> flag;
    }while(flag !=0);
}

#endif