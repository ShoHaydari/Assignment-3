//Cédric Hakizimana 40112938
//Shokhad Haydari 40111203
//Assignment #3
//Platform/IDE used: Microsoft Visual Studio
using namespace std;
#ifndef Employee_hpp
#define Employee_hpp


#include <string>
#include <iostream>

class Employee {

private:
    string firstname;
    string lastname;
    string socialsecuritynumber;

public:

    Employee(const string&, const string&, const string&);
    void setfirstname(const string&);
    void setlastname(const string&);
    void setsocialsecuritynumber(const string&);
    string getfirstname()const ;
    string getlastname()const;
    string getsocialsecuritynumber()const;

    virtual double earnings() const= 0;// this makes employee an abstract class
    virtual string toString() const;
    
    virtual ~Employee()= default ;//generates a virtual constructor

};

#endif /* Employee_hpp */
