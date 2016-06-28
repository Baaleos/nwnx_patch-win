#include "types.h"
#include "nwn_internals.h"

CNWSModule*				(__thiscall *CServerExoAppInternal__GetModule)(CServerExoAppInternal*) = (CNWSModule* (__thiscall *)(CServerExoAppInternal*))0x004530A0;
CNWSCreature*			(__thiscall *CServerExoAppInternal__GetCreatureByGameObjectID)(CServerExoAppInternal*, unsigned long) = (CNWSCreature * (__thiscall *)(CServerExoAppInternal*, unsigned long))0x0045C020;
CNWSArea* 				(__thiscall *CServerExoAppInternal__GetAreaByGameObjectID)(CServerExoAppInternal *, nwn_objid_t Area) = (CNWSArea* (__thiscall*)(CServerExoAppInternal *, nwn_objid_t Area))0x0045C0C0;
uint32_t				(__thiscall *CServerExoAppInternal__GetPlayerIDByGameObjectID)(CServerExoAppInternal* pThis, nwn_objid_t oID) = (uint32_t (__thiscall*)(CServerExoAppInternal* pThis, nwn_objid_t oID))0x00462C80;
CNWSItem*  				(__thiscall *CServerExoAppInternal__GetItemByGameObjectID)(CServerExoAppInternal* pThis, nwn_objid_t oID) = (CNWSItem* (__thiscall*)(CServerExoAppInternal* pThis, nwn_objid_t oID))0x0045BFD0;
CGenericObject*			(__thiscall *CServerExoAppInternal__GetGameObject)(CServerExoAppInternal* pThis, nwn_objid_t oID) = (CGenericObject* (__thiscall*)(CServerExoAppInternal* pThis, nwn_objid_t oID))0x0045BF40;
CNWSPlaceable*  		(__thiscall *CServerExoAppInternal__GetPlaceableByGameObjectID)(CServerExoAppInternal *, nwn_objid_t Placeable) = (CNWSPlaceable* (__thiscall*)(CServerExoAppInternal *, nwn_objid_t Placeable))0x0045C160;
CNWSAreaOfEffectObject*	(__thiscall *CServerExoAppInternal__GetAreaOfEffectByGameObjectID)(CServerExoAppInternal* pThis, nwn_objid_t oID) = (CNWSAreaOfEffectObject* (__thiscall*)(CServerExoAppInternal* pThis, nwn_objid_t oID))0x0045C200;
CNWSDoor* 				(__thiscall *CServerExoAppInternal__GetDoorByGameObjectID)(CServerExoAppInternal *pThis, nwn_objid_t oID) = (CNWSDoor* (__thiscall*)(CServerExoAppInternal *pThis, nwn_objid_t oID))0x0045C1B0;
CNWSEncounter* 			(__thiscall *CServerExoAppInternal__GetEncounterByGameObjectID)(CServerExoAppInternal *pThis, nwn_objid_t oID) = (CNWSEncounter* (__thiscall*)(CServerExoAppInternal *pThis, nwn_objid_t oID))0x0045C2A0;
CNWSStore* 				(__thiscall *CServerExoAppInternal__GetStoreByGameObjectID)(CServerExoAppInternal* pThis, nwn_objid_t oID) = (CNWSStore* (__thiscall*)(CServerExoAppInternal* pThis, nwn_objid_t oID))0x0045BF80;
CNWSTrigger* 			(__thiscall *CServerExoAppInternal__GetTriggerByGameObjectID)(CServerExoAppInternal* pThis, nwn_objid_t oID) = (CNWSTrigger* (__thiscall*)(CServerExoAppInternal* pThis, nwn_objid_t oID))0x0045C110;
CNWSWaypoint* 			(__thiscall *CServerExoAppInternal__GetWaypointByGameObjectID)(CServerExoAppInternal* pThis, nwn_objid_t oID) = (CNWSWaypoint* (__thiscall*)(CServerExoAppInternal* pThis, nwn_objid_t oID))0x0045C250;
CNWSPlayer*				(__thiscall *CServerExoAppInternal__GetClientObjectByObjectId)(CServerExoAppInternal *pThis, unsigned long id) = (CNWSPlayer* (__thiscall*)(CServerExoAppInternal *pThis, unsigned long id))0x452F70;
CNWSPlayer*				(__thiscall *CServerExoAppInternal__GetClientObjectByPlayerId)(CServerExoAppInternal*, unsigned long, unsigned char) = (CNWSPlayer* (__thiscall*)(CServerExoAppInternal*, unsigned long, unsigned char))0x452FF0;
int 					(__thiscall *CServerExoAppInternal__GetFactionOfObject)(CServerExoAppInternal* pThis, nwn_objid_t oID, uint32_t *ret_factionID) = (int (__thiscall*)(CServerExoAppInternal* pThis, nwn_objid_t, uint32_t *ret_factionID))0x004615A0;
int						(__thiscall *CServerExoAppInternal__GetPlayerLanguage)(CServerExoAppInternal* pThis, unsigned long oID) = (int (__thiscall*)(CServerExoAppInternal* pThis, unsigned long oID))0x45C340;

