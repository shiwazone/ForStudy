#pragma once
#define ABSTRACT_FACTORY_

#ifdef ABSTRACT_FACTORY_
#include <iostream>
#include <vector>
using namespace std;


class IMonitor
{
public:
    IMonitor(/* args */){};
    virtual ~IMonitor(){};
    virtual void Work() = 0;
};

class EdanMonitor : public IMonitor
{
public:
    EdanMonitor(){};
    virtual ~EdanMonitor(){};
    virtual void Work()
    {
        cout << "Edan Monitor Work" << endl;
    }
};

class MindrayMonitor : public IMonitor
{
public:
    MindrayMonitor(){};
    virtual ~MindrayMonitor(){};
    virtual void Work()
    {
        cout << "Mindray Monitor Work" << endl;
    }
};

class PhilipsMonitor : public IMonitor
{
public:
    PhilipsMonitor(){};
    virtual ~PhilipsMonitor(){};
    virtual void Work()
    {
        cout << "Philips Monitor Work" << endl;
    }
};


class IB_Ultrasound
{
public:
    IB_Ultrasound(){};
    virtual ~IB_Ultrasound(){};
    virtual void Work() = 0;
};

class Mindray_B_Ultrasound : public IB_Ultrasound
{
public:
    Mindray_B_Ultrasound(){};
    virtual ~Mindray_B_Ultrasound(){};
    virtual void Work() 
    {
         cout << "Mindray B_Ultrasound Work" << endl;
    }
};

class Edan_B_Ultrasound : public IB_Ultrasound
{
public:
    Edan_B_Ultrasound(){};
    virtual ~Edan_B_Ultrasound(){};
    virtual void Work() 
    {
         cout << "Edan B_Ultrasound Work" << endl;
    }
};

class Philips_B_Ultrasound : public IB_Ultrasound
{
public:
    Philips_B_Ultrasound(){};
    virtual ~Philips_B_Ultrasound(){};
    virtual void Work() 
    {
         cout << "Philips B_Ultrasound Work" << endl;
    }
};

class IMedicalFactory
{
public:
    virtual IMonitor* MakeMonitor() = 0;
    virtual IB_Ultrasound* Make_B_Ultrasound() = 0;
};

class Mindray : public IMedicalFactory
{
public:
    virtual IMonitor* MakeMonitor()
    {
        return new MindrayMonitor;
    }
    virtual IB_Ultrasound* Make_B_Ultrasound()
    {
        return new Mindray_B_Ultrasound;
    }
};

class Edan : public IMedicalFactory
{
public:
    virtual IMonitor* MakeMonitor()
    {
        return new EdanMonitor;
    }
    virtual IB_Ultrasound* Make_B_Ultrasound()
    {
        return new Edan_B_Ultrasound;
    }
};

class Philips : public IMedicalFactory
{
public:
    virtual IMonitor* MakeMonitor()
    {
        return new PhilipsMonitor;
    }

    virtual IB_Ultrasound* Make_B_Ultrasound()
    {
        return new Philips_B_Ultrasound;
    }
};
#endif