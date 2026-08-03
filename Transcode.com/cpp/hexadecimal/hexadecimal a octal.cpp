#include<iostream>
using namespace std;
class hexaoctal  {

public:

    int valdecimal = 0;
    string vahexa = "";
    string voctal = "";

    void pedirHexaOctal(){

        cout << "CONVERSION DE HEXADECIMAL A OCTAL" << endl;
        cout << "Ingrese un valor hexadecimal:" << endl;
        cin >> vahexa;
    }

    void convertirHo(){

        int exponente = 1;

        for(int i = vahexa.length() - 1; i >= 0; i--){

            char c = toupper(vahexa[i]);
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

        if(valdecimal == 0){

            cout << "Octal: 0" << endl;
            return;
        }

        while(valdecimal > 0){

            int residuo = valdecimal % 8;
            voctal = to_string(residuo) + voctal;
            valdecimal = valdecimal / 8;
        }

        cout << "El valor en octal es: " << voctal << endl;
    }
};
int main (){
	hexaoctal hao;
	hao.pedirHexaOctal();
	hao.convertirHo();
	return 0;
}