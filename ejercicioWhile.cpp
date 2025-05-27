#include <iostream>
using namespace std;

int main(){
    int num = 0, sum[25] = {0}, i = 0;

    while (num >= 0 && i<25)
    {   
        cout<<"Ingrese un número para sumar"<<endl;
        cin>>num;
        if (num < 0)
        {
            break;
        }
        
        sum[i] = num;
        i++;
    }

    i = 0;

    for (int j = 0; j < 10; j++)
    {
        i += sum[j];
    }
    

    cout<<"La suma de los número es: "<<i<<endl;

    return 0;    
}