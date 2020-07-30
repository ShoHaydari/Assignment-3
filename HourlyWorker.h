
//Cédric Hakizimana 40112938
//Shokhad Haydari 40111203
//Assignment #3
//Platform/IDE used: Microsoft Visual Studio
#pragma once
#include "Employee.hpp"

#ifndef HourlyWorker_hpp
#define HourlyWorker_hpp

class HourlyWorker:public Employee //inherits the member functions of Employee
{
public:
    HourlyWorker(const std::string&,const std::string&,const std::string&, double=0.0, double=0.0); //constructor
    void setwage(double); //sets the wage per hour
    void sethours(double); //sets the hours worked
    double getwage() const; // returns the wage
    double gethours() const; //returns the hours worked
    virtual double earnings()const override; //calculate the earnings per week
    virtual std::string toString() const override; //override of the toString function from Employee class
    
private:
    double wage; // determines the wage earned
    double hours; //stores the number of pieces made

};

#endif /* HourlyWorker_hpp */
