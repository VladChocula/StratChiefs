// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/SC_PlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSC_PlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
SCHIEFS_API UClass* Z_Construct_UClass_ASC_PlayerController();
SCHIEFS_API UClass* Z_Construct_UClass_ASC_PlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_SChiefs();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASC_PlayerController *****************************************************
void ASC_PlayerController::StaticRegisterNativesASC_PlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASC_PlayerController;
UClass* ASC_PlayerController::GetPrivateStaticClass()
{
	using TClass = ASC_PlayerController;
	if (!Z_Registration_Info_UClass_ASC_PlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SC_PlayerController"),
			Z_Registration_Info_UClass_ASC_PlayerController.InnerSingleton,
			StaticRegisterNativesASC_PlayerController,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ASC_PlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ASC_PlayerController_NoRegister()
{
	return ASC_PlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASC_PlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Player/SC_PlayerController.h" },
		{ "ModuleRelativePath", "Public/Player/SC_PlayerController.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASC_PlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASC_PlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_SChiefs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASC_PlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASC_PlayerController_Statics::ClassParams = {
	&ASC_PlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASC_PlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASC_PlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASC_PlayerController()
{
	if (!Z_Registration_Info_UClass_ASC_PlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASC_PlayerController.OuterSingleton, Z_Construct_UClass_ASC_PlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASC_PlayerController.OuterSingleton;
}
ASC_PlayerController::ASC_PlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASC_PlayerController);
ASC_PlayerController::~ASC_PlayerController() {}
// ********** End Class ASC_PlayerController *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_Public_Player_SC_PlayerController_h__Script_SChiefs_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASC_PlayerController, ASC_PlayerController::StaticClass, TEXT("ASC_PlayerController"), &Z_Registration_Info_UClass_ASC_PlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASC_PlayerController), 2412247526U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_Public_Player_SC_PlayerController_h__Script_SChiefs_524855644(TEXT("/Script/SChiefs"),
	Z_CompiledInDeferFile_FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_Public_Player_SC_PlayerController_h__Script_SChiefs_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_Public_Player_SC_PlayerController_h__Script_SChiefs_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
