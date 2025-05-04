#include<iostream>
#include<stdexcept>
using namespace std;
enum ExceptionType {IntegerType, StringType, RuntimeException};
void callException(ExceptionType e)
{
    switch(e){
        case (ExceptionType::IntegerType):
        throw 10;
        break;
        case (ExceptionType::StringType):
        throw "this is an string exception";
        break;
        case (ExceptionType::RuntimeException):
        throw runtime_error("this is an runtime_error exception");
        break;
        default:
        throw "general exception";
        break;
    }
    return;
}

int main()
{
    try{
        callException(ExceptionType::IntegerType);
    }
    catch(int e)
    {
        cout<<"integer exception "<<e<<endl;
    }
    
    try{
        callException(ExceptionType::StringType);
    }
    catch(const char* s)
    {
        cout<<"string exception "<<s<<endl;
    }
    
    try{
        callException(ExceptionType::RuntimeException);
    }
    catch(const runtime_error& e)
    {
        cout<<"runtime exception "<<e.what()<<endl;
    }
    return 0;
}