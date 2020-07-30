//Cédric Hakizimana 40112938
//Shokhad Haydari 40111203
//Assignment #3
//Platform/IDE used: Microsoft Visual Studio

#include <iostream>
#include <sstream>
#include "PieceWorker.hpp"
using namespace std;

PieceWorker::PieceWorker(const string& first,const string& last,const string& ssn, double w, double p): Employee(first,last,ssn)
//constructor that initializes the wage and pieces sold through the setfunctions, the other variables are initialized by Employees constructor
{
    setwage(w);
    setpieces(p);
}

void PieceWorker::setwage(double w)
//sets wage
{
    wage = w;
}

void PieceWorker::setpieces(double p)
//sets the number of pieces sold
{
    pieces = p;
}

double PieceWorker::getwage() const
//returns the wage per pieces sold
{
    return wage;
}

double PieceWorker::getpieces()const
//returns the pieces sold
{
    return pieces;
}

double PieceWorker::earnings() const
//returns the amount earned per pieces sold
{
    cout<<"Earned $: ";
    return wage*pieces;
}

string PieceWorker::toString() const
//Adds feature to the toString function of employee class. In this case, it returns the number of pieces sold and the wage per pieces sold. Note that the firstname, lastname and socialsecuritynumber is printed by the toString function of Employee
{
    ostringstream output;
    output <<"Piece Worker: "<<Employee::toString()<<"\nPieces sold: "<<getpieces()<<"\nWage per pieces sold: "<<getwage();
    return output.str();
    
}
