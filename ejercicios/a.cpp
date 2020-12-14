#include <iostream>

using namespace std;

class Person{
    private:
        string name;
        int age;
    public:

        Person(string _name, int _age){
            name = _name;
            age = _age;
        }

        void show(){
            cout << "Name: " << name << endl;
            cout << "Age:" << age << endl;
        }

        bool isAdult(){
            return age >= 18;
        }

        void setName(string _name){
            name = _name;
        }

        string getName(){
            return name;
        }
};

int main(){
    cout <<"Hi" << endl;
    Person Natasha("Natasha Vergara",14);
    Natasha.show();
}