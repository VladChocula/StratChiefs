// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSChiefs_init() {}
	SCHIEFS_API UFunction* Z_Construct_UDelegateFunction_SChiefs_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_SChiefs;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_SChiefs()
	{
		if (!Z_Registration_Info_UPackage__Script_SChiefs.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_SChiefs_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/SChiefs",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xC6911B2F,
				0xAF9D8457,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_SChiefs.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_SChiefs.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_SChiefs(Z_Construct_UPackage__Script_SChiefs, TEXT("/Script/SChiefs"), Z_Registration_Info_UPackage__Script_SChiefs, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC6911B2F, 0xAF9D8457));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
