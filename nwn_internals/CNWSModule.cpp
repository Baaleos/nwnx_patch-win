#include "types.h"
#include "nwn_internals.h"

void			(__thiscall *CNWSModule__AddObjectToLimbo)(CNWSModule*, uint32_t) = (void (__thiscall *)(CNWSModule*, uint32_t))0x004DB3D0;
int 			(__thiscall *CNWSModule__AddObjectToLookupTable)(CNWSModule *pThis, CExoString Tag, int oID) = (int (__thiscall*)(CNWSModule *pThis, CExoString Tag, int oID))0x004DA3C0;
nwn_objid_t		(__thiscall *CNWSModule__FindObjectByTagOrdinal)(CNWSModule *pThis, CExoString *sTag, int nNth) = (nwn_objid_t (__thiscall*)(CNWSModule *pThis, CExoString *sTag, int nNth))0x004DA780;
CNWSArea * 		(__thiscall *CNWSModule__GetArea)(CNWSModule *pThis, nwn_objid_t) = (CNWSArea* (__thiscall*)(CNWSModule *pThis, nwn_objid_t))0x004D2390;
CNWSPlayerTURD* (__thiscall *CNWSModule__GetPlayerTURDFromList)(CNWSModule *pThis, CNWSPlayer *) = (CNWSPlayerTURD* (__thiscall*)(CNWSModule *pThis, CNWSPlayer *))0x004D7330;
int 			(__thiscall *CNWSModule__RemoveObjectFromLookupTable)(CNWSModule *pThis, CExoString Tag, int oID) = (int (__thiscall*)(CNWSModule *pThis, CExoString Tag, int oID))0x004DA5E0;
void 			(__thiscall *CNWSModule__SetScriptName)(CNWSModule *pThis, int iScript, CExoString ScriptName) = (void (__thiscall*)(CNWSModule *pThis, int iScript, CExoString ScriptName))0x004D97F0;
nwn_objid_t(__thiscall *CNWSModule__FindObjectByTagTypeOrdinal)(CNWSModule *pTHIS, CExoString *sTag, int type, unsigned long nth) = (nwn_objid_t(__thiscall*)(CNWSModule *pTHIS, CExoString *sTag, int type, unsigned long nth))0x004DA8E0;

nwn_objid_t	CNWSModule_s::FindObjectByTagTypeOrdinal(CExoString *tag, int type, unsigned long nth){
	return CNWSModule__FindObjectByTagTypeOrdinal(this,tag,type,nth);
}

void CNWSModule_s::AddObjectToLimbo(nwn_objid_t oID) {
	CNWSModule__AddObjectToLimbo(this, oID);
}

int CNWSModule_s::AddObjectToLookupTable(CExoString Tag, nwn_objid_t oID) {
	return CNWSModule__AddObjectToLookupTable(this, Tag, oID);
}

CNWSArea *CNWSModule_s::GetArea(nwn_objid_t oID) {
	return CNWSModule__GetArea(this, oID);
}

CNWSPlayerTURD* CNWSModule_s::GetPlayerTURDFromList(CNWSPlayer *Player) {
	return CNWSModule__GetPlayerTURDFromList(this, Player);
}

void CNWSModule_s::SetScriptName(int iScript, CExoString ScriptName) {
	CNWSModule__SetScriptName(this, iScript, ScriptName);
}

nwn_objid_t CNWSModule_s::FindObjectByTagOrdinal(CExoString *sTag, int nNth) {
	return CNWSModule__FindObjectByTagOrdinal(this, sTag, nNth);
}

int CNWSModule_s::RemoveObjectFromLookupTable(CExoString Tag, nwn_objid_t oID) {
	return CNWSModule__RemoveObjectFromLookupTable(this, Tag, oID);
}
