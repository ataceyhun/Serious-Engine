/*
 * This file is generated by Entity Class Compiler, (c) CroTeam 1997-98
 */

#ifndef _EntitiesMP_Grunt_INCLUDED
#define _EntitiesMP_Grunt_INCLUDED 1
#include <EntitiesMP/EnemyBase.h>
#include <EntitiesMP/BasicEffects.h>
extern DECL_DLL CEntityPropertyEnumType GruntType_enum;
enum GruntType {
  GT_SOLDIER = 0,
  GT_COMMANDER = 1,
};
DECL_DLL inline void ClearToDefault(GruntType &e) { e = (GruntType)0; } ;
extern "C" DECL_DLL CDLLEntityClass CGrunt_DLLClass;
class CGrunt : public CEnemyBase {
public:
  DECL_DLL virtual void SetDefaultProperties(void);
  enum GruntType m_gtType;
  CSoundObject m_soFire1;
  CSoundObject m_soFire2;
  
#line 75 "D:/SE1_GPL/Sources/EntitiesMP/Grunt.es"
virtual CTString GetPlayerKillDescription(const CTString & strPlayerName,const EDeath & eDeath);
   
#line 83 "D:/SE1_GPL/Sources/EntitiesMP/Grunt.es"
void * GetEntityInfo(void);
  
#line 94 "D:/SE1_GPL/Sources/EntitiesMP/Grunt.es"
virtual const CTFileName & GetComputerMessageName(void)const;
   
#line 104 "D:/SE1_GPL/Sources/EntitiesMP/Grunt.es"
void Precache(void);
   
#line 122 "D:/SE1_GPL/Sources/EntitiesMP/Grunt.es"
void ReceiveDamage(CEntity * penInflictor,enum DamageType dmtType,
#line 123 "D:/SE1_GPL/Sources/EntitiesMP/Grunt.es"
FLOAT fDamageAmmount,const FLOAT3D & vHitPoint,const FLOAT3D & vDirection);
   
#line 129 "D:/SE1_GPL/Sources/EntitiesMP/Grunt.es"
INDEX AnimForDamage(FLOAT fDamage);
   
#line 137 "D:/SE1_GPL/Sources/EntitiesMP/Grunt.es"
INDEX AnimForDeath(void);
   
#line 152 "D:/SE1_GPL/Sources/EntitiesMP/Grunt.es"
FLOAT WaitForDust(FLOAT3D & vStretch);
   
#line 165 "D:/SE1_GPL/Sources/EntitiesMP/Grunt.es"
void DeathNotify(void);
   
#line 171 "D:/SE1_GPL/Sources/EntitiesMP/Grunt.es"
void StandingAnim(void);
   
#line 178 "D:/SE1_GPL/Sources/EntitiesMP/Grunt.es"
void RunningAnim(void);
   
#line 181 "D:/SE1_GPL/Sources/EntitiesMP/Grunt.es"
void WalkingAnim(void);
   
#line 184 "D:/SE1_GPL/Sources/EntitiesMP/Grunt.es"
void RotatingAnim(void);
   
#line 189 "D:/SE1_GPL/Sources/EntitiesMP/Grunt.es"
void IdleSound(void);
   
#line 192 "D:/SE1_GPL/Sources/EntitiesMP/Grunt.es"
void SightSound(void);
   
#line 195 "D:/SE1_GPL/Sources/EntitiesMP/Grunt.es"
void WoundSound(void);
   
#line 198 "D:/SE1_GPL/Sources/EntitiesMP/Grunt.es"
void DeathSound(void);
   
#line 203 "D:/SE1_GPL/Sources/EntitiesMP/Grunt.es"
void EnemyPostInit(void);
#define  STATE_CGrunt_Fire 0x01570000
  BOOL 
#line 214 "D:/SE1_GPL/Sources/EntitiesMP/Grunt.es"
Fire(const CEntityEvent &__eeInput);
  BOOL H0x01570001_Fire_01(const CEntityEvent &__eeInput);
  BOOL H0x01570002_Fire_02(const CEntityEvent &__eeInput);
  BOOL H0x01570003_Fire_03(const CEntityEvent &__eeInput);
  BOOL H0x01570004_Fire_04(const CEntityEvent &__eeInput);
  BOOL H0x01570005_Fire_05(const CEntityEvent &__eeInput);
  BOOL H0x01570006_Fire_06(const CEntityEvent &__eeInput);
  BOOL H0x01570007_Fire_07(const CEntityEvent &__eeInput);
  BOOL H0x01570008_Fire_08(const CEntityEvent &__eeInput);
#define  STATE_CGrunt_SoldierAttack 0x01570009
  BOOL 
#line 229 "D:/SE1_GPL/Sources/EntitiesMP/Grunt.es"
SoldierAttack(const CEntityEvent &__eeInput);
  BOOL H0x0157000a_SoldierAttack_01(const CEntityEvent &__eeInput);
  BOOL H0x0157000b_SoldierAttack_02(const CEntityEvent &__eeInput);
  BOOL H0x0157000c_SoldierAttack_03(const CEntityEvent &__eeInput);
  BOOL H0x0157000d_SoldierAttack_04(const CEntityEvent &__eeInput);
  BOOL H0x0157000e_SoldierAttack_05(const CEntityEvent &__eeInput);
  BOOL H0x0157000f_SoldierAttack_06(const CEntityEvent &__eeInput);
#define  STATE_CGrunt_CommanderAttack 0x01570010
  BOOL 
#line 248 "D:/SE1_GPL/Sources/EntitiesMP/Grunt.es"
CommanderAttack(const CEntityEvent &__eeInput);
  BOOL H0x01570011_CommanderAttack_01(const CEntityEvent &__eeInput);
  BOOL H0x01570012_CommanderAttack_02(const CEntityEvent &__eeInput);
  BOOL H0x01570013_CommanderAttack_03(const CEntityEvent &__eeInput);
  BOOL H0x01570014_CommanderAttack_04(const CEntityEvent &__eeInput);
  BOOL H0x01570015_CommanderAttack_05(const CEntityEvent &__eeInput);
  BOOL H0x01570016_CommanderAttack_06(const CEntityEvent &__eeInput);
  BOOL H0x01570017_CommanderAttack_07(const CEntityEvent &__eeInput);
  BOOL H0x01570018_CommanderAttack_08(const CEntityEvent &__eeInput);
  BOOL H0x01570019_CommanderAttack_09(const CEntityEvent &__eeInput);
  BOOL H0x0157001a_CommanderAttack_10(const CEntityEvent &__eeInput);
  BOOL H0x0157001b_CommanderAttack_11(const CEntityEvent &__eeInput);
  BOOL H0x0157001c_CommanderAttack_12(const CEntityEvent &__eeInput);
#define  STATE_CGrunt_Main 1
  BOOL 
#line 291 "D:/SE1_GPL/Sources/EntitiesMP/Grunt.es"
Main(const CEntityEvent &__eeInput);
};
#endif // _EntitiesMP_Grunt_INCLUDED