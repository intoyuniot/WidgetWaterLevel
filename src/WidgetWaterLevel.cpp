
#include "WidgetWaterLevel.h"


WidgetWaterLevel::WidgetWaterLevel(uint8_t ucItem)
{
    _Item=ucItem;
    memset(pDataWaterLevelTopic,0,sizeof(pDataWaterLevelTopic));
    sprintf(pDataWaterLevelTopic,"channel/waterLevel_%d/data/waterLevel",_Item);
}

WidgetWaterLevel::~WidgetWaterLevel()
{
    
}

void WidgetWaterLevel::begin(void (*UserCallBack)(void))
{

}

void WidgetWaterLevel::displayWaterLevel(float fWaterLevel)
{
	IntoRobot.publish(pDataWaterLevelTopic,fWaterLevel);
}









