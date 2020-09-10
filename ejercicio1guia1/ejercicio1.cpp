#include <iostream>
#include <string>
using namespace std;

struct Continente{

string Nombre;
string Capital;
int Numh;
int ProEDAD;

};

void informacion(int,Continente[]);
int poblaciontotal(int,Continente[]);


int main(){
    int a =5;
   
    struct Continente continente[a];

informacion (a,continente);
int poblacionttl = poblaciontotal(a,continente);
cout<<poblacionttl;

}
void informacion(int a,Continente *p){

    for(int i=0;i<a;i++){
        cout<<"ingresar el nombre del pais: ";
        getline(cin, p[i].Nombre);
        cout<<"ingresar la capital del pais: ";
        getline(cin,p[i].Capital);
        cin.ignore();
        cout<<"ingresar el numero de habitantes del pais: ";
        cin>>p[i].Numh;
        cout<<"ingresar el promedio de edad pdel pais: ";
        cin>>p[i].ProEDAD;
        cin.ignore();

        cout<<endl;

    }
}

int poblaciontotal(int a,Continente *p){

int suma=0;
for(int i=0;i<a;i++){

    suma+= p[i].Numh;
}


return suma;

}
