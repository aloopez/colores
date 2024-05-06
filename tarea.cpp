//tarea

#include <iostream>
using namespace std;

int main () {

char letra;
cout << "ingrese una letra" << endl;
cin >> letra;

if (letra == 'R') {
    cout << "Rojo" << endl;
}
else if (letra == 'Y') {
    cout << "Amarillo" << endl;
}
else if (letra == 'B')
{
    cout << "Azul" << endl;
}
else if (letra == 'W')
{
    cout << "blanco" << endl;
}
else if (letra == 'K')
{
    cout << "Negro" << endl;
}
else if (letra == 'C')
{
    cout << "Cian" << endl;
}
else if (letra == 'G')
{
    cout << "Verde" << endl; 
}
else cout << "Color desconocido" << endl;



return 0;

}
