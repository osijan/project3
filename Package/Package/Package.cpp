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

{
    sName = senderName;
    sAddress = senderAddress;
    rName = recipientName;
    rAddress = recipientAddress;
    setWeight(w);
    setCPO(cpo);
   
    
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

void Package::setWeight(double w)
{
    if (w > 0.0)
    {
        weight = w;
        
    }
    
    else
    {
        cout << " Weight set to " << w << endl;
        throw invalid_argument("Weight needs to be positive");
    }
}


double Package:: getWeight() const
{
    return weight;

}
    

void Package:: setCPO(const double cpo)
{
    if (cpo > 0.0)
        costPerOunce = cpo;
    else  throw invalid_argument("Weight needs to be positive");

    
}

double Package::getCPO() const
{
    return costPerOunce;
}

double Package::calculate() const
{
    return getWeight() * getCPO();
    
}

void Package::print() const
{
    cout << getSenderName() << endl << getSenderAddress() << endl << getRecipientName() << endl << getRecipientAddress()<< endl
    << getWeight() << endl << getCPO() <<endl <<calculate();
}


