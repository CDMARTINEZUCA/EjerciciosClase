#include <iostream>
using namespace std;

float CalculoCUM(){
    float nota[5];
    int uv[5];
    for (int i = 0; i < 4; i++)
    {
        cout<<"Ingrese la nota de la "<<i+1<<"° materia"<<endl;
        cin>>nota[i];
        cout<<"Ingrese las UV de la "<<i+1<<"° materia"<<endl;
        cin>>uv[i];
        nota[5] += nota[i];
        uv[5] += uv[i];
    }

    nota[5] /= uv[5];

    return nota[5];    
}

struct Estudiante
{
    string nombre;
    int edad;
    string carnet;
    string carrera;
    char genero;
};

int main(){
    float cum;

    cum = CalculoCUM();

    if (cum >= 7)
    {
        Estudiante estudiante;

        cout<<"Ingrese sus datos"<<endl;
        cout<<"Nombre"<<endl;
        cin>>estudiante.nombre;
        cout<<"Edad"<<endl;
        cin>>estudiante.edad;
        cout<<"Carnet"<<endl;
        cin>>estudiante.carnet;
        cout<<"Carrera"<<endl;
        cin>>estudiante.carrera;
        cout<<"Genero"<<endl;
        cin>>estudiante.genero;

        cout<<estudiante.nombre<<"Su CUM es de: "<<cum<<endl;
    }
    else
    {
        cout<<"Su CUM es de "<<cum<<"No aplica"<<endl;
    }
    
    return 0;
}
