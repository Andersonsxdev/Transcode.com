#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
class binaoctal  {

public:

    string vboctal = "";
    int valordecimal = 0;

    void pedirbinoctal(){

        cout << "CONVERSION DE BINARIO A OCTAL" << endl;
        cout << "Ingrese un valor binario:" << endl;
        cin >> vboctal;
    }

    void convertirbo(){

        int d = stoi(vboctal);
        int exponente = 1;

        while (d > 0) {

            int valord = d % 10;
            valordecimal = valordecimal + valord * exponente;
            exponente = exponente * 2;
            d = d / 10;
        }

        string octal = "";

        if (valordecimal == 0){

            cout << "Octal: 0" << endl;
            return;
        }

        int i = valordecimal;

        while(i > 0){

            int residuo = i % 8;
            octal = to_string(residuo) + octal;
            i = i / 8;
        }

        cout << "El valor en octal es: " << octal << endl;
    }
};
int main (){
	binaoctal bac;
	bac.pedirbinoctal();
	bac.convertirbo();
	return 0;
}
