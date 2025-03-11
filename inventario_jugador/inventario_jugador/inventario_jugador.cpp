#include <iostream>
#include <string>

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


int main()
{
    string nombrePersonaje;
    string nombreItem;
    string tipoItem;
    int cantidadItem;

    cout << "ingrese el nombre delpersonaje" << endl;
    getline(cin, nombrePersonaje);//Leer nombre completo con espacios

    cout << "Nombre del Item: " << endl;
    getline(cin, nombreItem);

    cout << "Tipo: " << endl;
    getline(cin, tipoItem);

    cout << "Cantidad: " << endl;
    cin >> cantidadItem;

    //Enviar información ingresada por el usuario al constructor

    cout << nombrePersonaje << " ha sido creado" << endl;

    return 0;
}
