#include<iostream>
using namespace std;

class Car{
    public:
    string BrandName;
    int ManuDate;

    Car(string BrandName, int ManuDate){
        this->BrandName=BrandName;
        this->ManuDate=ManuDate;
    }
    
    void printDetails(){
        cout << "Car name is : " << BrandName << endl;
        cout << "Car Manufacturing Date is : " << ManuDate << endl;

    }
};

int main(){
    Car c1("BMW",1995);
    Car c2("Maruti800",1982);
    c1.printDetails();
    c2.printDetails();
    
}