int CServerExoAppInternal_s::GetPlayerLanguage(unsigned long oID)
{
	return CServerExoAppInternal__GetPlayerLanguage(this, oID);
}

int	CServerExoAppInternal_s::GetSetMaxLevel( int nMaxLevel ){
	
	DWORD ptr = *((DWORD*)this + 16387);
	DWORD lvl = *(DWORD*)(ptr + 180);
	if( nMaxLevel <= 0 )
		return lvl;
	*(DWORD *)(ptr + 180) = nMaxLevel;
	return lvl;
}

CNWSWaypoint *CServerExoAppInternal_s::GetWaypointByGameObjectID(nwn_objid_t oID) {
	return CServerExoAppInternal__GetWaypointByGameObjectID(this, oID);
}

CNWSArea *CServerExoAppInternal_s::GetAreaByGameObjectID(nwn_objid_t oID) {
	return CServerExoAppInternal__GetAreaByGameObjectID(this, oID);
}

CNWSAreaOfEffectObject *CServerExoAppInternal_s::GetAreaOfEffectByGameObjectID(nwn_objid_t oID) {
	return CServerExoAppInternal__GetAreaOfEffectByGameObjectID(this, oID);
}

CNWSCreature *CServerExoAppInternal_s::GetCreatureByGameObjectID(nwn_objid_t oID) {
	return CServerExoAppInternal__GetCreatureByGameObjectID(this, oID);
}

CNWSDoor *CServerExoAppInternal_s::GetDoorByGameObjectID(nwn_objid_t oID) {
	return CServerExoAppInternal__GetDoorByGameObjectID(this, oID);
}

CNWSEncounter *CServerExoAppInternal_s::GetEncounterByGameObjectID(nwn_objid_t oID) {
	return CServerExoAppInternal__GetEncounterByGameObjectID(this, oID);
}

int CServerExoAppInternal_s::GetFactionOfObject(nwn_objid_t oID, uint32_t *ret_factionID) {
	return CServerExoAppInternal__GetFactionOfObject(this, oID, ret_factionID);
}

CGenericObject *CServerExoAppInternal_s::GetGameObject(nwn_objid_t oID) {
	return CServerExoAppInternal__GetGameObject(this, oID);
}

CNWSItem * CServerExoAppInternal_s::GetItemByGameObjectID(nwn_objid_t oID) {
	return CServerExoAppInternal__GetItemByGameObjectID(this, oID);
}

CNWSModule *CServerExoAppInternal_s::GetModule() {
	return CServerExoAppInternal__GetModule(this);
}

CNWSPlaceable *CServerExoAppInternal_s::GetPlaceableByGameObjectID(nwn_objid_t oID) {
	return CServerExoAppInternal__GetPlaceableByGameObjectID(this, oID);
}

uint32_t CServerExoAppInternal_s::GetPlayerIDByGameObjectID(nwn_objid_t oID) {
	return CServerExoAppInternal__GetPlayerIDByGameObjectID(this, oID);
}

CNWSPlayer* CServerExoAppInternal::GetClientObjectByPlayerId(unsigned long id, unsigned char a2)
{
	return CServerExoAppInternal__GetClientObjectByPlayerId(this, id,a2);
}

CNWSStore *CServerExoAppInternal_s::GetStoreByGameObjectID(nwn_objid_t oID) {
	return CServerExoAppInternal__GetStoreByGameObjectID(this, oID);
}

CNWSTrigger *CServerExoAppInternal_s::GetTriggerByGameObjectID(nwn_objid_t oID) {
	return CServerExoAppInternal__GetTriggerByGameObjectID(this, oID);
}

CNWSPlayer* CServerExoAppInternal::GetClientObjectByObjectId(unsigned long id) 
{
	return CServerExoAppInternal__GetClientObjectByObjectId(this, id);
}