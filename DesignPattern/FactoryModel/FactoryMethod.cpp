#include"FactoryMethod.h"
#ifdef FACTORY_METHOD_

MonitorAgent::MonitorAgent()
{
    IMonitorFactory* fact = new Edan;
    m_monitorFactorys.push_back(fact);
    fact = new Mindray;
    m_monitorFactorys.push_back(fact);
    fact = new Philips;
    m_monitorFactorys.push_back(fact);
}

MonitorAgent::~MonitorAgent()
{
    vector<IMonitorFactory*>::iterator cur = m_monitorFactorys.begin();
    IMonitorFactory* fact = NULL;
    while (cur !=  m_monitorFactorys.end())
    {
        fact = *cur;
        delete fact;
        ++ cur;        
    }
    
    m_monitorFactorys.clear();
}

IMonitor* MonitorAgent::SaleMonitor()
{
    static short cnt = 0;    
    return m_monitorFactorys[cnt++ % m_monitorFactorys.size()]->MakeMonitor();
}
#endif