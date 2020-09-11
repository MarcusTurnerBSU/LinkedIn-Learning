#include <iostream>
#include <string>
using namespace std;

// Fur class
class Fur {
    string _quality;
    Fur(){}
protected:
    Fur(const string & f) : _quality(f) {}
public:
    const string& quality() const { return _quality; }
};

// Animal class (base)
class Animal {
    string _name;
    string _type;
    string _sound;
    // private constructor prevents construction of base class
    Animal() {}

    //friend const string& get_animal_name(const Animal&);

protected:
    // protected constructor for use by derived classes
    Animal(const string& n, const string& t, const string& s)
        : _name(n), _type(t), _sound(s) {}
    //if we remove protected - can do this but not good practice
    /*friend class Dog;
    friend class Cat;
    friend class Pig;*/

public:
    virtual void speak() const;
    const string& name() const { return _name; }
    const string& type() const { return _type; }
    const string& sound() const { return _sound; }
    virtual ~Animal(){}
};

void Animal::speak() const {
    printf("%s the %s says %s\n", _name.c_str(), _type.c_str(), _sound.c_str());
}

// Dog class - derived from Animal
class Dog : public Animal {
    int _walked;
public:
    Dog(string n) : Animal(n, "dog", "woof"), _walked(0) {};
    int walk() { return ++_walked; }
};

// Cat class - derived from Animal
class Cat : public Animal, public Fur {
    int _petted;
public:
    Cat(string n) : Animal(n, "cat", "meow"), Fur("silky"), _petted(0) {};
    int pet() { return ++_petted; }
    void speak() const { Animal::speak(); puts("puuurrrrr"); }
};

// Pig class - derived from Animal
class Pig : public Animal {
    int _fed;
public:
    Pig(string n) : Animal(n, "pig", "oink"), _fed(0) {};
    string latin() const { return name() + "-ay"; }
    int feed() { return ++_fed; }
};

const string& get_animal_name(const Animal& a) {
    return a.name();
}

int main() {
    Dog d("Rover");
    Cat c("Fluffy");
    Pig p("Arnold");

    d.speak();
    c.speak();
    p.speak();

    cout << "the " << d.type() << " has been walked " << d.walk() << " times" << endl;
    cout << "the " << c.type() << " has been petted " << c.pet() << " times" << endl;
    cout << "the " << p.type() << " has been fed " << p.feed() << " times" << endl;

    printf("The pig is sometimes called %s\n", p.latin().c_str());

    cout << "the " << c.type() << " is named " << get_animal_name(c) << endl;
    cout << "the " << c.type() << " grooms her " << c.quality() << " fur" << endl;

    Animal* ap[] = { &d, &c, &p };
    for (auto p : ap) {
        p->speak();
    }
}