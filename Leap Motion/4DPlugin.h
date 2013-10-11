/* --------------------------------------------------------------------------------
 #
 #	4DPlugin.h
 #	source generated by 4D Plugin Wizard
 #	Project : Leap Motion
 #	author : miyako
 #	2013/10/10
 #
 # --------------------------------------------------------------------------------*/

#include "4DPluginAPI.h"

#include "leap_listener.h"

void listenerLoop();
void listenerLoopFinish();
void listenerBegin();

// --- Gestures
void LEAP_Set_listener(sLONG_PTR *pResult, PackagePtr pParams);
void LEAP_Get_listener(sLONG_PTR *pResult, PackagePtr pParams);

// --- Settings
void LEAP_Set_policy(sLONG_PTR *pResult, PackagePtr pParams);
void LEAP_Get_policy(sLONG_PTR *pResult, PackagePtr pParams);
void LEAP_Get_parameter(sLONG_PTR *pResult, PackagePtr pParams);
void LEAP_Set_parameter(sLONG_PTR *pResult, PackagePtr pParams);

// --- Device
void LEAP_Get_device_name(sLONG_PTR *pResult, PackagePtr pParams);
void LEAP_Get_device_vertical(sLONG_PTR *pResult, PackagePtr pParams);
void LEAP_Is_application_frontmost(sLONG_PTR *pResult, PackagePtr pParams);
void LEAP_Get_device_range(sLONG_PTR *pResult, PackagePtr pParams);
void LEAP_Get_device_horizontal(sLONG_PTR *pResult, PackagePtr pParams);
void LEAP_Is_device_connected(sLONG_PTR *pResult, PackagePtr pParams);