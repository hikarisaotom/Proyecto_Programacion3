//Metodo sets ade gets

#include "Personaje.h"
#include "Normal.h"
#include "Especial.h"
#include "Ataque.h"
#include <iostream>
#include <string>

using namespace std;

//Cosntructor 1
Personaje::Personaje(string nombre,int HP,Normal ataqueNormal,Especial ataqueEspecial,int defensa){
    this->nombre=nombre;
    this->HP=HP;
    this->ataqueNormal=ataqueNormal;
    this->ataqueEspecial=ataqueEspecial;
    this->defensa=defensa;
}//Fin constructor

//Constructor2
Personaje::Personaje(){

}//Fin constructor sencillo

string Personaje::getNombre(){
    return nombre;
}

void Personaje:: setNombre(string nombre){

    this->nombre=nombre;

}

int Personaje::getHP(){
    return HP;
}

void Personaje:: setHP(int HP){

    this->HP=HP;

}

Normal Personaje::getAtaqueNormal(){
    return ataqueNormal;
}

void Personaje:: setAtaqueNormal(Normal ataqueNormal){

    this->ataqueNormal=ataqueNormal;

}

Especial Personaje::getAtaqueEspecial(){
    return ataqueEspecial;
}

void Personaje:: setAtaqueEspecial(Especial ataqueEspecial){

    this->ataqueEspecial=ataqueEspecial;

}

int Personaje::getDefensa(){
    return defensa;
}

void Personaje:: setDefensa(int defensa){

    this->defensa=defensa;

}

void Personaje:: poderEspecial(){
    cout<<"No deberia estar";
}

Personaje::~Personaje(){

    cout<<"La instancia de Personaje fue eliminada";

}