#include "Functions.h"

int House::HouseCounter = 0;

int main(){

    cout << endl << endl;

    House AvailableHouses[100];

    while (true)
    {
       MainMenu(AvailableHouses);
    }
    

    cout << endl << endl;
    return 0;
}