//
//  main.cpp
//  Package
//
//  Created by Obren on 7/6/15.
//  Copyright (c) 2015 Obren. All rights reserved.
//

#include <iostream>
#include "Package.cpp"
#include "TwoDayPackage.cpp"
#include "OvernightPackage.cpp"

int main() {
    // insert code here...
    
    Package package1("sender","sAddress","recip","rAddress", 10, 5);
    TwoDayPackage tdp("sender2","sAddress2","recip2","rAddress2", 10, 5,5);
    OvernightPackage onp("sender3","sAddress3","recip3","rAddress3", 10, 5,5);
    
    
    Package * p1 = &package1;
    Package * p2 = &tdp;
    Package * p3 = &onp;
    
    p1 -> print();
    p2 -> print();
    p3 -> print();
    
    //package1.print();
    //tdp -> print();
}


   

