// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SChiefsPlayerController.h"

#ifdef SCHIEFS_SChiefsPlayerController_generated_h
#error "SChiefsPlayerController.generated.h already included, missing '#pragma once' in SChiefsPlayerController.h"
#endif
#define SCHIEFS_SChiefsPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASChiefsPlayerController *************************************************
SCHIEFS_API UClass* Z_Construct_UClass_ASChiefsPlayerController_NoRegister();

#define FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASChiefsPlayerController(); \
	friend struct Z_Construct_UClass_ASChiefsPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SCHIEFS_API UClass* Z_Construct_UClass_ASChiefsPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ASChiefsPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/SChiefs"), Z_Construct_UClass_ASChiefsPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ASChiefsPlayerController)


#define FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsPlayerController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASChiefsPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASChiefsPlayerController(ASChiefsPlayerController&&) = delete; \
	ASChiefsPlayerController(const ASChiefsPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASChiefsPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASChiefsPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASChiefsPlayerController) \
	NO_API virtual ~ASChiefsPlayerController();


#define FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsPlayerController_h_15_PROLOG
#define FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASChiefsPlayerController;

// ********** End Class ASChiefsPlayerController ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
