#include <iostream>
#include <string>
using namespace std;
class Cat{
public:
    string name;
    void printf(){
        cout<<"I am a cat. My name is"<<name<<"\n";
    }
};
int main()
{
    Cat cat1,cat2;
    cat1.name="�p��";
    cat2.name="�p��";
    cat1.printf();
    cat2.printf();
}
