//Создайте класс Student, который будет содержать информацию о студенте. С помощью механизма наследования, реализуйте класс Aspirant (аспирант - студент, который готовится к защите кандидатской работы) производный от Student.

#include <iostream>
using namespace std;
class Student
{
protected:
    int age;
    char * name;
    double weight;
public:
    int GetAge() const
    {
        return age;
    }
    char * GetName()
    {
        return name;
    }
    double GetWeight() const
    {
        return weight;
    }
};

class Aspirant:public Student
{
public:
    Aspirant(){}
    Aspirant(char* n,int _age,double _weight)
    {
        name = new char [strlen(n)+1];
        strcpy(name, n);
        age=_age;
        weight=_weight;
        
    }
    
};

int main()
{
    Aspirant valera("Valera",55,65.55);
    Aspirant sergey("sergey",19,85.43);
    
    cout<<valera.GetAge()<<" "<<valera.GetName()<<" "<<valera.GetWeight()<<endl;
    cout<<sergey.GetAge()<<" "<<sergey.GetName()<<" "<<sergey.GetWeight()<<endl;
   
}
