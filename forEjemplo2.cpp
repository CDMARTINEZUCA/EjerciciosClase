#include<iostream>
using namespace std;

int main(){
    int n, primo = 1, mod;

    cout<<"Ingrese un número entero"<<endl;
    cin>>n;

    for (int i = n-1; i >= 2; i--)
    {
        mod = n%i;
        
        if (mod == 0)
        {
            cout<<"No es primo"<<endl;
            primo = 0;
            break;
        }
    }

    if (primo == 1)
    {
        cout<<"Es primo"<<endl;
    }
    
    return 0;
}