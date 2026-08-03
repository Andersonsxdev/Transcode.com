#include<iostream>
using namespace std;
class daHexadecimal  {

public:

    string vhex = "";
    int vde;

    void pedirvde(){

        cout << "CONVERSION DE DECIMAL A HEXADECIMAL" << endl;
        cout << "Ingrese el valor decimal:" << endl;
        cin >> vde;
    }

    void convertirdah(){

        string hex = "0123456789ABCDEF";

        if (vde == 0){

            cout << "Hexadecimal: 0" << endl;
            return;
        }

        int i = vde;

        while(i > 0){

            int residuo = i % 16;
            vhex = hex[residuo] + vhex;
            i = i / 16;
        }

        cout << "El valor en hexadecimal es: " << vhex << endl;
    }
};
int main () {
	daHexadecimal dah;
	dah.pedirvde();
	dah.convertirdah();
	return 0;
}