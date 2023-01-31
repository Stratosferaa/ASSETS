// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/Mesh/CableMeshGenerationType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCableMeshGenerationType() {}
// Cross Module References
	TETHER_API UEnum* Z_Construct_UEnum_Tether_ECableMeshGenerationType();
	UPackage* Z_Construct_UPackage__Script_Tether();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECableMeshGenerationType;
	static UEnum* ECableMeshGenerationType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECableMeshGenerationType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECableMeshGenerationType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Tether_ECableMeshGenerationType, Z_Construct_UPackage__Script_Tether(), TEXT("ECableMeshGenerationType"));
		}
		return Z_Registration_Info_UEnum_ECableMeshGenerationType.OuterSingleton;
	}
	template<> TETHER_API UEnum* StaticEnum<ECableMeshGenerationType>()
	{
		return ECableMeshGenerationType_StaticEnum();
	}
	struct Z_Construct_UEnum_Tether_ECableMeshGenerationType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Tether_ECableMeshGenerationType_Statics::Enumerators[] = {
		{ "ECableMeshGenerationType::Basic", (int64)ECableMeshGenerationType::Basic },
		{ "ECableMeshGenerationType::CustomMesh", (int64)ECableMeshGenerationType::CustomMesh },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Tether_ECableMeshGenerationType_Statics::Enum_MetaDataParams[] = {
		{ "Basic.Name", "ECableMeshGenerationType::Basic" },
		{ "BlueprintType", "true" },
		{ "CustomMesh.Name", "ECableMeshGenerationType::CustomMesh" },
		{ "ModuleRelativePath", "Public/Mesh/CableMeshGenerationType.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Tether_ECableMeshGenerationType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		"ECableMeshGenerationType",
		"ECableMeshGenerationType",
		Z_Construct_UEnum_Tether_ECableMeshGenerationType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Tether_ECableMeshGenerationType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Tether_ECableMeshGenerationType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Tether_ECableMeshGenerationType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Tether_ECableMeshGenerationType()
	{
		if (!Z_Registration_Info_UEnum_ECableMeshGenerationType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECableMeshGenerationType.InnerSingleton, Z_Construct_UEnum_Tether_ECableMeshGenerationType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECableMeshGenerationType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_CableMeshGenerationType_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_CableMeshGenerationType_h_Statics::EnumInfo[] = {
		{ ECableMeshGenerationType_StaticEnum, TEXT("ECableMeshGenerationType"), &Z_Registration_Info_UEnum_ECableMeshGenerationType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 903533590U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_CableMeshGenerationType_h_1613005284(TEXT("/Script/Tether"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_CableMeshGenerationType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_CableMeshGenerationType_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
