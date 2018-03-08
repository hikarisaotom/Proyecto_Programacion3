//Personaje
//Bienvenido
#include <string>
#include <iostream>
#include "Normal.h"
#include "Especial.h"
#include "Ataque.h"

using namespace std;

#ifndef PERSONAJE_H
#define PERSONAJE_H

//Inicio clase
class Personaje
{

  //Atributos
private:
  string nombre;
  int HP;
  int defensa;
  Normal ataqueNormal;
  Especial  ataqueEspecial;

  //metodos publicos
public:
  //prototipos de metodos
  //constructor
  Personaje();
  Personaje(string ,int,Normal ,Especial ,int );

  //metodos accersores / mutadores
  string getNombre();
  void setNombre(string);
  int getHP();
  void setHP(int);
  Normal getAtaqueNormal();
  void setAtaqueNormal(Normal);
  Especial getAtaqueEspecial();
  void setAtaqueEspecial(Especial);
  int getDefensa();

  void setDefensa(int);
  int getPoderEspecial();
  void setPoderEspecial(int);
  //Metodo poder especial
  virtual void poderEspecial()=0;

  //Destructor
  ~Personaje();

}; //Fin de la clase

#endif