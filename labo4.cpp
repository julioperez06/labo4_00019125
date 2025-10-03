#include <iostream>
using namespace std;
int main(void) // debe adivinar el numero secreto que es 10
{
    int numsecreto = 0; // se inicializa variables

    do
    {
        cout << "ingresa un numero entre -100 y 100" << endl;
        cin >> numsecreto;

        if (numsecreto > 10)
        {
            cout << " baja mas, vos podes" << endl;
        }

        else if (numsecreto < 10)
        {
            cout << "sube un poco mas" << endl;
        }

    } while (numsecreto != 10);

    return 0;
}