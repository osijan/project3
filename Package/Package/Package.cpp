//
//  Package.cpp
//  Package
//
//  Created by Obren on 7/6/15.
//  Copyright (c) 2015 Obren. All rights reserved.
//


#include <string>
#include "Package.h"

Package::Package(string const &senderName, string const &senderAddress, string const &recipientName, string const &recipientAddress, double w, double cpo)
:sName(senderName), sAddress(senderAddress), rName(recipientName), rAddress(recipientAddress), weight(w), costPerOunce(cpo)
{
    
}

void Package::setSenderName(const string &senderName)
{
    sName = senderName;
}

string Package::getSenderName() const
{
    return sName;
}

void Package::setSenderAddress(const string &senderAddress)
{
    sAddress = senderAddress;
}

string Package::getSenderAddress() const
{
    return sAddress;
}

void Package::setRecipientName(const string &recipientName)
{
    rName = recipientName;
}

string Package::getRecipientName() const
{
    return rName;
}

void Package::setRecipientAddress(const string &recipientAddress)
{
    rAddress = recipientAddress;
}

string Package::getRecipientAddress() const
{
    return rAddress;
}

void Package::setWeight(const double w)
{
    weight = w;
}

double Package:: getWeight() const
{
    return weight;
}

void Package:: setCPO(const double cpo)
{
    costPerOunce = cpo;
}

double Package::getCPO() const
{
    return costPerOunce;
}

void Package::calculate()
{
    cout << getWeight() * getCPO();
    
}

void Package::print() const
{
    cout << getSenderName() << endl << getSenderAddress() << endl << getRecipientName() << endl << getRecipientAddress()<< endl
    << getWeight() << endl << getCPO() <<endl;
}


