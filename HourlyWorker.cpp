//Cédric Hakizimana 40112938
//Shokhad Haydari 40111203
//Assignment #3
//Platform/IDE used: Microsoft Visual Studio

#include "HourlyWorker.hpp"
#include <sstream>

HourlyWorker::HourlyWorker(const string& first,const string& last,const string& ssn, double w, double h):Employee(first, last, ssn) {
    
    setwage(w);
    sethours(h);
}


void HourlyWorker::setwage(double w) {
    wage = w;
}

void HourlyWorker::sethours(double h) {
    hours = h;
}

double HourlyWorker::getwage()const {
    return wage;
}

double HourlyWorker::gethours()const {
    return hours;
}

double HourlyWorker::earnings() const {
    double total;
cout<<"Earned $: ";
    if (hours > 40) {
        
        double overtimeh = gethours() - 40;
        total = 40 * getwage() + overtimeh * getwage() * 1.5;
        return total;
    }
    else
        return gethours() * getwage();
}

string HourlyWorker::toString() const{
    ostringstream output;
    output<<"Hourly Worker: "<<Employee::toString()<<"\nHours worked: "<<gethours()<<"\nWage per hour: "<<getwage();
    return output.str();
}

