//
// Created by Miguel Castaneda on 06/02/2023.
//

#ifndef SORTING_ALGORITHMS_TIME_H
#define SORTING_ALGORITHMS_TIME_H
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
#endif //SORTING_ALGORITHMS_TIME_H

using namespace std;

//Prototipo
void showTime();

void showTime(){
    std::time_t t = std::time(nullptr);
    std::tm tm = *std::localtime(&t);

    std::cout << "\033[2;111H" << std::put_time(&tm,"%Y-%m-%d") << '\n';
    std::cout << "\033[1;113H" << std::put_time(&tm, "%X") << '\n';
    //std::this_thread::sleep_for(std::chrono::seconds(1));
}