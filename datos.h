//
// Created by Miguel Castaneda on 20/01/2023.
//

#ifndef SORTING_ALGORITHMS_DATOS_H
#define SORTING_ALGORITHMS_DATOS_H

#endif //SORTING_ALGORITHMS_DATOS_H

#include <iostream>
#include <fstream>
#include "algoritmos.h"

using namespace std;

struct Entrada {
    int datoEnt;
} entrada;
int arr[1000000];
int n;

int arr2[100000];
int n2 = 0;

FILE * archivo;
string nombreArchivo;

int readFile(){

    cout<<"Nombre: ";
    cin>>nombreArchivo;

    nombreArchivo += ".txt";

    archivo = fopen(nombreArchivo.c_str(), "r");

    if(archivo == NULL){
        cout<<"Error";
        exit (0);
        //inicio();
    }else{
        cout<<"Abierto correctamente";
    }

    int cn=0;

    for (int i=0; !feof(archivo); i++) {          // Repite hasta que sea el fin del archivo
        fscanf (archivo, "%i", &entrada.datoEnt);   // Lee el numero contenido en el archivo y lo guarda en la estructura
        arr[i]=entrada.datoEnt;                    // El numero contenido en la estructura lo pasa al arreglo "arreglo"
        cn++;                                      // suma 1 al contador de numeros leidos
    }
    //cn--;

    printf("\n\nSe ha generado el arreglo con los datos del archivo de entrada\n\n");
    printf("\n\nLa cantidad de numeros contenidos en el arreglo son:  %i\n\n", cn);

    n=cn;

    fclose(archivo);

    //system("cls");
    return arr[n], n;
}

int readData(){
    int val;
    char enter;
    cout << "Ingrese los valores del arreglo (Enter para terminar): ";
    while (cin >> val) {
        arr2[n2] = val;
        n2++;
        enter = cin.get();
        if (enter == '\n') break;
    }
    /*cin.clear();
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');*/
    cout << "Tamanio del arreglo: " << n2 << endl;

    for(int i = 0; i < n2; i++){
        cout<<arr2[i]<<"\n";
    }

    return arr2[n2], n2;
}