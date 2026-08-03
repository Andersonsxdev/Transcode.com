#include<iostream>
using namespace std;
class hexabinario  {

public:

    int valdecimal = 0;
    string vahexa = "";
    string vbinario = "";

    void pedirHexa(){

        cout << "CONVERSION DE HEXADECIMAL A BINARIO" << endl;
        cout << "Ingrese un valor hexadecimal:" << endl;
        cin >> vahexa;
    }

    void convertirHb(){

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
	hexabinario hab;
	hab.pedirHexa();
	hab.convertirHb();
	return 0;
}