//Assignment #3
//Platform/IDE used: Microsoft Visual Studio
#pragma once
#include "Employee.hpp"
#ifndef PieceWorker_hpp
#define PieceWorker_hpp

class PieceWorker: public Employee //inherits the member functions of Employee
{
public:
    
    PieceWorker(const std::string&,const std::string&, const std::string&,double=0.0, double=0.0); //constructor
    void setwage(double); //sets the wage
    void setpieces(double); //sets the pieces sold
    double getwage() const; //returns the wage
    double getpieces() const; //returns the pieces sold
    virtual double earnings() const override; //calculates the amount earned
    virtual std::string toString () const override; //override the toString function of class Employee
    
private:
    double wage; // determines the wage earned
    double pieces; //stores the number of pieces made

};
#endif
