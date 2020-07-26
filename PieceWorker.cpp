//Cédric Hakizimana 40112938
//Shokhad Haydari 40111203
//Assignment #3
//Platform/IDE used: Microsoft Visual Studio

#include <iostream>
#include <sstream>
#include "PieceWorker.hpp"

PieceWorker::PieceWorker(const string& first,const string& last,const string& ssn, double w, double p): Employee(first,last,ssn) {
    setwage(w);
    setpieces(p);
}

void PieceWorker::setwage(double w) {
    wage = w;
}

void PieceWorker::setpieces(double p)  {
    pieces = p;
}

double PieceWorker::getwage() const{
    return wage;
}

double PieceWorker::getpieces()const {
    return pieces;
}

double PieceWorker::earnings() const{
    cout<<"Earned $: ";
    return getwage() * getpieces();
}

string PieceWorker::toString() const{
    ostringstream output;
    output <<"Piece Worker: "<<Employee::toString()<<"\nPieces sold: "<<getpieces()<<"\nWage per pieces sold: "<<getwage();
    return output.str();
    
}
