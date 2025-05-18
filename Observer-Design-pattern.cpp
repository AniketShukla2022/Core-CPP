#include<bits/stdc++.h>
#include <algorithm> 
using namespace std;

class Observer
{
    public:
    virtual void update(const string& message) = 0;
    virtual ~Observer(){};
};

class Subject
{
    private:
    vector<Observer*> observers;
    
    public:
    void subscribe(Observer* obs)
    {
        observers.push_back(obs);
    }
    void unsubscribe(Observer* obs)
    {
        
       observers.erase(remove(observers.begin(), observers.end(), obs), observers.end());

    }
    void notify(const string &message)
    {
        for (auto obs : observers)
            obs->update(message);
    }
};



class Observer1 : public Observer
{
    public:
    void update(const string& message) override
    {
        cout<<"observer1 received "<<message<<endl;
    }
};

class Observer2 : public Observer
{
    public:
    void update(const string& message) override
    {
        cout<<"observer2 received "<<message<<endl;
    }
};

int main()
{
    Subject s;
    Observer1* obs1 = new Observer1();
    Observer2* obs2 = new Observer2();
    s.subscribe(obs1);
    s.subscribe(obs2);
    
    s.notify("welcome subscribers");
    
    s.unsubscribe(obs2);
    
    s.notify("welcome to remaining subscribers");
    
    return 0;
}