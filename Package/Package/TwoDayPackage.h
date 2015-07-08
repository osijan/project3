//
//  TwoDayPackage.h
//  Package
//
//  Created by Obren on 7/6/15.
//  Copyright (c) 2015 Obren. All rights reserved.
//


#ifndef Package_TwoDayPackage_h
#define Package_TwoDayPackage_h

#include <string>
#include "Package.h"

using namespace std;


class TwoDayPackage: public Package{

public:
    TwoDayPackage(const string &, const string &, const string &, const string &, double=0, double=0, double=0);
    void setFlatFee(double);
    double getFlatFee() const;
    void print();
    double calculate() const;
    void print() const;
    
private:
    double flatFee;

    
    
};



#endif
