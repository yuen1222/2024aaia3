#include <iostream>
#include <string>
using namespace std;
class Cat{
public:
    Cat(string _name){
        name=_name;
    }
    string name;
    void printf(){
        cout<<"I am a cat. My name is"<<name<<"\n";
    }
};
int main()
{
    Cat cat1("�p��"),cat2("�p��");
    cat1.printf();
    cat2.printf();
}

