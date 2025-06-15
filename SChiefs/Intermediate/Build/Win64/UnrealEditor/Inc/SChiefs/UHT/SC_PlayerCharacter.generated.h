// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/SC_PlayerCharacter.h"

#ifdef SCHIEFS_SC_PlayerCharacter_generated_h
#error "SC_PlayerCharacter.generated.h already included, missing '#pragma once' in SC_PlayerCharacter.h"
#endif
#define SCHIEFS_SC_PlayerCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASC_PlayerCharacter ******************************************************
SCHIEFS_API UClass* Z_Construct_UClass_ASC_PlayerCharacter_NoRegister();

#define FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_Public_Player_SC_PlayerCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASC_PlayerCharacter(); \
	friend struct Z_Construct_UClass_ASC_PlayerCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCHIEFS_API UClass* Z_Construct_UClass_ASC_PlayerCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ASC_PlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SChiefs"), Z_Construct_UClass_ASC_PlayerCharacter_NoRegister) \
	DECLARE_SERIALIZER(ASC_PlayerCharacter)


#define FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_Public_Player_SC_PlayerCharacter_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASC_PlayerCharacter(ASC_PlayerCharacter&&) = delete; \
	ASC_PlayerCharacter(const ASC_PlayerCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASC_PlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASC_PlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASC_PlayerCharacter) \
	NO_API virtual ~ASC_PlayerCharacter();


#define FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_Public_Player_SC_PlayerCharacter_h_12_PROLOG
#define FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_Public_Player_SC_PlayerCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_Public_Player_SC_PlayerCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_Public_Player_SC_PlayerCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASC_PlayerCharacter;

// ********** End Class ASC_PlayerCharacter ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_Public_Player_SC_PlayerCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
