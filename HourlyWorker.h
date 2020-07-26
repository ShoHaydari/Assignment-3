
//Cédric Hakizimana 40112938
//Shokhad Haydari 40111203
//Assignment #3
//Platform/IDE used: Microsoft Visual Studio
#pragma once
#include "Employee.hpp"

#ifndef HourlyWorker_hpp
#define HourlyWorker_hpp

class HourlyWorker:public Employee {
public:
    HourlyWorker(const string&,const string&,const string&, double=0.0, double=0.0);
    void setwage(double);
    void sethours(double);
    double getwage() const;
    double gethours() const;
    virtual double earnings()const override;
    virtual string toString() const override;
    
private:
    double wage; // determines the wage earned
    double hours; //stores the number of pieces made





};

#endif /* HourlyWorker_hpp */

