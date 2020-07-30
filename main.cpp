#include <iostream>
#include <iomanip>
#include "Employee.hpp"
#include "HourlyWorker.hpp"
#include "PieceWorker.hpp"
#include <vector>
using namespace std;

//function that takes a pointer object and prints the toString function and earnings functions
void virtualViaPointer(const Employee* const Ptr){
    cout<<Ptr->toString()<<endl<<Ptr->earnings()<<endl<<endl;
}

int main (){
    
    cout<<fixed<<setprecision(2); //setting the decimals to 2
    cout<<"WEEK 1"<<endl<<"NO OVERTIME FOR WEEK 1"<<endl<<endl;
    PieceWorker pieceWorker{"Shokhab", "Haydari", "401-11-203", 2.0,300}; //PieceWorker object 1
    HourlyWorker hourlyWorker {"Cédric", "Hakizimana","401-12-938",12.75, 39}; //HourlyWorker object 1
    
    vector<Employee*>employees{&pieceWorker,&hourlyWorker}; //vector of two objects
    
    for (const Employee* employeePtr: employees) //range base for loop that loops through the employees vector
    {
        virtualViaPointer(employeePtr); //prints the toString and earnings function of the range declaration
    }
    
    PieceWorker pieceWorker2{"Lionel", "Messi", "401-11-123", 2.75,328};//PieceWorker object 2
    HourlyWorker hourlyWorker2{"Cédric", "Hakizimana","401-12-938",12.75, 44};//HourlyWorker object 2
    vector<Employee*>employees2{&pieceWorker2, &hourlyWorker2}; //second vector of two objects
    
    cout<<"WEEK 2"<<endl<<"CEDRIC WORKED OVERTIME DURING WEEK 2"<<endl<<endl;
    //a second vector is created to demonstrate the overtime hours
    for (const Employee* employeePtr: employees2)
    //range base for loop that iterates through second vector
    {
        virtualViaPointer(employeePtr); //prints the toString and earnings function of the range declaration
    }
}
 

