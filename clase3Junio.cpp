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

    cout <<"Operaciones"<<endl;
    cout<<"Ingrese el primer número"<<endl;
    cin>>num;

    cout<<"Ingrese el segundo número"<<endl;
    cin>>num2;

    num = Suma(num, num2);

    cout<<"El resultado es: "<<num<<endl;

    cout<<"Se hara una segunda suma"<<endl;
    cout<<"Ingrese el primer número"<<endl;
    cin>>num;

    cout<<"Ingrese el segundo número"<<endl;
    cin>>num2;

    num = Suma(num, num2);
    cout<<"El resultado es: "<<num<<endl;

    cout<<"Se hara una resta"<<endl;
    cout<<"Ingrese el primer número"<<endl;
    cin>>num;

    cout<<"Ingrese el segundo número"<<endl;
    cin>>num2;

    num = Resta(num, num2);
    cout<<"El resultado es: "<<num<<endl;

    cout<<"Se hara una multiplicación"<<endl;
    cout<<"Ingrese el primer número"<<endl;
    cin>>num;

    cout<<"Ingrese el segundo número"<<endl;
    cin>>num2;

    num = Multiplicacion(num, num2);
    cout<<"El resultado es: "<<num<<endl;

    cout<<"Se hara una división"<<endl;
    cout<<"Ingrese el primer número"<<endl;
    cin>>num;

    cout<<"Ingrese el segundo número"<<endl;
    cin>>num2;

    if (Division(num, num2 == 0))
    {
        cout<<"No se puede realizar la división"<<endl;
    }
    else
    {
        num = Division(num, num2);
        cout<<"El resultado es: "<<num<<endl;
    }
    return 0;
}