//
//  OvernightPackage.h
//  Package
//
//  Created by Obren on 7/8/15.
//  Copyright (c) 2015 Obren. All rights reserved.
//

#ifndef OvernightPackage_H
#define OvernightPackage_H

#include <stdio.h>
#include <string>
#include "Package.h"

using namespace std;

class OvernightPackage: public Package{
    
public:
    OvernightPackage(const string &, const string &, const string &, const string &, double =0, double =0, double=0);
    void setFeePerOunce(double);
    double getFeePerOunce() const;
    double calculate() const;
    virtual void print() const;
    
private:
    double FeePerOunce;
    
    
    
    
};



#endif /* defined(__Package__OvernightPackage__) */
