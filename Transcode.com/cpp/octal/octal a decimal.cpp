#include<iostream>
using namespace std;
class ocade {

public :

    int valdecimal=0;
    string vaoctal="";

    void pedirvoctal(){

        cout <<" CONVERSION DE OCTAL A DECIMAL " << endl;
        cout<<"Ingrese un valor en octal:"<<endl;
        cin>>vaoctal;
    }

    void conversionoad(){

        if (vaoctal == "0") {

            cout << "Decimal: 0" << endl;
            return;	
        }

        int d = stoi(vaoctal);
        int exponente = 1;

        while (d > 0) {

            int valord = d % 10;
            valdecimal = valdecimal + valord * exponente;
            exponente = exponente * 8;
            d = d / 10;
        }

        cout << "El valor decimal es :" << valdecimal << endl;
    }
};
int main (){
	ocade oad;
	oad.pedirvoctal();
	oad.conversionoad();
	return 0;
};