#include <iostream>
using namespace std;

int main(){
    float horas, precioHoras, salario;
    string nm;
    int seguir = 1;

    while (seguir == 1)
    {
        cout<<"Ingrese sus horas trabajadas"<<endl;
        cin>>horas;
        cout<<"Ingrese el precio de las horas"<<endl;
        cin>>precioHoras;
        cout<<"Ingrese su nombre"<<endl;
        cin>>nm;

        if (horas <= 44)
        {
            salario = horas * precioHoras;
        }
        else
        {
            salario = 44 * precioHoras + 1.5 * precioHoras * (horas-44);
        }

        cout<<nm<<" su salario es de $"<<salario<<endl;

        cout<<"¿Desea ingresar más datos? \n1.Si \n2.No"<<endl;
        cin>>seguir;

        switch (seguir)
        {
        case 1:
            break;
        case 2:
            seguir = 2;
            break;
        
        default:
        cout<<"No es una opción valida";
        seguir = 2;
            break;
        }
    }
      

    return 0;
}