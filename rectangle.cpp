//begin by including iostream
#include <iostream>
int main()
{
    //create the length, breath, area and perimeter as integers
    int l, b, PERIMETER, AREA;
    std::cout<<"ENTER TWO NUMBERS AND I WILL PRINT OUT THEIR PERIMETER AND AREA\n";
    
    //ask the user to enter both numbers and then tell them what numbers they entered
    std::cout<< "Give me the first number: ";
    std::cin>> l;

    std::cout <<"You entered " << l;
    std::cout << "\n";
    std::cout << "\n";



    std::cout<< "Give me the second number: ";
    std::cin>> b;

    std::cout <<"You entered " << b;
    std::cout << "\n";
    std::cout << "\n";

    
    //define the protocol for finding the perimeter and the area
    PERIMETER = 2 *(l + b);
    AREA = l*b;
    std::cout << "\n";

    
    //print out the result of the two numbers entered 
    std::cout<<"The perimeter of the two numbers entered are: "<<PERIMETER << "\n";
    std::cout << "The area of the two numbers entered are: "<<AREA << "\n";


    return 0;
}
