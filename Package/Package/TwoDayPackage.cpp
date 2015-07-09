//
//  TwoDayPackage.cpp
//  Package
//
//  Created by Obren on 7/6/15.
//  Copyright (c) 2015 Obren. All rights reserved.
//


#include <string>
#include <iostream>

#include "TwoDayPackage.h"


using namespace std;


TwoDayPackage::TwoDayPackage(string const &senderName, string const &senderAddress, string const &recipientName, string const &recipientAddress, double w, double cpo, double ff)
: Package(senderName, senderAddress, recipientName, recipientAddress, w, cpo)
{
    setFlatFee(ff);
}

void TwoDayPackage::setFlatFee(double ff)
{
    flatFee = ff;
}

double TwoDayPackage:: getFlatFee() const
{
    return flatFee;
}

double TwoDayPackage:: calculate() const
{
    return getFlatFee() + (getWeight() * getCPO());
}

void TwoDayPackage::print() const
{
    Package::print();
}




