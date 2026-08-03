#include<iostream>
using namespace std;
class octalhexa  {

public:

    int valdecimal = 0;
    string vaoctal = "";
    string vhexa = "";

    void pedirOctalHexa(){

        cout << "CONVERSION DE OCTAL A HEXADECIMAL" << endl;
        cout << "Ingrese un valor octal:" << endl;
        cin >> vaoctal;
    }

    void convertirOh(){

        int d = stoi(vaoctal);
        int exponente = 1;

        while (d > 0){

            int valord = d % 10;
            valdecimal = valdecimal + valord * exponente;
            exponente = exponente * 8;
            d = d / 10;
        }

        string hex = "0123456789ABCDEF";

        if (valdecimal == 0){

            cout << "Hexadecimal: 0" << endl;
            return;
        }

        int i = valdecimal;

        while(i > 0){

            int residuo = i % 16;
            vhexa = hex[residuo] + vhexa;
            i = i / 16;
        }

        cout << "El valor hexadecimal es: " << vhexa << endl;
    }
};

int main (){
	octalhexa oah;
	oah.pedirOctalHexa();
	oah.convertirOh();
	return 0;
}