#include "House.cpp"
#include<iomanip>

void AddHouse(House AvailableHouses[], int Size = 100){

    char Owner[21];
    char Address[21];
    int Bedrooms;
    float Price;

    cout << "\n--------- Add a new house --------\n";
    cout << "\nEnter Owner's Name: ";
    cin.getline(Owner, 21);
    cout << "\nEnter House's Address: ";
    cin.getline(Address, 21);
    cout << "\nEnter No. of Bedrooms: ";
    cin >> Bedrooms;
    cin.ignore();
    cout << "\nEnter Price of the House: ";
    cin >> Price;
    cin.ignore();

    AvailableHouses[House::HouseCounter].setOwner(Owner);
    AvailableHouses[House::HouseCounter].setAddress(Address);
    AvailableHouses[House::HouseCounter].setBedrooms(Bedrooms);
    AvailableHouses[House::HouseCounter].setPrice(Price);

    cout << "\nHouse Added Successfully!";
    House::HouseCounter++;
}

void ShowAllHouses(House AvailableHouses[], int Size = 100){
    for(int i = 0; i < House::HouseCounter; i++){
        cout << "\n---------- House " << i + 1 << " ------------\n";
        cout << "\nOwner"<< setw(20)<<"Address"<< setw(20)<<"Bedrooms"<< setw(20)<<"Price\n";
        cout << AvailableHouses[i].getOwner() << setw(20) << AvailableHouses[i].getAddress() << setw(20) << AvailableHouses[i].getBedrooms() << setw(20) << AvailableHouses[i].getPrice();
    }
}

int HandleMainMenu(House AvailableHouses[], int Size = 100){
    int Choice = 0;
    cin >> Choice;
    cin.ignore();
    if(Choice == 1){

        if(House::HouseCounter < 100){
        AddHouse(AvailableHouses);
        }else{
            cout << "\nCan't Add More Houses!";
        }
    }else if(Choice == 2){
        ShowAllHouses(AvailableHouses);
    }else if(Choice == 3){
        cout << "\nGoodbye!\n";
        exit(0);
    }else{
        cout << "\nInvalid Input\n";
    }
    return 0;
}

void MainMenu(House AvailableHouses[], int Size = 100){
    cout << "\n------------- Main Menu ---------------\n";
    cout << "\n1.Add House";
    cout << "\n2.Show All Houses";
    cout << "\n3.Exit";
    cout << "\n\nEnter your Choice: ";
    HandleMainMenu(AvailableHouses);
}