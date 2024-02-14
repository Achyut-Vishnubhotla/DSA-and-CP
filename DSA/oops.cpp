//what is oop?
//oop(object oriented programming) is a paradigm
//which means that, it is a set of rules and ideas and concepts 
//it is basically a standard in programming that we use to solve a specific type of problem

//now besides oop there r other programming paradigms as well and if ur question is why?
//we as humans has different types of problems and our computers help us solve those different types of problems
//if one paradigm is good to solve type of problem
//that doesn't necesarily mean that it is good to solve all other types of problems that we have

//now the idea behind object oriented paradigm is:
//we want to be able to represent real life objects,real life entities together with their characteristics, attributes, behaviours
//we want to be able to explain thos objects to our computer to represent those objects in our program
//that is exactly what oop is used for!

//now how does this work in a real life example
//lets use theexample of a car
//so a car is an entity in real life has many different attributes, many different characteristics
//some of those attributes are manufacturer of that car, is that a car : volvo,ferrari,ford or other type of car
//and then that car certainly has a color,price,max speed that car can obtain and many more characteristics

//so these are some of the attributes and characteristics of a car in real life
//then some of the behaviours of a car r:
//for example a car can accelerate,stop,open the door,how much fuel is left   
//those would be some behaviours that a car has

//so as said the idea behind oop is to being able to represent that car in real life in ur program
//how do we do that?
//how can you represent a real life entity like car in ur program
//or another entity like a game, a student, a book, animal etc...
//so the answer to this questions is by using classes

//now class is very important concept in oop
//class - it is the building block of object oriented programming
//and a class is basically user defined datatype
//and inorder to understand what is user defined datatypes
//u need to understand what r predefined/builtin datatypes
//so datatypes like int,float,double,char and so on
//u should be familiar with these

//if u r familiar with them, then i would say a class is little complex datatype
//in what way?
//for example
//in ur program lets say u want to represent username of ur user
//to do that u'll just create a variable type string and call it userName
//and u should be able to store the username of ur user in that variable
//but what happens if u store the entire user in ur program
//that user has many more characteristics than just username
//user will be having his full name, gender, email etc
//all these characteristics r going to be varibles that have its own type 
//and then all of these variables together r going to make one group which will be a class that represents ur user

//one thing to keep in mind is:
//u'll need to store the information that is important for ur specific program
//for example if v r tracking about facbook user then height and weight of that user is not important
//but if u r building a fitness application then height and weight of ur user is extremely important
//so u should store the information that is important for ur specific program

//lets dive in the code now

#include<bits/stdc++.h>
using namespace std;
//lets create a class employee
//the class should be filled with members(i.e.,attributes,behaviours)
class Employee{
    string Name;
    string Company;
    int Age;
}; //this ; is must
//here the class here is not representing data
//this class here represents blueprint(whatever u wnat create in employee, this class will serve as a model for the employee)

//now how do u create an instance of this class or how can you create an object of this class
//for example, how do u create a variable of int
//datatype + name of that variable
//int number;  
//with this we have successfully created a variable of type int
//now it is going to be same for the variable type employee(class)
// name of that class(userdefined datatype) + name of the variable
// Employee employee1;
//with this v successfully created the variable of type Employee 
//this employee1 is going to be object of the class Employee
int main(){
    Employee employee1;
    
}