#include <iostream>
using namespace std;

struct Estudiante
{
    int edad;
    string nombre;
    string carnet;
    char genero;
    string carrera;
};

int main(){
    /*Estudiante estudiate1 = {20, "Juan", "00032225", 'M', "Informatica"};
    cout<<"Edad "<<estudiate1.edad<<endl;
    cout<<"Nombre "<<estudiate1.nombre<<endl;
    cout<<"Carnet "<<estudiate1.carnet<<endl;
    cout<<"Genero "<<estudiate1.genero<<endl;
    cout<<"Carrera "<<estudiate1.carrera<<endl;*/


    int cantidad;
    cout<<"Ingrese la cantidad de estudiantes"<<endl;
    cin>>cantidad;

    Estudiante estudiantes[cantidad];

    for (int i = 0; i < cantidad; i++)
    {
        cout<<"Ingrese edad del estudiante "<<i+1<<endl;
        cin>>estudiantes[i].edad;
        cout<<"Ingrese el nombre del estudiante "<<i+1<<endl;
        cin>>estudiantes[i].nombre;
        cout<<"Ingrese el carnet del estudiante "<<i+1<<endl;
        cin>>estudiantes[i].carnet;
        cout<<"Ingrese el genero del estudiante "<<i+1<<endl;
        cin>>estudiantes[i].genero;
        cout<<"Ingrese la carrera del estudiante "<<i+1<<endl;
        cin>>estudiantes[i].carrera;
    }

    for (int j = 0; j < cantidad; j++)
    {
        cout<<"Edad del estudiante "<<j+1<<" "<<estudiantes[j].edad<<endl;
        cout<<"Nombre del estudiante "<<j+1<<" "<<estudiantes[j].nombre<<endl;
        cout<<"Carnet del estudiante "<<j+1<<" "<<estudiantes[j].carnet<<endl;
        cout<<"Genero del estudiante "<<j+1<<" "<<estudiantes[j].genero<<endl;
        cout<<"Carrera del estudiante "<<j+1<<" "<<estudiantes[j].carrera<<endl;

    }
    
    

    return 0;
}