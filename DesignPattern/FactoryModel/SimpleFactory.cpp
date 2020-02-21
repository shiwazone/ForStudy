#include"SimpleFactory.h"

#ifdef SIMPLE_FACTORY_

CarSimpleFactory::CarSimpleFactory()
{

}

CarSimpleFactory::~CarSimpleFactory()
{
    
}

ICar* CarSimpleFactory::CreateCar(CarTypeEnum type)
{
    ICar* car = NULL;
    switch (type)
    {
        case Toyota_Car:
            car = new ToyotaCar();
            break;
        case Ford_Car:
            car = new FordCar();
            break;
        case BMW_Car:
            car = new BMWCar();
            break;
        default:
            break;
    }

    return car;
}

#endif // SIMPLE_FACTORY_
