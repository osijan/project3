//
//  Package.h
//  Package
//
//  Created by Obren on 7/6/15.
//  Copyright (c) 2015 Obren. All rights reserved.
//

#ifndef __Package__Package__
#define __Package__Package__

#include <string>

using namespace std;



class Package{
    
    
    
public:
    
    Package(const string &, const string &, const string &, const string &, double=0, double=0);
    
    
    
    void setSenderName(const string &);
    
    string getSenderName() const;
    
    
    
    void setSenderAddress(const string &);
    
    string getSenderAddress() const;
    
    
    
    void setRecipientName(const string &);
    
    string getRecipientName()const ;
    
    
    
    void setRecipientAddress(const string &);
    
    string getRecipientAddress() const;
    
    
    
    void setWeight(double);
    
    double getWeight()const;
    
    
    
    void setCPO(const double);
    
    double getCPO()const;
    
    
    
    virtual double calculate() const;
    
    virtual void print() const;
    
private:
    
    string sName;
    
    string sAddress;
    
    string rName;
    
    string rAddress;
    
    double weight;
    
    double costPerOunce;
    
    
    
};



#endif /* defined(__Package__Package__) */
