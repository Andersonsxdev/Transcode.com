#include <iostream>
using namespace std;
class Octalad {

public:

    void mesaje (){

        cout<<"CONVERSION DE DECIMAL A OCTAL"<<endl;
    }

    string voctal = "";
    int vdo;

    void pedirvdo(){

        cout<<"Ingrese el valor en decimal" << endl;
        cin>>vdo;
    }

    void convertirdo(){

        if (vdo == 0) {

            cout << "Octal: 0" << endl;
            return;
        }

        int i = vdo;

        while (i > 0) {

            int residuo = i % 8;
            voctal = to_string(residuo) + voctal;
            i = i / 8;
        }

        cout << "El valor en octal es: " << voctal << endl;
    }	
};
int main (
){
	Octalad od;
	od.mesaje ();
	od.pedirvdo();
	od.convertirdo();
	return 0;
}
