// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SChiefsGameMode.h"

#ifdef SCHIEFS_SChiefsGameMode_generated_h
#error "SChiefsGameMode.generated.h already included, missing '#pragma once' in SChiefsGameMode.h"
#endif
#define SCHIEFS_SChiefsGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASChiefsGameMode *********************************************************
SCHIEFS_API UClass* Z_Construct_UClass_ASChiefsGameMode_NoRegister();

#define FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASChiefsGameMode(); \
	friend struct Z_Construct_UClass_ASChiefsGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCHIEFS_API UClass* Z_Construct_UClass_ASChiefsGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ASChiefsGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/SChiefs"), Z_Construct_UClass_ASChiefsGameMode_NoRegister) \
	DECLARE_SERIALIZER(ASChiefsGameMode)


#define FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASChiefsGameMode(ASChiefsGameMode&&) = delete; \
	ASChiefsGameMode(const ASChiefsGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASChiefsGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASChiefsGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ASChiefsGameMode) \
	NO_API virtual ~ASChiefsGameMode();


#define FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsGameMode_h_12_PROLOG
#define FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASChiefsGameMode;

// ********** End Class ASChiefsGameMode ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
