//Cédric Hakizimana 40112938
//Shokhad Haydari 40111203
//Assignment #3
//Platform/IDE used: Microsoft Visual Studio

#include "HourlyWorker.hpp"
#include <sstream>
using namespace std;

HourlyWorker::HourlyWorker(const string& first,const string& last,const string& ssn, double w, double h):Employee(first, last, ssn)
//constructor that initializes the wage and hours worked through the setfunctions, the other variables are initialized by Employees constructor
{
    setwage(w);
    sethours(h);
}

void HourlyWorker::setwage(double w)
//sets the wage to the double w
{
    wage = w;
}

void HourlyWorker::sethours(double h)
//sets the hours worked to the double h
{
    hours = h;
}

double HourlyWorker::getwage()const
//prints wage
{
    return wage;
}

double HourlyWorker::gethours()const
//prints hours
{
    return hours;
}

double HourlyWorker::earnings() const
//calculates the amount earned for a week, if hours>40, wage= wage*1.5. Returns the amount at the end
{
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

string HourlyWorker::toString() const
//Adds feature to the toString function of employee class. Int this case, it returns the hours worked and the wage per hour. Note that the firstname, lastname and socialsecuritynumber is printed by the toString function of Employee
{
    ostringstream output;
    output<<"Hourly Worker: "<<Employee::toString()<<"\nHours worked: "<<gethours()<<"\nWage per hour: "<<getwage();
    return output.str();
}

