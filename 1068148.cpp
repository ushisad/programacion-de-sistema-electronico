

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float base, altura, radio;
    float aRectangulo, aTriangulo, vCono, vCilindro;
    
    cout << "digame la base en metros: ";
    cin  >> base;
    cout << "digame la altura en metros: ";
    cin  >> altura;
    cout << "digame el radio en metros: ";
    cin  >> radio;
    
    aRectangulo = base * altura;
    aTriangulo = (base * altura)/2;
    vCilindro = 3.141592659589 * pow(radio, 2) * altura;
    vCono = (3.141592659589 * pow(radio, 2) * altura)/3;
    
    cout << "El area del rectangulo es: " << aRectangulo << "m^2" << endl;
    cout << "El area del triangulo es: " << aTriangulo << "m^2" <<endl;
    cout << "El volumen del cilindro es: " << vCilindro << "m^3" << endl;
    cout << "El volumen del cono es: " << vCono << "m^3" << endl;
    
    return 0;
}
