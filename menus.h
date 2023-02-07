//
// Created by Miguel Castaneda on 20/01/2023.
//

#ifndef SORTING_ALGORITHMS_MENU_H
#define SORTING_ALGORITHMS_MENU_H

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <conio.h>
#include <string>
#include <random>
#include <ctime>
#include <cctype>
#include <iomanip>
#include <thread>
#include <atomic>
#include <windows.h>
#include <unistd.h>
#include "algoritmos.h"
#include "datos.h"
#include "tiempo.h"

#endif //SORTING_ALGORITHMS_MENU_H

using namespace std;

//Prototipo
void menuAlgoritmos(std::vector<int>& data);
int menu(std::vector<int>& data);

void menuAlgoritmos(std::vector<int>& data){
    //showTime();
    int opcion=0;
    char temp[10];
    do {
        std::cout << "\033[1;50H";
        cout << "Algoritmos Computacionales" << endl;
        showTime();
        std::cout << "\033[2;44H";
        cout<<"Algoritmos De Ordenamiento Disponibles\n";
        std::cout << "\033[3;50H";
        cout<<"1. Metodo Burbuja\n";
        std::cout << "\033[4;50H";
        cout<<"2. Transposicion Por Pares y Nones\n";
        std::cout << "\033[5;50H";
        cout<<"3. Merge Sort\n";
        std::cout << "\033[6;50H";
        cout<<"4. Regresar\n";
        std::cout << "\033[7;50H";
        cout<<"Opcion: ";
        fgets(temp, 10, stdin);
        opcion = atoi(temp);
        cout<<"\n";
        switch (opcion) {
            case 1:
                system("cls");
                showTime();
                bubbleSort(data);
                break;
            case 2:
                system("cls");
                showTime();
                transpositionPairNones(data);
                break;
            case 3:
                system("cls");
                showTime();
                mergeSort(data, 0, data.size() - 1);
                cout << "Array ordenado: ";
                for (int i=0; i < data.size(); i++)
                    cout << data[i] << " ";
                cout << endl;
                cout << "Presione la tecla enter para continuar... ";
                getch();

                system("cls");
                break;
            case 4:
                system("cls");
                data.clear();
                menu(data);
                break;
            default:
                cout<<"\033[1;31mIngreso una opcion incorrecta, presione enter para volver a intentar...\033[0m";
                getch();
                system("cls");
                break;
        }
    } while (opcion != 4);
    system("cls");
}

int menu(std::vector<int>& data){
    //cout << "\033[1;50H";
    //showTime()
    int opcion;
    char temp[10];
    //fflush(stdout);
    //cout << "\033[2;50H";
    do {
        std::cout << "\033[1;50H";
        cout << "Algoritmos Computacionales" << endl;
        showTime();
        std::cout << "\033[2;61H";
        cout<<"Menu\n";
        std::cout << "\033[3;50H";
        cout<<"1. Leer Archivo\n";
        std::cout << "\033[4;50H";
        cout<<"2. Generar Datos\n";
        std::cout << "\033[5;50H";
        cout<<"3. Ingresar Datos\n";
        std::cout << "\033[6;50H";
        cout<<"4. Salir\n";
        std::cout << "\033[7;50H";
        cout<<"Ingrese su opcion: ";
        fgets(temp, 10, stdin);
        opcion = atoi(temp);
        cout<<"\n";
        switch(opcion){
            case 1:
                system("cls");
                showTime();
                data = readFile(data);
                system("cls");
                menuAlgoritmos(data);
                break;
            case 2:
                system("cls");
                showTime();
                randomData(data);
                system("cls");
                menuAlgoritmos(data);
                break;
            case 3:
                system("cls");
                showTime();
                readData(data);
                system("cls");
                menuAlgoritmos(data);
                break;
            case 4:
                exit(0);
            default:
                cout<<"\033[1;31mIngreso una opcion incorrecta, presione enter para volver a intentar...\033[0m";
                getch();
                system("cls");
                break;
        }
    } while (opcion != 4);
}