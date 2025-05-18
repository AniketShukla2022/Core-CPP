#include<bits/stdc++.h>
using namespace std;

class Vehical
{
    public:
    virtual void createVehical() = 0;
    static Vehical* getVehical(string vehicalType);
};

class car : public Vehical 
{
    public:
    void createVehical() override
    {
        cout<<"car is created"<<endl;
    }
};

class bike : public Vehical 
{
    public:
    void createVehical() override
    {
        cout<<"bike is created"<<endl;
    }
};

Vehical* Vehical::getVehical(string vehicalType)
{
    if (vehicalType == "car")
        return new car();
    else if (vehicalType == "bike")
        return new bike();
    return NULL;
}

int main()
{
    string vehicalType;
    cout<<"Enter vehical type: "<<endl;
    cin>>vehicalType;
    Vehical* vehical = Vehical::getVehical(vehicalType);
    vehical->createVehical();
    return 0;
}