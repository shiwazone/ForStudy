#include <iostream>
#include "./FactoryModel/SimpleFactory.h"
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
        ++index;
        carStoreBegin = carStores[index];
    }    
#endif
    return 0;
}