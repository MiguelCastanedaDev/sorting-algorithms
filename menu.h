//
// Created by Miguel Castaneda on 20/01/2023.
//

#ifndef SORTING_ALGORITHMS_MENU_H
#define SORTING_ALGORITHMS_MENU_H

#include <iostream>
#include <conio.h>
#include "datos.h"

#endif //SORTING_ALGORITHMS_MENU_H

using namespace std;

void menu(){

    cout << "\033[1;50H";
    cout << "Algoritmos Computacionales" << endl;
    int opcion;
    cout << "\033[2;50H";
    do {
        cout<<"1. Leer Archivo\n";
        cout<<"2. Ingresar Datos\n";
        cout<<"3. Salir\n";
        cout<<"Ingrese su opcion: ";
        cin>>opcion;
        cout<<"\n";
        switch (opcion) {
            case 1:
                readFile();
                menuAlgoritmos(arr, n);
                break;
            case 2:
                readData();
                menuAlgoritmos(arr2, n2);
                break;
            default:
                cout<<"\t\t\t\t\tError\n";
                cout<<"\nPresiona un boton para elegir de nuevo\n";
                getch();
                //system("cls");
                menu();
        }
    } while (opcion != 3);
}