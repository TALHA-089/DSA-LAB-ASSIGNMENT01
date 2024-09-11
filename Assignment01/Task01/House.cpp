#include "House.h"
#include <cstring>


void House::setOwner(const char* owner) {
    strncpy(Owner, owner, 20);
    Owner[20] = '\0'; 
}


const char* House::getOwner() {
    return Owner;
}


void House::setAddress(const char* address) {
    strncpy(Address, address, 20);
    Address[20] = '\0';
}


const char* House::getAddress() {
    return Address;
}


void House::setBedrooms(int bedrooms) {
    Bedrooms = bedrooms;
}


int House::getBedrooms() {
    return Bedrooms;
}


void House::setPrice(float price) {
    Price = price;
}


float House::getPrice() {
    return Price;
}
