#include <iostream>
#include "Employee,h"
using namespace std;

Employee::Employee( const string &first, const string &last, const string &ssn, const string &bd )
    :firstName (first), lastName(last), socialSecurityNumber(ssn), birthDate(bd)
    {

    }

void Employee::setFirstName( const string &first )
{
    firstName = first;
}

string Employee::getFirstName() const
{
    return firstName;
}

void Employee::setLastName( const string &first )
{
    lastName = last;
}

string Employee::getLastName() const
{
    return lastName;
}

void Employee::setSocialSecurityNumber( const string &first )
{
    socialSecurityNumber = ssn;
}

string Employee::getSocialSecurityNumbere() const
{
    return socialSecurityNumber;
}

void Employee::setBirthDate( const string &first )
{
    birthDate = bd;
}

string Employee::getBirthDate() const
{
    return birthDate;
}

void Employee::print() const
{
    cout << getFirstName() << ' '<<getLastName() << "\nsocial security number: " << getSocialSecurityNumber() << "\nbirth date: " << getBirthDate();
}
