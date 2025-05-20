#include <iostream>
using namespace std;

int main(){
    int num;

    cout<<"Ingrese un número entero"<<endl;
    cin>>num;

    for (int i = 2; i < num; i+=2)
    {
        cout<<i<<endl;
    }
    
    return 0;
}