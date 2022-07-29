#include <stdio.h>
#include <iostream>

class Dog {
    
private:
    
    std::string name;
    int age;
    
public:

    Dog(std::string dogName, int dogAge)
    {
        name = dogName;
        age = dogAge;
    }
    
    void speak()
    {
        std::cout << "Bark Bark Woof!" << std::endl;
    }
    
    std::string getName()
    {
        return name;
    }
    
    void setName(std::string newName)
    {
        name = newName;
    }
    
    int getAge()
    {
        return age;
    }
    
    void setAge(int newAge)
    {
        age = newAge;
    }
    
};

int main(int argc, char **argv)
{
	Dog dog1("Rover", 2);
    Dog* dogptr;
    dogptr = &dog1;
    
    std::string displayName = dogptr->getName();
    std::cout << displayName << std::endl;
    dogptr->setName("Rex");
    displayName = dogptr->getName();
    std::cout << displayName << std::endl;
    
    int displayAge = dogptr->getAge();
    std::cout << displayAge << std::endl;
    dogptr->setAge(3);
    displayAge = dogptr->getAge();
    std::cout << displayAge << std::endl;
    
    dogptr->speak();
    
	return 0;
}
