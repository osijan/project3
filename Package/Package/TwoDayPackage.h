//
//  TwoDayPackage.h
//  Package
//
//  Created by Obren on 7/6/15.
//  Copyright (c) 2015 Obren. All rights reserved.
//


#ifndef TwoDayPackage_H
#define TwoDayPackage_H

#include <string>
#include "Package.h"

using namespace std;


class TwoDayPackage: public Package{

public:
    TwoDayPackage(const string &, const string &, const string &, const string &, double=0, double=0, double=0);
    void setFlatFee(double);
    double getFlatFee() const;
    double calculate() const;
    virtual void print() const;
    
private:
    double flatFee;

    
    
};



#endif
