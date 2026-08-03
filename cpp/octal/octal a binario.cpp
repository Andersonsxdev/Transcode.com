#include<iostream>
using namespace std;
class octalbinario  {

public:

    int valdecimal = 0;
    string vaoctal = "";
    string vbinario = "";

    void pedirOctal(){

        cout << "CONVERSION DE OCTAL A BINARIO" << endl;
        cout << "Ingrese un valor octal:" << endl;
        cin >> vaoctal;
    }

    void convertirOb(){

        int d = stoi(vaoctal);
        int exponente = 1;

        while (d > 0){

            int valord = d % 10;
            valdecimal = valdecimal + valord * exponente;
            exponente = exponente * 8;
            d = d / 10;
        }

        if (valdecimal == 0){

            cout << "Binario: 0" << endl;
            return;
        }

        int i = valdecimal;

        while(i > 0){

            int residuo = i % 2;
            vbinario = to_string(residuo) + vbinario;
            i = i / 2;
        }

        cout << "El valor en binario es: " << vbinario << endl;
    }
};
int main (){
	octalbinario  oab;
	oab.pedirOctal();
	oab.convertirOb();
	return 0;
}