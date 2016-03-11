/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#define ENTITYCLASS CSpinner

CEntityProperty CSpinner_properties[] = {
 CEntityProperty(CEntityProperty::EPT_ENTITYPTR, NULL, (0x0000015c<<8)+1, offsetof(CSpinner, m_penParent), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x0000015c<<8)+2, offsetof(CSpinner, m_aSpinRotation), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x0000015c<<8)+3, offsetof(CSpinner, m_vSpeed), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000015c<<8)+4, offsetof(CSpinner, m_tmExpire), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x0000015c<<8)+5, offsetof(CSpinner, m_vLastSpeed), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_BOOL, NULL, (0x0000015c<<8)+6, offsetof(CSpinner, m_bImpulse), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000015c<<8)+7, offsetof(CSpinner, m_tmWaitAfterImpulse), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT, NULL, (0x0000015c<<8)+10, offsetof(CSpinner, m_tmSpawn), "", 0, 0, 0),
 CEntityProperty(CEntityProperty::EPT_FLOAT3D, NULL, (0x0000015c<<8)+11, offsetof(CSpinner, m_vSpinSpeed), "", 0, 0, 0),
};
#define CSpinner_propertiesct ARRAYCOUNT(CSpinner_properties)

CEntityComponent CSpinner_components[] = {
  CEntityComponent()
};
#define CSpinner_componentsct 0


CEventHandlerEntry CSpinner_handlers[] = {
 {1, -1, CEntity::pEventHandler(&CSpinner::
#line 41 "D:/SE1_GPL/Sources/EntitiesMP/Spinner.es"
Main),DEBUGSTRING("CSpinner::Main")},
 {0x015c0001, -1, CEntity::pEventHandler(&CSpinner::H0x015c0001_Main_01), DEBUGSTRING("CSpinner::H0x015c0001_Main_01")},
 {0x015c0002, -1, CEntity::pEventHandler(&CSpinner::H0x015c0002_Main_02), DEBUGSTRING("CSpinner::H0x015c0002_Main_02")},
 {0x015c0003, -1, CEntity::pEventHandler(&CSpinner::H0x015c0003_Main_03), DEBUGSTRING("CSpinner::H0x015c0003_Main_03")},
 {0x015c0004, -1, CEntity::pEventHandler(&CSpinner::H0x015c0004_Main_04), DEBUGSTRING("CSpinner::H0x015c0004_Main_04")},
 {0x015c0005, -1, CEntity::pEventHandler(&CSpinner::H0x015c0005_Main_05), DEBUGSTRING("CSpinner::H0x015c0005_Main_05")},
 {0x015c0006, -1, CEntity::pEventHandler(&CSpinner::H0x015c0006_Main_06), DEBUGSTRING("CSpinner::H0x015c0006_Main_06")},
 {0x015c0007, -1, CEntity::pEventHandler(&CSpinner::H0x015c0007_Main_07), DEBUGSTRING("CSpinner::H0x015c0007_Main_07")},
};
#define CSpinner_handlersct ARRAYCOUNT(CSpinner_handlers)

CEntity *CSpinner_New(void) { return new CSpinner; };
void CSpinner_OnInitClass(void) {};
void CSpinner_OnEndClass(void) {};
void CSpinner_OnPrecache(CDLLEntityClass *pdec, INDEX iUser) {};
void CSpinner_OnWorldEnd(CWorld *pwo) {};
void CSpinner_OnWorldInit(CWorld *pwo) {};
void CSpinner_OnWorldTick(CWorld *pwo) {};
void CSpinner_OnWorldRender(CWorld *pwo) {};
ENTITY_CLASSDEFINITION(CSpinner, CRationalEntity, "Spinner", "", 0x0000015c);
DECLARE_CTFILENAME(_fnmCSpinner_tbn, "");