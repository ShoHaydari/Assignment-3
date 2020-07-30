
#ifndef Employee_hpp
#define Employee_hpp


#include <string>
#include <iostream>

class Employee {

private:
    std::string firstname;
    std::string lastname;
    std::string socialsecuritynumber;

public:

    Employee(const std::string&, const std::string&, const std::string&); //constructor
    void setfirstname(const std::string&);//function to set first name
    void setlastname(const std::string&); //function to set last name
    void setsocialsecuritynumber(const std::string&); //function to set social security number
    std::string getfirstname()const ; //function to print first name
    std::string getlastname()const; //function to print last name
    std::string getsocialsecuritynumber()const; // function print social security number

    virtual double earnings() const= 0;// pure virtual function, making employee an abstract class
    virtual std::string toString() const; //virtual function
    
    virtual ~Employee()= default ;//generates a virtual constructor

};

#endif /* Employee_hpp */

