#include <iostream>
#include <string>
using namespace std;
class Animal {
public:
    string animalname;
    explicit Animal(string& name) :animalname(name)
    {}
    virtual ~Animal(){}

public:
    string Name() { return animalname; }
};
class Cat : public Animal
{
public:
    explicit Cat(string& name):Animal(name) {}

};

class Dog : public Animal
{
public:
    explicit Dog(string& name):Animal(name){}

};
class Parrot : public Animal {
public:
    explicit Parrot(string& name):Animal(name){}
};
int main()
{
    return 0;
}