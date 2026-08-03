#include<iostream>
using namespace std;
class binade  {

public :	

    string vbinario="";
    int valordecimal = 0;

    void pedirvbin(){

        cout <<" CONVERSION DE BINARIO A DECIMAL " << endl;
        cout<<"Ingrese un valor en binario:"<<endl;
        cin>>vbinario;
    }

    void cambio(){

        if (vbinario == "0") {

            cout << "Decimal: 0" << endl;
            return;	
        }

        int d = stoi(vbinario);
        int exponente = 1;

        while (d > 0) {

            int valord = d % 10;
            valordecimal = valordecimal + valord * exponente;
            exponente = exponente * 2;
            d = d / 10;
        }

        cout << "El valor decimal es :" << valordecimal << endl;
    }
};
int main (){
	binade bad;
	bad.pedirvbin();
	bad.cambio();
	return 0;
}
