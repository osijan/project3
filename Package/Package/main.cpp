//
//  main.cpp
//  Package
//
//  Created by Obren on 7/6/15.
//  Copyright (c) 2015 Obren. All rights reserved.
//

#include <iostream>
#include "Package.cpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    Package package1("sender","sAddress","recip","rAddress", 5.0, 10.0);
    
    package1.print();
    package1.calculate();
    return 0;
}
