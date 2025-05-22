#include <iostream>
using namespace std;

int main(){
    float notas[5];
    
    cout<<"Ingrese 5 notas"<<endl;

    for (int i = 0; i < 5; i++)
    {
        cout<<"Ingrese la nota "<<i+1<<endl;
        cin>>notas[i];
    }

    cout<<"Las notas ingresadas son:"<<endl;

    for (int j = 0; j < 5; j++)
    {
        cout<<notas[j]<<endl;
    }
    
    cout<<"Notas al revez"<<endl;
    
    for (int k = 4; k >=0; k--)
    {
        cout<<notas[k]<<endl;
    }
    
    
    return 0;
}