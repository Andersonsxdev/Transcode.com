#include<iostream>
using namespace std;
class binahexa  {

public:

    string vbhexa = "";
    int valordecimal = 0;

    void pedirbinhexa(){

        cout << "CONVERSION DE BINARIO A HEXADECIMAL" << endl;
        cout << "Ingrese un valor binario:" << endl;
        cin >> vbhexa;
    }

    void convertirbh(){

        int d = stoi(vbhexa);
        int exponente = 1;

        while (d > 0) {

            int valord = d % 10;
            valordecimal = valordecimal + valord * exponente;
            exponente = exponente * 2;
            d = d / 10;
        }

        string hexadecimal = "";
        string hex = "0123456789ABCDEF";

        if (valordecimal == 0){

            cout << "Hexadecimal: 0" << endl;
            return;
        }

        int i = valordecimal;

        while(i > 0){

            int residuo = i % 16;
            hexadecimal = hex[residuo] + hexadecimal;
            i = i / 16;
        }

        cout << "El valor hexadecimal es: " << hexadecimal << endl;
    }
};
int main (){
	 binahexa bah;
	 bah.pedirbinhexa();
	 bah.convertirbh();
	 return 0;
}
