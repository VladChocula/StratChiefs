// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SChiefs/SChiefsGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSChiefsGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SCHIEFS_API UClass* Z_Construct_UClass_ASChiefsGameMode();
SCHIEFS_API UClass* Z_Construct_UClass_ASChiefsGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SChiefs();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASChiefsGameMode *********************************************************
void ASChiefsGameMode::StaticRegisterNativesASChiefsGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASChiefsGameMode;
UClass* ASChiefsGameMode::GetPrivateStaticClass()
{
	using TClass = ASChiefsGameMode;
	if (!Z_Registration_Info_UClass_ASChiefsGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SChiefsGameMode"),
			Z_Registration_Info_UClass_ASChiefsGameMode.InnerSingleton,
			StaticRegisterNativesASChiefsGameMode,
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
	return Z_Registration_Info_UClass_ASChiefsGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ASChiefsGameMode_NoRegister()
{
	return ASChiefsGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASChiefsGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "SChiefsGameMode.h" },
		{ "ModuleRelativePath", "SChiefsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASChiefsGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASChiefsGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SChiefs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASChiefsGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASChiefsGameMode_Statics::ClassParams = {
	&ASChiefsGameMode::StaticClass,
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
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASChiefsGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ASChiefsGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASChiefsGameMode()
{
	if (!Z_Registration_Info_UClass_ASChiefsGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASChiefsGameMode.OuterSingleton, Z_Construct_UClass_ASChiefsGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASChiefsGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASChiefsGameMode);
ASChiefsGameMode::~ASChiefsGameMode() {}
// ********** End Class ASChiefsGameMode ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsGameMode_h__Script_SChiefs_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASChiefsGameMode, ASChiefsGameMode::StaticClass, TEXT("ASChiefsGameMode"), &Z_Registration_Info_UClass_ASChiefsGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASChiefsGameMode), 3798714084U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsGameMode_h__Script_SChiefs_2000848279(TEXT("/Script/SChiefs"),
	Z_CompiledInDeferFile_FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsGameMode_h__Script_SChiefs_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_SChiefsGameMode_h__Script_SChiefs_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
