#include "DataPersonaje.h"
#include "Mago.h"
#include "Brute.h"
#include "Assassin.h"
#include <fstream>
using namespace std;

DataPersonaje::DataPersonaje()
{
}

DataPersonaje::~DataPersonaje()
{
}
Personaje *DataPersonaje::parsePersonaje(string linea)
{
    /*tipo,nombre,hp,defensa,especia;*/
    if (linea.size() < 10 || linea == ".")
    {
        //cout << "El error" << endl;
        return NULL;
    }

    vector<string> temp;
    int tipo, HP, Defensa, Especial;
    string Nombre;
    string acum = "";
    Personaje *retval;
    for (int i = 0; i < linea.size(); i++)
    {
        if (linea[i] != ',' && linea[i] != ' ')
        {
            acum += linea[i];
        }
        else
        {
            temp.push_back(acum);
            acum = "";
        }
    }
    if (temp.size() >= 5)
    {
        tipo = stoi(temp[0]);
        Nombre = temp[1];
        HP = stoi(temp[2]);
        Defensa = stoi(temp[3]);
        Especial = stoi(temp[4]);
        //cout <<"SIN CASTEAR: " <<"NOmbre" << temp[1] << " Tipo: " << temp[0] << " HP " << temp[2] << "Defensa " << temp[3] << " Especial" << temp[4] << endl;
    }
    switch (tipo)
    {
    case 100:
    { //mago
        cout << "SE CREA UN MAGO" << endl;
        retval = new Mago();
        break;
    }
    case 200:
    { //brute
        cout << "Se Crea un Brute" << endl;
        retval = new Brute();
        break;
    }
    case 300:
    { //assasin
        cout << "Se creaa un Assasin" << endl;
        retval = new Assassin();
        break;
    }
    }
    cout << "NOmbre" << Nombre << " Tipo: " << tipo << " HP " << HP << "Defensa " << Defensa << " Especial" << Especial << endl;

    return retval;
}

vector<Personaje *> DataPersonaje::getPersonajes(string file)
{
    vector<Personaje *> retval;
    //Abrir el archivo.
    ifstream personajes(file.c_str());
    //mientras hay lineas en el archivo.
    if (personajes.is_open())
    {
        while (!personajes.eof())
        {
            //leer una linea.
            string linea;
            getline(personajes, linea);
            if (linea == ".")
            {
                cout << "El error, entra al break" << endl;
                break;
            }
            //parsear la linea y agregar al vector.
            Personaje *leido = parsePersonaje(linea);
            //TODO: Validar
            retval.push_back(leido);
        }
        //cerrar el archivo.
        personajes.close();
    }
    //retornar el vector.
    return retval;
}
