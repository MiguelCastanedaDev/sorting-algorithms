#include <iostream>
using namespace std;

int main() {
    cout << "\t\t\t\t\tAlgoritmos Computacionales" << endl;
    int opcion;

    do {
        cout<<"\t\t\t\t\t1. Leer Archivo\n";
        cout<<"\t\t\t\t\t2. Metodo Burbuja\n";
        cout<<"\t\t\t\t\t3. Transposcion Por Pares y Nones\n";
        cout<<"\t\t\t\t\t4. Quicksort\n";
        cout<<"\t\t\t\t\t5. Salir\n";
        cout<<"\t\t\t\t\tIngrese su opcion: ";
        cin>>opcion;
        cout<<"\n";
        switch (opcion) {
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            default:
                cout<<"\t\t\t\t\tError\n";
                break;
        }
    } while (opcion != 5);

    system("pause");
    return 0;
}
