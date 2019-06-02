#ifndef COMMISSION_H
#define COMMISSION_H

#include <string>
#include "Employee.h"

class CommissionEmployee :public Employee
{
public:
    CommissionEmployee( const std::string &, const std::string &, const std::string &, double = 0.0, double = 0.0);
    virtual ~CommissionEmployee() {}

    void setCommissionRate( double );
    double getCommissionEmployee() const;

    void setGrossSales( double );
    double getGrossSales() const;


};


#endif // COMMISSION_H
