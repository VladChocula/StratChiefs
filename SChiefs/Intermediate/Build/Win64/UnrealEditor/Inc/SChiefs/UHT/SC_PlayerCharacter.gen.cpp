// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Player/SC_PlayerCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSC_PlayerCharacter() {}

// ********** Begin Cross Module References ********************************************************
SCHIEFS_API UClass* Z_Construct_UClass_ASC_BaseCharacter();
SCHIEFS_API UClass* Z_Construct_UClass_ASC_PlayerCharacter();
SCHIEFS_API UClass* Z_Construct_UClass_ASC_PlayerCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_SChiefs();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASC_PlayerCharacter ******************************************************
void ASC_PlayerCharacter::StaticRegisterNativesASC_PlayerCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASC_PlayerCharacter;
UClass* ASC_PlayerCharacter::GetPrivateStaticClass()
{
	using TClass = ASC_PlayerCharacter;
	if (!Z_Registration_Info_UClass_ASC_PlayerCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SC_PlayerCharacter"),
			Z_Registration_Info_UClass_ASC_PlayerCharacter.InnerSingleton,
			StaticRegisterNativesASC_PlayerCharacter,
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
	return Z_Registration_Info_UClass_ASC_PlayerCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_ASC_PlayerCharacter_NoRegister()
{
	return ASC_PlayerCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASC_PlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/SC_PlayerCharacter.h" },
		{ "ModuleRelativePath", "Public/Player/SC_PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASC_PlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASC_PlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ASC_BaseCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_SChiefs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASC_PlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASC_PlayerCharacter_Statics::ClassParams = {
	&ASC_PlayerCharacter::StaticClass,
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
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASC_PlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ASC_PlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASC_PlayerCharacter()
{
	if (!Z_Registration_Info_UClass_ASC_PlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASC_PlayerCharacter.OuterSingleton, Z_Construct_UClass_ASC_PlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASC_PlayerCharacter.OuterSingleton;
}
ASC_PlayerCharacter::ASC_PlayerCharacter() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASC_PlayerCharacter);
ASC_PlayerCharacter::~ASC_PlayerCharacter() {}
// ********** End Class ASC_PlayerCharacter ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_Public_Player_SC_PlayerCharacter_h__Script_SChiefs_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASC_PlayerCharacter, ASC_PlayerCharacter::StaticClass, TEXT("ASC_PlayerCharacter"), &Z_Registration_Info_UClass_ASC_PlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASC_PlayerCharacter), 2161174243U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_Public_Player_SC_PlayerCharacter_h__Script_SChiefs_3690726699(TEXT("/Script/SChiefs"),
	Z_CompiledInDeferFile_FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_Public_Player_SC_PlayerCharacter_h__Script_SChiefs_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UEProjects_StratChiefs_SChiefs_Source_SChiefs_Public_Player_SC_PlayerCharacter_h__Script_SChiefs_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
