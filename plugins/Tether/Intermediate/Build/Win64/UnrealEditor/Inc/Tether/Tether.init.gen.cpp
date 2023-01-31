// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTether_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Tether;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Tether()
	{
		if (!Z_Registration_Info_UPackage__Script_Tether.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Tether",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xD62A05E5,
				0xAE5A3127,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Tether.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Tether.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Tether(Z_Construct_UPackage__Script_Tether, TEXT("/Script/Tether"), Z_Registration_Info_UPackage__Script_Tether, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD62A05E5, 0xAE5A3127));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
