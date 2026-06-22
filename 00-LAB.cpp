#include <iostream>
#include <cmath>

using namespace std;
int main() {

    //Hipotenusa de un triangulo
    float a;
    float b;
    float c;

    cout<<"Ingrese el lado A: ";
    cin>> a;

     cout<<"Ingrese el lado B: ";
    cin>> b;

    /*
    a = pow(a, 2);
    b = pow(b, 2);
    c = sqrt(a + b);
    */
   
    c = sqrt(pow(a,2) + pow(b,2));

    cout<<"La hipotenusa es "<<c;

return 0;
}