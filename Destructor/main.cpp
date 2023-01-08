//
//  main.cpp
//  Destructor
//
//  Created by Fadhel Alanazi on 14/06/1444 AH.
//

#include <iostream>

class Myclass {
public:
    int x;
    int *ptr;
    
    Myclass(): ptr { new int(123)} {
        std::cout<<"constructor invoked \n";
        std::cout<<"ptr value = " << *ptr << "\n";
        x = *ptr;
    }
    
    ~Myclass(){
        std::cout<<"destructor invoked \n";
        delete  ptr;
        std::cout<<"ptr deleted \n";
    }
};

int main(int argc, const char * argv[]) {

    Myclass obj1; //constructor invoked here when obj1 initialized
    std::cout<<"obj1 access x value = "<<obj1.x<<"\n";
    return 0;
} // destructor invoked here when obj1 gets out scope
