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
#include "pointer.h"

#ifdef _WIN32
#include <windows.h>
#else
#include <ncurses.h>
#endif

#endif //SORTING_ALGORITHMS_MENU_H

using namespace std;

//Prototipo
void menuAlgoritmos(std::vector<int>& data);
int menu(std::vector<int>& data);

void menuAlgoritmos(std::vector<int>& data){
    //showTime();
    int opcion;
    char temp[10];
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    do {
        setup_cursor_movement();
        (*move_cursor)(50, 1); // Usamos el puntero para mover el cursor
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
                #ifdef _WIN32
                                system("cls");
                #else
                                system("clear");
                #endif
                showTime();
                bubbleSort(data);
                break;
            case 2:
                #ifdef _WIN32
                                system("cls");
                #else
                                system("clear");
                #endif
                showTime();
                transpositionPairNones(data);
                break;
            case 3:
                #ifdef _WIN32
                                system("cls");
                #else
                                system("clear");
                #endif
                showTime();
                mergeSort(data, 0, data.size() - 1);
                cout << "Array ordenado: ";
                for (int i=0; i < data.size(); i++)
                    cout << data[i] << " ";
                cout << endl;
                cout << "Presione la tecla enter para continuar... ";
                getch();

                #ifdef _WIN32
                                system("cls");
                #else
                                system("clear");
                #endif
                break;
            case 4:
                #ifdef _WIN32
                                system("cls");
                #else
                                system("clear");
                #endif
                data.clear();
                menu(data);
                break;
            default:
                cout<<"\033[1;31mIngreso una opcion incorrecta, presione enter para volver a intentar...\033[0m";
                getch();
                #ifdef _WIN32
                                system("cls");
                #else
                                system("clear");
                #endif
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
        setup_cursor_movement();
        (*move_cursor)(50, 1); // Usamos el puntero para mover el cursor
        cout << "Algoritmos Computacionales" << endl;
        showTime();
        (*move_cursor)(60, 2); // Usamos el puntero para mover el cursor
        cout<<"Menu\n";
        (*move_cursor)(50, 3); // Usamos el puntero para mover el cursor
        cout<<"1. Leer Archivo\n";
        (*move_cursor)(50, 4); // Usamos el puntero para mover el cursor
        cout<<"2. Generar Datos\n";
        (*move_cursor)(50, 5); // Usamos el puntero para mover el cursor
        cout<<"3. Ingresar Datos\n";
        (*move_cursor)(50, 6); // Usamos el puntero para mover el cursor
        cout<<"4. Salir\n";
        (*move_cursor)(50, 7); // Usamos el puntero para mover el cursor
        cout<<"Ingrese su opcion: ";
        fgets(temp, 10, stdin);
        opcion = atoi(temp);
        cout<<"\n";
        switch(opcion){
            case 1:
                #ifdef _WIN32
                                system("cls");
                #else
                                system("clear");
                #endif
                showTime();
                data = readFile(data);
                #ifdef _WIN32
                                system("cls");
                #else
                                system("clear");
                #endif
                menuAlgoritmos(data);
                break;
            case 2:
                #ifdef _WIN32
                                system("cls");
                #else
                                system("clear");
                #endif
                showTime();
                randomData(data);
                #ifdef _WIN32
                                system("cls");
                #else
                                system("clear");
                #endif
                menuAlgoritmos(data);
                break;
            case 3:
                #ifdef _WIN32
                                system("cls");
                #else
                                system("clear");
                #endif
                showTime();
                readData(data);
                #ifdef _WIN32
                                system("cls");
                #else
                                system("clear");
                #endif
                menuAlgoritmos(data);
                break;
            case 4:
                exit(0);
            default:
                cout<<"\033[1;31mIngreso una opcion incorrecta, presione enter para volver a intentar...\033[0m";
                getch();
                #ifdef _WIN32
                                system("cls");
                #else
                                system("clear");
                #endif
                break;
        }
    } while (opcion != 4);
}