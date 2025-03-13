#include <iostream>
#include <string>
#include <vector>

using namespace std;

class item
{
 private:
    string nombreItem;
    string tipoItem;
    int cantidadItem;


public:
    item(string _nombreItem, string _tipoItem, int _cantidadItem)
    {
        nombreItem = _nombreItem;// Guardamos el valos que ingreso el usuario
        tipoItem = _tipoItem;
        cantidadItem = _cantidadItem;
    }

    void funcMostrarInfoInventario()
    {
        cout << nombreItem << endl;
        cout << "Tipo: " << tipoItem << endl;
        cout << "Cantidad: " << cantidadItem << endl;
    }

};

class personaje{

 private:
   string nombrePersonaje;
   vector <item> inventarioPersonaje;
public:
    personaje(string nombrePersonaje){
        nombrePersonaje = nombrePersonaje;
    }

    //Metodo para agregar el item al inventario del personaje
    
    void funcAgregarItemInventario(item paramItem) {
        inventarioPersonaje.push_back(paramItem); //Agregar al vector, pushback hace que se pongan los items en orden hacia abajo.

    }

    void funcMostrarInventario() {

    }
};

int main()
{
    string nombrePersonaje;
    string nombreItem;
    string tipoItem;
    int cantidadItem;

    cout << "ingrese el nombre del personaje" << endl;
    getline(cin, nombrePersonaje);//Leer nombre completo con espacios

    //Crear Obejto Personaje 
    personaje jugador(nombrePersonaje);

    cout << "Nombre del Item: " << endl;
    getline(cin, nombreItem);

    cout << "Tipo: " << endl;
    getline(cin, tipoItem);

    cout << "Cantidad: " << endl;
    cin >> cantidadItem;

    //Enviar información ingresada por el usuario al constructor

    item nuevoItem(nombreItem,tipoItem,cantidadItem);
    nuevoItem.funcMostrarInfoInventario();


    return 0;
}
