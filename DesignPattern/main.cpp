#include <iostream>
#include "./FactoryModel/SimpleFactory.h"
#include "./FactoryModel/FactoryMethod.h"
#include "./FactoryModel/AbstractFactory.h"
using namespace std;

int main()
{
#ifdef SIMPLE_FACTORY_
    CarTypeEnum carStores[]
    {
        Ford_Car,
        Toyota_Car,
        BMW_Car,
        Ford_Car,
        Ford_Car,
    };

    unsigned short index = 0;
    unsigned short storesCarCount = sizeof(carStores) / sizeof(carStores[0]);
    CarTypeEnum carStoreBegin = carStores[index];

    ICar * car = NULL;
     CarSimpleFactory facotry;
    while (index < storesCarCount)
    {
        car = facotry.CreateCar(carStoreBegin);
        car->Run();
        delete car;
        ++index;
        carStoreBegin = carStores[index];
    }    
#endif

#ifdef FACTORY_METHOD_
    MonitorAgent agent;
    vector<IMonitor*> monitors;
    for (size_t i = 0; i < 10; i++)
    {
        monitors.push_back(agent.SaleMonitor());
    }
    
    for (size_t i = 0; i < 10; i++)
    {
        monitors.at(i)->Work();
    }

    
#endif

#ifdef ABSTRACT_FACTORY_
    IMonitor* monitor = NULL;
    IB_Ultrasound* BSound = NULL;
    IMedicalFactory* factory = NULL;

    factory = new Mindray;
    monitor = factory->MakeMonitor();
    BSound = factory->Make_B_Ultrasound();
    monitor->Work();
    BSound->Work();
    delete monitor;
    delete BSound;

    factory = new Edan;
    monitor = factory->MakeMonitor();
    BSound = factory->Make_B_Ultrasound();
    monitor->Work();
    BSound->Work();
    delete monitor;
    delete BSound;

    factory = new Philips;
    monitor = factory->MakeMonitor();
    BSound = factory->Make_B_Ultrasound();
    monitor->Work();
    BSound->Work();
    delete monitor;
    delete BSound;
#endif
    return 0;
}