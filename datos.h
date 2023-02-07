//
// Created by Miguel Castaneda on 20/01/2023.
//

#ifndef SORTING_ALGORITHMS_DATOS_H
#define SORTING_ALGORITHMS_DATOS_H
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
//#include "algoritmos.h"
//#include "menus.h"
#endif //SORTING_ALGORITHMS_DATOS_H

using namespace std;

//Prototipos
std::vector<int> readFile(std::vector<int>& data);
std::vector<int> randomData(std::vector<int>& data);
std::vector<int> readData(std::vector<int>& data);

std::vector<int> readFile(std::vector<int>& data) {

    std::string fileName;
    char *endptr;
    std::cout << "\033[33m*Nota: El arreglo puede contener caracteres, pero estos se ordenaran de acuerdo a su valor en el codigo ASCII\033[0m"<<endl;
    std::cout << "Enter the name of the text file: ";
    std::cin >> fileName;
    fileName += ".txt";
    std::ifstream file(fileName);
    //std::vector<int> data;
    if (file.is_open()) {
        std::string line;
        while (getline(file, line)) {
            std::istringstream iss(line);
            std::string word;
            while (iss >> word) {
                int number = strtol(word.c_str(), &endptr, 10);
                if (isdigit(word[0])) {
                    data.push_back(stoi(word));
                } else if (*endptr == '\0') {
                    data.push_back(number);
                } else {
                    for (char c : word) {
                        data.push_back((int)c);
                    }
                }
            }
        }
        file.close();
    } else {
        std::cout << "Unable to open file." << std::endl;
    }

    std::cout << "Data read from file: ";
    for (int i : data) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    //menuAlgoritmos(data);
    cout << "Presione la tecla enter para continuar... ";
    getch();

    system("cls");
    return data;
}

std::vector<int> randomData(std::vector<int>& data) {
    int numData;
    std::cout << "Enter the number of random data you want to create: ";
    std::cin >> numData;

    //std::vector<int> data;
    std::mt19937 generator(std::random_device{}());
    std::uniform_int_distribution<int> distribution(0, 100);

    for (int i = 0; i < numData; ++i) {
        int randomNumber = distribution(generator);
        if (randomNumber % 2 == 0) {
            data.push_back(randomNumber);
        } else {
            char randomCharacter = (char)('A' + randomNumber % 26);
            data.push_back((int)randomCharacter);
        }
    }

    std::cout << "Random data created: ";
    for (int i : data) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    cout << "Presione la tecla enter para continuar... ";
    getch();

    system("cls");
    return data;
}

std::vector<int> readData(std::vector<int>& data) {
    string val;
    char *endptr;
    cout << "\033[33m*Nota: El arreglo puede contener caracteres, pero estos se ordenaran de acuerdo a su valor en el codigo ASCII\033[0m"<<endl;
    cout << "Ingrese los valores del vector (Enter para terminar): ";
    while (cin >> val) {
        std::istringstream iss(val);
        std::string word;
        while (iss >> word) {
            int number = strtol(val.c_str(), &endptr, 10);
            if (isdigit(word[0])) {
                size_t found = val.find(".");
                if (found != string::npos) {
                    word = word.substr(0, found);
                }
                data.push_back(stoi(word));
            }else if (*endptr == '\0') {
                data.push_back(number);
            } else {
                for (char c : word) {
                    data.push_back((int)c);
                }
            }
        }
        if (cin.peek() == '\n') break;
    }

    cout << "Tamanio del vector: " << data.size() << endl;
    for (int i = 0; i < data.size(); i++) {
        cout << data[i] << " ";
    }
    cout << endl;
    cout << "Presione la tecla enter para continuar... ";
    getch();

    system("cls");
    return data;
}