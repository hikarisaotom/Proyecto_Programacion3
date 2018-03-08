
#include "Personaje.h"
#include "Normal.h"
#include "Especial.h"
#include "Ataque.h"
#include "DataPersonaje.h"
#include <iostream>
#include <string>

using namespace std;


int main(){
    cout<< "Entro" << endl;
    DataPersonaje * P= new DataPersonaje();
    string file = "Personajes.txt";
     P->getPersonajes(file);
    cout<<"RUN?";
    return 0;
}
