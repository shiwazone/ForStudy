#pragma once
#define SIMPLE_FACTORY_

#ifdef SIMPLE_FACTORY_
#include <iostream>
using namespace std;


enum CarTypeEnum
{
    Toyota_Car,
    Ford_Car,
    BMW_Car,
};


class ICar
{
    public:
        ICar(){};
        virtual ~ICar(){};

        virtual void Run() = 0;
};

class ToyotaCar : public ICar
{
public:
    ToyotaCar(/* args */){};
    virtual ~ToyotaCar(){};

    virtual void Run()
    {
        cout << "ToyotaCar Running" << endl;
    }
};

class FordCar : public ICar
{
public:
    FordCar(/* args */){};
    virtual ~FordCar(){};

    virtual void Run()
    {
        cout << "FordCar Running" << endl;
    }
};

class BMWCar : public ICar
{
public:
    BMWCar(/* args */){};
    virtual ~BMWCar(){};

    virtual void Run()
    {
        cout << "BMWCar Running" << endl;
    }
};


class CarSimpleFactory
{
public:
    CarSimpleFactory(/* args */);
    ~CarSimpleFactory();

    ICar* CreateCar(CarTypeEnum type);
};
#endif // SIMPLE_FACTORY_



