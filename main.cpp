#include <iostream>
#include <iomanip>
#include "Employee.hpp"
#include "HourlyWorker.hpp"
#include "PieceWorker.hpp"
#include <vector>
using namespace std;

void virtualViaPointer(const Employee* const Ptr){
    cout<<Ptr->toString()<<endl<<Ptr->earnings()<<endl<<endl;
}

int main (){
    
    cout<<fixed<<setprecision(2);
    cout<<"WEEK 1"<<endl<<"NO OVERTIME FOR WEEK 1"<<endl<<endl;
    PieceWorker pieceWorker{"Shokhab", "Haydari", "401-11-203", 2.0,300};  
    HourlyWorker hourlyWorker {"Cédric", "Hakizimana","401-12-938",12.75, 39};
    
    vector<Employee*>employees{&pieceWorker,&hourlyWorker};
    
    for (const Employee* employeePtr: employees){
        virtualViaPointer(employeePtr);
    }
    
    PieceWorker pieceWorker2{"Lionel", "Messi", "401-11-123", 2.75,328};
    HourlyWorker hourlyWorker2{"Cédric", "Hakizimana","401-12-938",12.75, 44};
    vector<Employee*>employees2{&pieceWorker2, &hourlyWorker2};
    
    cout<<"WEEK 2"<<endl<<"CEDRIC WORKED OVERTIME DURING WEEK 2"<<endl<<endl;
    
    for (const Employee* employeePtr: employees2){
        virtualViaPointer(employeePtr);
    }
    
    

}
