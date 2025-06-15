// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SChiefs/GameMode/SC_GameMode_Base.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSC_GameMode_Base() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
SCHIEFS_API UClass* Z_Construct_UClass_ASC_GameMode_Base();
SCHIEFS_API UClass* Z_Construct_UClass_ASC_GameMode_Base_NoRegister();
UPackage* Z_Construct_UPackage__Script_SChiefs();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASC_GameMode_Base ********************************************************
void ASC_GameMode_Base::StaticRegisterNativesASC_GameMode_Base()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASC_GameMode_Base;
UClass* ASC_GameMode_Base::GetPrivateStaticClass()
{
	using TClass = ASC_GameMode_Base;
	if (!Z_Registration_Info_UClass_ASC_GameMode_Base.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SC_GameMode_Base"),
			Z_Registration_Info_UClass_ASC_GameMode_Base.InnerSingleton,
			StaticRegisterNativesASC_GameMode_Base,
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
	return Z_Registration_Info_UClass_ASC_GameMode_Base.InnerSingleton;
}
UClass* Z_Construct_UClass_ASC_GameMode_Base_NoRegister()
{
	return ASC_GameMode_Base::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASC_GameMode_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameMode/SC_GameMode_Base.h" },
		{ "ModuleRelativePath", "GameMode/SC_GameMode_Base.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASC_GameMode_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASC_GameMode_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SChiefs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASC_GameMode_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASC_GameMode_Base_Statics::ClassParams = {
	&ASC_GameMode_Base::StaticClass,
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
	0x009003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASC_GameMode_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_ASC_GameMode_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASC_GameMode_Base()
{
	if (!Z_Registration_Info_UClass_ASC_GameMode_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASC_GameMode_Base.OuterSingleton, Z_Construct_UClass_ASC_GameMode_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASC_GameMode_Base.OuterSingleton;
}
ASC_GameMode_Base::ASC_GameMode_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASC_GameMode_Base);
ASC_GameMode_Base::~ASC_GameMode_Base() {}
// ********** End Class ASC_GameMode_Base **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_GameMode_SC_GameMode_Base_h__Script_SChiefs_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASC_GameMode_Base, ASC_GameMode_Base::StaticClass, TEXT("ASC_GameMode_Base"), &Z_Registration_Info_UClass_ASC_GameMode_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASC_GameMode_Base), 670251087U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_GameMode_SC_GameMode_Base_h__Script_SChiefs_4201927502(TEXT("/Script/SChiefs"),
	Z_CompiledInDeferFile_FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_GameMode_SC_GameMode_Base_h__Script_SChiefs_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_GameMode_SC_GameMode_Base_h__Script_SChiefs_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
