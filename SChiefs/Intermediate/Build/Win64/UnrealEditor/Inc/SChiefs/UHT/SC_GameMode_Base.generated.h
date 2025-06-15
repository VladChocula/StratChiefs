// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameMode/SC_GameMode_Base.h"

#ifdef SCHIEFS_SC_GameMode_Base_generated_h
#error "SC_GameMode_Base.generated.h already included, missing '#pragma once' in SC_GameMode_Base.h"
#endif
#define SCHIEFS_SC_GameMode_Base_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASC_GameMode_Base ********************************************************
SCHIEFS_API UClass* Z_Construct_UClass_ASC_GameMode_Base_NoRegister();

#define FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_GameMode_SC_GameMode_Base_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASC_GameMode_Base(); \
	friend struct Z_Construct_UClass_ASC_GameMode_Base_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCHIEFS_API UClass* Z_Construct_UClass_ASC_GameMode_Base_NoRegister(); \
public: \
	DECLARE_CLASS2(ASC_GameMode_Base, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SChiefs"), Z_Construct_UClass_ASC_GameMode_Base_NoRegister) \
	DECLARE_SERIALIZER(ASC_GameMode_Base)


#define FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_GameMode_SC_GameMode_Base_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASC_GameMode_Base(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASC_GameMode_Base(ASC_GameMode_Base&&) = delete; \
	ASC_GameMode_Base(const ASC_GameMode_Base&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASC_GameMode_Base); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASC_GameMode_Base); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASC_GameMode_Base) \
	NO_API virtual ~ASC_GameMode_Base();


#define FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_GameMode_SC_GameMode_Base_h_12_PROLOG
#define FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_GameMode_SC_GameMode_Base_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_GameMode_SC_GameMode_Base_h_15_INCLASS_NO_PURE_DECLS \
	FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_GameMode_SC_GameMode_Base_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASC_GameMode_Base;

// ********** End Class ASC_GameMode_Base **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_GameMode_SC_GameMode_Base_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
