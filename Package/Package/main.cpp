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

int main() {
    // insert code here...
    
    Package package1("sender","sAddress","recip","rAddress", 10, 5);
    TwoDayPackage package2("sender2","sAddress2","recip2","rAddress2", 10, 5,5);
    package1.print();
    package2.print();
}
    //Package package1("sender","sAddress","recip","rAddress", 10, 5);
  
   
    
    
   
    
