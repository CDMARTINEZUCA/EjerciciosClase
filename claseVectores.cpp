#include <iostream>
using namespace std;

int main(){
    float notas[5] = {4.5,7.9,9.0,8.5,10.0};

    cout<<"La nota es: "<<notas[3]<<endl;
    cout<<"Las notas son:"<<endl;

    for (int i = 0; i < 5 ; i++)
    {
        cout<<notas[i]<<endl;
    }
    

    return 0;
}