//Cédric Hakizimana 40112938
//Shokhad Haydari 40111203
//Assignment #3
//Platform/IDE used: Microsoft Visual Studio

#include "Employee.hpp"
#include <iostream>
#include <sstream>

using namespace std;

Employee::Employee(const string& first, const string& last, const string& ssn){
    firstname = first;
    lastname = last;
    socialsecuritynumber = ssn;

}

void Employee::setfirstname(const string& first) {
    firstname = first;

}

void Employee::setlastname(const string& last) {
    lastname = last;

}

void Employee::setsocialsecuritynumber(const string& ssn) {
    socialsecuritynumber = ssn;

}

string Employee::getfirstname() const{
    return firstname;
}

string Employee::getlastname() const{
    return lastname;
}

string Employee::getsocialsecuritynumber() const{
    return socialsecuritynumber;
}

string Employee::toString() const{
    return getfirstname() + " " + getlastname() + "\nSocial Security Number: " + getsocialsecuritynumber();
}
