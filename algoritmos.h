//
// Created by Miguel Castaneda on 21/01/2023.
//

#ifndef SORTING_ALGORITHMS_ALGORITMOS_H
#define SORTING_ALGORITHMS_ALGORITMOS_H
#include <iostream>
#include <bits/stdc++.h> //Libreria para usar Swap
#include <ctime>
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
#endif //SORTING_ALGORITHMS_ALGORITMOS_H

using namespace std;

//Prototipos
void bubbleSort(std::vector<int>& data);
void transpositionPairNones(std::vector<int>& data);
void merge(std::vector<int>& data, int l, int m, int r);
void mergeSort(std::vector<int>& data, int l, int r);

void bubbleSort(std::vector<int>& data) {
    std::vector<int> data2 = data;
    int temp;
    int intercambios = 0;
    for (int i = 0; i < data2.size() - 1; i++) {

        cout << "Iteracion " << i + 1 << ": ";
        for (int j = 0; j < data2.size() - i - 1; j++) {
            if (data2[j] > data2[j + 1]) {
                temp = data2[j];
                data2[j] = data2[j + 1];
                data2[j + 1] = temp;
                intercambios++;
            }
            cout << data2[j] << " ";

        }
        cout << data2[data2.size() - i - 1] << " (" << intercambios << " intercambios)" << endl;
    }

    std::cout << "Sorted data: ";
    for (int i : data2) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    data2.clear();

    cout << "Presione la tecla enter para continuar... ";
    getch();

    system("cls");
}

void transpositionPairNones(std::vector<int>& data){
    std::vector<int> data2 = data;
    int cambiosn=1, cambiosp=1, k=1;

    for (int i=0; i < data2.size(); i++)
    {
        std::cout << data2[i] << " ";
    }
    std::cout<<"\n";

    while(cambiosn>0||cambiosp>0)
    {
        cambiosn=0;
        cambiosp=0;

        for (int i=0; i<= data2.size()-2; i=i+2)
        {
            if (data2[i] > data2[i+1])
            {
                swap(data2[i], data2[i+1]);//Intercambio
                cambiosn+=1;//Acumulador de cambios para la primera pasada en nones
            }
        }

        std::cout<<"N"<<k;
        std::cout<<"    ";
        for (int i=0; i < data2.size(); i++)
        {
            std::cout << data2[i] << " ";
        }
        std::cout<<"("<<cambiosn<<")";
        std::cout<<"\n";

        // Par
        for (int i=1; i<= data2.size()-2; i=i+2)
        {
            if (data2[i] > data2[i+1])
            {
                swap(data2[i], data2[i+1]); //Intercambio
                cambiosp+=1; //Acumulador de cambios para la segunda pasada en pares
            }
        }

        std::cout<<"P"<<k;
        std::cout<<"    ";
        for (int i=0; i < data2.size(); i++)
        {
            std::cout << data2[i] << " ";
        }
        std::cout<<"("<<cambiosp<<")";
        std::cout<<"\n";
        k++;
    }

    cout << "Presione la tecla enter para continuar... ";
    getch();

    system("cls");
}

void merge(std::vector<int>& data, int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    vector<int> L, R;

    for (i = 0; i < n1; i++)
        L.push_back(data[l + i]);
    for (j = 0; j < n2; j++)
        R.push_back(data[m + 1+ j]);

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            data[k] = L[i];
            cout << "Intercambio de " << L[i] << " con " << data[k] << endl;
            i++;
        }
        else
        {
            data[k] = R[j];
            cout << "Intercambio de " << R[j] << " con " << data[k] << endl;
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        data[k] = L[i];
        cout << "Intercambio de " << L[i] << " con " << data[k] << endl;
        i++;
        k++;
    }

    while (j < n2)
    {
        data[k] = R[j];
        cout << "Intercambio de " << R[j] << " con " << data[k] << endl;
        j++;
        k++;
    }
}

void mergeSort(std::vector<int>& data, int l, int r){
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(data, l, m);
        mergeSort(data, m+1, r);

        merge(data, l, m, r);
    }
}