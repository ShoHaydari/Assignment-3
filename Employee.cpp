//Cédric Hakizimana 40112938
//Shokhad Haydari 40111203
//Assignment #3
//Platform/IDE used: Microsoft Visual Studio

#include "Employee.hpp"
#include <iostream>
#include <sstream>

using namespace std;

Employee::Employee(const string& first, const string& last, const string& ssn)
//the data members are initialized through set functions
{
    setfirstname(first);
    setlastname(last);
    setsocialsecuritynumber(ssn);
}

void Employee::setfirstname(const string& first)
//sets the firstname to the string "first" passed
{
    firstname = first;
}

void Employee::setlastname(const string& last)
//sets the lastname to the string "last" passed
{
    lastname = last;
}

void Employee::setsocialsecuritynumber(const string& ssn)
//sets the socialsecuritynumber to the string "ssn" passed
{
    socialsecuritynumber = ssn;
}

string Employee::getfirstname() const
//prints the firstname
{
    return firstname;
}

string Employee::getlastname() const
//prints lastname
{
    return lastname;
}

string Employee::getsocialsecuritynumber() const
//prints socialsecuritynumber
{
    return socialsecuritynumber;
}

string Employee::toString() const
//prints all three data members assigned by the set functions
{
    return getfirstname() + " " + getlastname() + "\nSocial Security Number: " + getsocialsecuritynumber();
}
