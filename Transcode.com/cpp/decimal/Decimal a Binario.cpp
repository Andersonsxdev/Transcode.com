#include<iostream>
using namespace std;

class conversion {
public:
    int vendicmal;

    void vdecimal(){
    	//==============================
// Conversión de Decimal a Binario
//==============================
        cout<<"CONVERSION DE DECIMAL A BINARIO" <<endl;
        cout << "Ingrese el valor decimal :" << endl;
        cin >> vendicmal;
    }
};

class binario : public conversion {
public:
    string vbinario = "";

    void pedirDecimal(){
        vdecimal();
    }

    void convertir(){

        if (vendicmal == 0) {
            cout << "Binario: 0" << endl;
            return;
        }

        int i = vendicmal;

        while (i > 0) {

            int residuo = i % 2;
            vbinario = to_string(residuo) + vbinario;
            i = i / 2;
        }

        cout << "El valor en binario es : " << vbinario << endl;
    }
};
int main(){
	binario b;
	b.pedirDecimal();
	b.convertir();
	return 0;
}
