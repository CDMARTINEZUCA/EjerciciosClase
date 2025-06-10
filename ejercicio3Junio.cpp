#include <iostream>

float Suma(float numero, float numero2){
    numero += numero2;
    return numero;
}

float Resta(float numero, float numero2){
    numero -= numero2;
    return numero;
}

float Multiplicacion(float numero, float numero2){
    numero *= numero2;
    return numero;
}

float Division(float numero, float numero2){
    if (numero < numero2)
    {
        return numero = 0;
    }
    else
    {
        numero /= numero2;
        return numero;
    }
}

using namespace std;

int main(){
    float num, num2;
    int option;

    cout<<"Ingrese los número a operar"<<endl;
    cout<<"Número 1"<<endl;
    cin>>num;
    cout<<"Número 2"<<endl;
    cin>>num2;

    cout<<"Qué operación desea hacer con esos números?"<<endl;
    cout<<"1. Suma \n2. Resta \n3.Multiplicación \n4.División"<<endl;
    cin>>option;

    switch (option)
    {
    case 1:
        num = Suma(num, num2);

        cout<<"El resultado es: "<<num<<endl;
        break;

    case 2:
        num = Resta(num, num2);

        cout<<"El resultado es: "<<num<<endl;
        break;
    
    case 3:
        num = Multiplicacion(num, num2);

        cout<<"El resultado es: "<<num<<endl;
        break;

    case 4:
        if (Division(num, num2 == 0))
        {
            cout<<"No se puede realizar la división"<<endl;
        }
        else
        {
            num = Division(num, num2);
            cout<<"El resultado es: "<<num<<endl;
        }
        break;

    default:
        cout<<"No es una opción valida"<<endl;
        break;
    }

    return 0;
}