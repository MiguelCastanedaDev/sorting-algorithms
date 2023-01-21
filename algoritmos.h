//
// Created by Miguel Castaneda on 21/01/2023.
//

#ifndef SORTING_ALGORITHMS_ALGORITMOS_H
#define SORTING_ALGORITHMS_ALGORITMOS_H
#include "iostream"
#include <bits/stdc++.h> //Libreria para usar Swap
#include <ctime>
#endif //SORTING_ALGORITHMS_ALGORITMOS_H

using namespace std;

void bubbleSort(int arreglo[], int n);

int menuAlgoritmos(int arr[],int n);

int menuAlgoritmos(int arr[],int n){
    int opcion;

    do {
        cout<<"1. Metodo Burbuja\n";
        cout<<"2. Salir\n";
        cout<<"Opcion: ";
        cin>>opcion;
        cout<<"\n";
        switch (opcion) {
            case 1:
                bubbleSort(arr, n);
                break;
            default:
                cout<<"adios";
                break;
        }
    } while (opcion != 5);
}

void bubbleSort(int arreglo[], int n){

    int aux=0;
    cout<<"\n\nOrdenamiento de datos por el metodo de burbuja\n";

    for(int j=0;j<n;j++){//9

        for(int i=j+1;i<n;i++){
                //intercambio
                if(arreglo[j]>arreglo[i]){
                    aux=arreglo[j];
                    arreglo[j]=arreglo[i];
                    arreglo[i]=aux;
                }
            }
        }
        for(int i=0; i<n; i++){
            cout<<arreglo[i]<<" ";
        }
        cout<<"\n";
}