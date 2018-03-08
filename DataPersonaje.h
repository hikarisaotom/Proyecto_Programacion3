#ifndef DATAPERSONAJE_H
#define DATAPERSONAJE_H
#include "Personaje.h"
#include <vector>
#include <string> 

using namespace std;

class DataPersonaje{
    private:
        Personaje* parsePersonaje(string);
        
    public:
    /*Retorna los personajes en el archivo indicado como parametro*/
    vector <Personaje *>getPersonajes(string);
    DataPersonaje();
    ~DataPersonaje();


};
#endif