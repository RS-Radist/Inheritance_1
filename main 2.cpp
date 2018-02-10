//Создайте класс Passport (паспорт), который будет содержать паспортную информацию о гражданине Украниы. С помощью механизма наследования, реализуйте класс ForeignPassport (загран.паспорт) производный от Passport. Напомним, что загран.паспорт содержит помимо паспортных данных, также данные о визах, номер загран.паспорта.

#include <iostream>
using namespace std;

class Pasport
{
protected:
    char* name;
    int age;
    int number;
public:
    int GetAge ()
    {
        return age;
    }
    int GetNumber()
    {
        return number;
    }
    char* GetName()
    {
        return name;
    }
};

class ForeignPassport : public Pasport
{
private:
    int numberForeighnPas;
    char* visa;
public:
    ForeignPassport ()
    {}
    ForeignPassport(char* n,int _age,int _number,char* _visa,int NFP)
    {
        name= new char[strlen(n)+1];
        strcpy(name,n);
        age=_age;
        number=_number;
        numberForeighnPas=NFP;
        visa=new char [strlen(_visa)+1];
        strcpy(visa, _visa);
    }
    int GetNFP()
    {
        return numberForeighnPas;
    }
    char* GetVisa()
    {
        return visa;
    }
    
    
};

int main(int argc, const char * argv[])
{
    ForeignPassport pas("Sergey",43,39145566,"France",55123);
    cout<<pas.GetAge()<<" "<<pas.GetNumber()<<" "<<pas.GetName()<<" "<<pas.GetNFP()<<" "<<pas.GetVisa()<<endl;
    
    return 0;
}
