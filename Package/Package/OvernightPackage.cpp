//
//  OvernightPackage.cpp
//  Package
//
//  Created by Obren on 7/8/15.
//  Copyright (c) 2015 Obren. All rights reserved.
//

#include <string>
#include <iostream>
#include "OvernightPackage.h"

using namespace std;

OvernightPackage::OvernightPackage(string const &senderName, string const &senderAddress, string const &recipientName, string const &recipientAddress, double w, double cpo, double fpo)

: Package(senderName, senderAddress, recipientName, recipientAddress, w, cpo)

{
    setFeePerOunce(fpo);
}

void OvernightPackage::setFeePerOunce(double fpo)
{
    FeePerOunce = fpo;
}

double OvernightPackage:: getFeePerOunce() const
{
    return FeePerOunce;
}

double OvernightPackage:: calculate() const
{
   // cout <<(getCPO() * getFeePerOunce()) + (getWeight() * getCPO());
    return (getCPO() * getFeePerOunce()) + (getWeight() * getCPO());
}

void OvernightPackage::print() const
{
    Package::print();
}


