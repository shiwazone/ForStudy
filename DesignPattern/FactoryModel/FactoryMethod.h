#pragma once
//#define FACTORY_METHOD_

#ifdef FACTORY_METHOD_
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

class IMonitorFactory
{
public:
    virtual IMonitor* MakeMonitor() = 0;
};

class Mindray : public IMonitorFactory
{
public:
    virtual IMonitor* MakeMonitor()
    {
        return new MindrayMonitor;
    }
};

class Edan : public IMonitorFactory
{
public:
    virtual IMonitor* MakeMonitor()
    {
        return new EdanMonitor;
    }
};

class Philips : public IMonitorFactory
{
public:
    virtual IMonitor* MakeMonitor()
    {
        return new PhilipsMonitor;
    }
};

class MonitorAgent
{
public:
    MonitorAgent();
    ~ MonitorAgent();
    IMonitor* SaleMonitor();
private:
    vector<IMonitorFactory*> m_monitorFactorys;
};

#endif