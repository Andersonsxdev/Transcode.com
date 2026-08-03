#include<iostream>
using namespace std;
class hexade  {

public:

    int valdecimal = 0;
    string vahexa = "";

    void pedirvhexa(){

        cout << "CONVERSION DE HEXADECIMAL A DECIMAL" << endl;
        cout << "Ingrese un valor en hexadecimal:" << endl;
        cin >> vahexa;
    }

    void conversionhad(){

        if (vahexa == "0"){

            cout << "Decimal: 0" << endl;
            return;
        }

        int exponente = 1;

        for(int i = vahexa.length() - 1; i >= 0; i--){

            char c = vahexa[i];
            int valor;

            if(c >= '0' && c <= '9'){

                valor = c - '0';
            }

            else if(c >= 'A' && c <= 'F'){

                valor = c - 'A' + 10;
            }

            valdecimal = valdecimal + valor * exponente;
            exponente = exponente * 16;
        }

        cout << "El valor decimal es: " << valdecimal << endl;
    }
};
int main (){
	hexade had;
	had.pedirvhexa();
	had.conversionhad();
	return 0;
}