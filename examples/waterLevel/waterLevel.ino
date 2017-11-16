/*
************************************************************************
* 作者:  IntoRobot Team 
* 版本:  V1.0.0
* 日期:  03-30-15
************************************************************************
功能描述：
水位溢出检测计：检测水位是否溢出

所需器件:
1.水位检测传感器

接线说明:
水位检测传感器
1.+                          +3.3V
2.-                           GND
3.S                           A0
*/

#include <WidgetWaterLevel.h>

#define WaterSensorINPUT   A0

WidgetWaterLevel water = WidgetWaterLevel();

void setup()
{
	pinMode(WaterSensorINPUT, AN_INPUT);
}

void loop()
{
	water.displayWaterLevel((analogRead(WaterSensorINPUT)/4095)*40);
	delay(3000);
}
