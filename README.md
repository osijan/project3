# project3

Project 3 for CS222 (Intermediate C++) at UW-WW
Read from a file that contains package data, calculate cost for diffrent types of packages and print report. 


Project 3: Inheritance & Polymorphism

Due date: July 15, 2015

Project description:

Package-delivery services, such as FedEx®, DHL® and UPS®, offer a number of different shipping options, each with specific costs associated. In this project, you are asked to create an inheritance hierarchy to represent various types of packages. Use Package as the base class of the hierarchy, then include classes TwoDayPackage and OvernightPackage that derive from Package. Base class Package should include data members representing the name, address, city, state and ZIP code for both the sender and the recipient of the package, in addition to data members that store the weight (in ounces) and cost per ounce to ship the package. Package’s constructor should initialize these data members. Ensure that the weight and cost per ounce contain positive values. Package should provide a public member function calculateCost that returns a double indicating the cost associated with shipping the package. Package’s calculateCost function should determine the cost by multiplying the weight by the cost per ounce. Derived class TwoDayPackage should inherit the functionality of base class Package, but also include a data member that represents a flat fee that the shipping company charges for two-day-delivery service. TwoDayPackage’s constructor should receive a value to initialize this data member.

TwoDayPackage should redefine member function calculateCost so that it computes the shipping cost by
adding the flat fee to the weight-based cost calculated by base class Package’s calculateCost function. Class OvernightPackage should inherit directly from class Package and contain an additional data member representing an additional fee per ounce charged for overnight-delivery service. OvernightPackage should redefine member function calculateCost so that it adds the additional fee per ounce to the standard cost per ounce before calculating the shipping cost.

Secondly, we will use this Package inheritance hierarchy to create a program that reads data from a text file and produce a report that contains the total of packages and costs for each type of packages.

Assuming that you have an input file in which each line contains a record of a package in the following format:


  Lou Brown| 1 Main St Boston, MA 11111| Mary Smith|7 Elm St, New York, NY 22222|8.5|0.5||regular

  Lou Brown| 1 Main St Boston, MA 11111| Bob George| 21 Pine Rd Cambridge, MA 44444|20.16|0.5|0.99|overnight

  Ed Lewis|2 Oak St Boston, MA 55555|Lou Brown|9 Main St, Boston, MA 11111|20 ounces|0.5|4.95|two days



The attributes for each field in a record is as follows:

  Sender’s name and recipient’s name: maximum 50 characters
  Sender’s address and recipient’s address: maximum 100 characters
 
  Weight: total weight of the package in ounces
 
  Cost: cost per once
  
  Fee: regular package did not have the fee. The fee for overnight package is the additional cost per ounce for        mailing this package overnight. The fee for two day package is the flat fee.
  
  Type: can be either: “regular”, “overnight”, “two days”

Lastly, in the main program, you will (i) read data from a text file that contains maximum 100 records; (ii) depending on the type of package, create regular/overnight/or two days package accordingly and store the package as an element of an array of package. You will have an array that contains all the packages read from this data file (e.g. from the above example, you will have an array with 3 packages: one regular, one overnight and one twodays package; (iii) create a report that contains the following statistics:

  Number of regular packages mailed:	Total cost:

  Number of overnight packages mailed:	Total cost:

  Number of two days packages mailed:	Total cost:

You must compute the total of each type of packages using Polymorphism instead of using string comparison. String comparison will not receive any points for that report part.
