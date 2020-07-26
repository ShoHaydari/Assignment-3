  
//Cédric Hakizimana 40112938
//Shokhad Haydari 40111203
//Assignment #3
//Platform/IDE used: Microsoft Visual Studio
#pragma once
#include "Employee.hpp"
#ifndef PieceWorker_hpp
#define PieceWorker_hpp

class PieceWorker: public Employee {
    
public:
    
    PieceWorker(const string&,const string&, const string&,double=0.0, double=0.0);
    void setwage(double);
    void setpieces(double);
    double getwage() const;
    double getpieces() const;
    virtual double earnings() const;
    virtual string toString () const;
    
private:
    double wage; // determines the wage earned
    double pieces; //stores the number of pieces made

};
#endif
