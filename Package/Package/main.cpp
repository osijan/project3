//
//  main.cpp
//  Package
//
//  Created by Obren on 7/6/15.
//  Copyright (c) 2015 Obren. All rights reserved.
//

#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include "Package.cpp"
#include "TwoDayPackage.cpp"
#include "OvernightPackage.cpp"


int main() {
    // insert code here...
    
    ifstream File("/Users/osijan/GitHub/project3/Package/info.txt", ios::in);
    
    if(!File)
    {
        cerr << "file not opened"<< endl;
        exit(1);
    }
    
    string senderN;
    string senderA;
    string recipientN;
    string recipientA;
    string type;
    string buffer;
    
 
   ifstream file ("/Users/osijan/GitHub/project3/Package/info.txt");
    ifstream file2 ("/Users/osijan/GitHub/project3/Package/info.txt");
 
 string tokens[8];
    int i =0;
    int j=0;
    
   
    
    vector<Package *> myPack(5);
    
    while (file.eof()!=true)
{
    getline(file,buffer);
    string token, text(buffer);
    istringstream iss(text);
    
    while (getline(iss, token, '|')){
        
        
        tokens[i]=token;
        
        i++;
    }
    
    
    if (tokens[7]=="regular")
    {
        myPack[j] = new Package(tokens[0] ,tokens[1],tokens[2],tokens[3], stod(tokens[4]), stod(tokens[5]));
    }
    if (tokens[7]=="two days")
    {
        myPack[j] = new TwoDayPackage(tokens[0] ,tokens[1],tokens[2],tokens[3], stod(tokens[4]), stod(tokens[5]), stod(tokens[6]));
    }
    if (tokens[7]=="overnight")
    {
        myPack[j] = new OvernightPackage(tokens[0] ,tokens[1],tokens[2],tokens[3], stod(tokens[4]), stod(tokens[5]), stod(tokens[6]));

    }
        
    j++;
    i=0;
    
    
}
    j--;
    double total=0;
    
     for(int i=0; i<j; i++){
         total+= myPack[i] -> calculate();
        
     }
    
    

    double total1=0,total2=0,total3=0;
    int sumt=0, sum2=0, sum3=0;
    for(int i=0; i<j; i++){
        if  (dynamic_cast<TwoDayPackage*>(myPack[i]) != NULL){
            total2 += myPack[i] -> calculate();
            sum2++;
            ;
          
        }
        if  (dynamic_cast<OvernightPackage*>(myPack[i]) != NULL){
            total3 += myPack[i] -> calculate();
            sum3++;
            ;
            
        }
        
        if  (dynamic_cast<Package*>(myPack[i]) != NULL){
            total1 += myPack[i] -> calculate();
            sumt++;
            }
   
       
    }
    if (total2 > total3){
        total1= total2-total3;
    }
    else total1 = total3-total2;
    
    
    
    int sum1= sumt-sum2-sum3;
    cout << "--------------------------------------------------";
    cout <<endl<<"regular total: "<< total1<<"\t Sum: "<<sum1;
    cout <<endl<<"two day total: "<< total2<<"\t Sum: "<<sum2;
    cout <<endl<<"Overnight total: "<< total3<<"\t Sum: "<<sum3;
    cout <<endl<< "total: "<< total;
    
    


}


   

