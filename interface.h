/**********************************************************************************
Homework Name: Conversion Problem
Name: Marco Andrade
Compiler: Visual Studio 2017
Description: This program lists a menu that asks the user if they want to convert
feet and inches to meters and centemiters or meters and centimeter to feet and 
meters.
Due Date: 3/12/19
**********************************************************************************/
#ifndef interface_Header
#define interface_Header
#include <iostream>
using namespace std;

const double CM_PER_INCH = 2.54;
const double INCH_PER_CM = 1 / 2.54;
const double  FEET_PER_METERS = 3.28;

void Eng2Metric();
void Metric2Eng();
#endif