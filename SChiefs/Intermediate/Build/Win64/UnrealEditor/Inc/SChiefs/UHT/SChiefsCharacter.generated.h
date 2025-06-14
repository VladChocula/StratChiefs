// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SChiefsCharacter.h"

#ifdef SCHIEFS_SChiefsCharacter_generated_h
#error "SChiefsCharacter.generated.h already included, missing '#pragma once' in SChiefsCharacter.h"
#endif
#define SCHIEFS_SChiefsCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASChiefsCharacter ********************************************************
#define FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


SCHIEFS_API UClass* Z_Construct_UClass_ASChiefsCharacter_NoRegister();

#define FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASChiefsCharacter(); \
	friend struct Z_Construct_UClass_ASChiefsCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCHIEFS_API UClass* Z_Construct_UClass_ASChiefsCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ASChiefsCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SChiefs"), Z_Construct_UClass_ASChiefsCharacter_NoRegister) \
	DECLARE_SERIALIZER(ASChiefsCharacter)


#define FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASChiefsCharacter(ASChiefsCharacter&&) = delete; \
	ASChiefsCharacter(const ASChiefsCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASChiefsCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASChiefsCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ASChiefsCharacter) \
	NO_API virtual ~ASChiefsCharacter();


#define FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsCharacter_h_21_PROLOG
#define FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASChiefsCharacter;

// ********** End Class ASChiefsCharacter **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
