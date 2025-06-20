// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/SC_PlayerController.h"

#ifdef SCHIEFS_SC_PlayerController_generated_h
#error "SC_PlayerController.generated.h already included, missing '#pragma once' in SC_PlayerController.h"
#endif
#define SCHIEFS_SC_PlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASC_PlayerController *****************************************************
SCHIEFS_API UClass* Z_Construct_UClass_ASC_PlayerController_NoRegister();

#define FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_Public_Player_SC_PlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASC_PlayerController(); \
	friend struct Z_Construct_UClass_ASC_PlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCHIEFS_API UClass* Z_Construct_UClass_ASC_PlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ASC_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SChiefs"), Z_Construct_UClass_ASC_PlayerController_NoRegister) \
	DECLARE_SERIALIZER(ASC_PlayerController)


#define FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_Public_Player_SC_PlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASC_PlayerController(ASC_PlayerController&&) = delete; \
	ASC_PlayerController(const ASC_PlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASC_PlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASC_PlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASC_PlayerController) \
	NO_API virtual ~ASC_PlayerController();


#define FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_Public_Player_SC_PlayerController_h_16_PROLOG
#define FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_Public_Player_SC_PlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_Public_Player_SC_PlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_Public_Player_SC_PlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASC_PlayerController;

// ********** End Class ASC_PlayerController *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_Public_Player_SC_PlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
