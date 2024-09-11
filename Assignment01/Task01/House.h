#include <iostream>
#include <string>

using namespace std;

class House {
private:
    char Owner[21];  
    char Address[21]; 
    int Bedrooms;
    float Price;

public:
    static int HouseCounter; 

  
    void setOwner(const char* owner);
    const char* getOwner();
    void setAddress(const char* address);
    const char* getAddress();
    void setBedrooms(int bedrooms);
    int getBedrooms();
    void setPrice(float price);
    float getPrice();
};