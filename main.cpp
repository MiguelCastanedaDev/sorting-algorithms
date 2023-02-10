#include "menus.h"
//#include "datos.h"
#include <vector>

using namespace std;

int main() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
        system("sudo apt-get update");
        system("sudo apt-get install ncurses-base");
    #endif
    std::vector<int> data;
    menu(data);
    return 0;
}
