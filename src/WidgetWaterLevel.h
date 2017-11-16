#ifndef WIDGET_WATER_LEVEL_H_
#define WIDGET_WATER_LEVEL_H_

#include "application.h"


class WidgetWaterLevel
{
public:
    WidgetWaterLevel(uint8_t ucItem = 0);
    ~WidgetWaterLevel();
    void begin(void (*UserCallBack)(void) = NULL);
    void displayWaterLevel(float fWaterLevel);

    
private:
    char pDataWaterLevelTopic[64];
    uint8_t _Item=0;         
};

#endif
