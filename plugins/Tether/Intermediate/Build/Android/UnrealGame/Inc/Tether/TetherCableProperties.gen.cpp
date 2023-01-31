// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/TetherCableProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherCableProperties() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherCableProperties();
	UPackage* Z_Construct_UPackage__Script_Tether();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherCableSimulationOptions();
	TETHER_API UEnum* Z_Construct_UEnum_Tether_ECableMeshGenerationType();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FBasicMeshProperties();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FCustomMeshProperties();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TetherCableProperties;
class UScriptStruct* FTetherCableProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TetherCableProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TetherCableProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetherCableProperties, Z_Construct_UPackage__Script_Tether(), TEXT("TetherCableProperties"));
	}
	return Z_Registration_Info_UScriptStruct_TetherCableProperties.OuterSingleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FTetherCableProperties>()
{
	return FTetherCableProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTetherCableProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CableWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CableWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SimulationOptions;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MeshType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MeshType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasicMeshProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BasicMeshProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomMeshProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomMeshProperties;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TetherCableProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetherCableProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_CableWidth_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "ClampMin", "0.1" },
		{ "Comment", "/**\n\x09 * The diameter of the cable, which by default controls the width of the cable for simulating collision, the width of the generated mesh, and also affects the density of particles (or *Particle Segment Length*) along the cable during simulation.\n\x09 */" },
		{ "ModuleRelativePath", "Public/TetherCableProperties.h" },
		{ "ToolTip", "The diameter of the cable, which by default controls the width of the cable for simulating collision, the width of the generated mesh, and also affects the density of particles (or *Particle Segment Length*) along the cable during simulation." },
		{ "UIMax", "50.0" },
		{ "UIMin", "1.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_CableWidth = { "CableWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableProperties, CableWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_CableWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_CableWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_SimulationOptions_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "ModuleRelativePath", "Public/TetherCableProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_SimulationOptions = { "SimulationOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableProperties, SimulationOptions), Z_Construct_UScriptStruct_FTetherCableSimulationOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_SimulationOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_SimulationOptions_MetaData)) }; // 263904097
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_MeshType_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "Comment", "/**\n\x09 * Mesh generation type to use for this cable\n\x09 */" },
		{ "ModuleRelativePath", "Public/TetherCableProperties.h" },
		{ "ToolTip", "Mesh generation type to use for this cable" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableProperties, MeshType), Z_Construct_UEnum_Tether_ECableMeshGenerationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_MeshType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_MeshType_MetaData)) }; // 903533590
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_BasicMeshProperties_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "DisplayName", "Basic Mesh" },
		{ "EditCondition", "MeshType == ECableMeshGenerationType::Basic" },
		{ "ModuleRelativePath", "Public/TetherCableProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_BasicMeshProperties = { "BasicMeshProperties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableProperties, BasicMeshProperties), Z_Construct_UScriptStruct_FBasicMeshProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_BasicMeshProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_BasicMeshProperties_MetaData)) }; // 2178439389
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_CustomMeshProperties_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "DisplayName", "Custom Mesh" },
		{ "EditCondition", "MeshType == ECableMeshGenerationType::CustomMesh" },
		{ "ModuleRelativePath", "Public/TetherCableProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_CustomMeshProperties = { "CustomMeshProperties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableProperties, CustomMeshProperties), Z_Construct_UScriptStruct_FCustomMeshProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_CustomMeshProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_CustomMeshProperties_MetaData)) }; // 3040809870
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "Comment", "//UPROPERTY(Category = \"TetherProperties\", EditAnywhere, BlueprintReadWrite, Instanced, NoClear)\n//UTetherMeshGenerator* MeshGenerator;\n" },
		{ "ModuleRelativePath", "Public/TetherCableProperties.h" },
		{ "NoResimulate", "" },
		{ "ToolTip", "UPROPERTY(Category = \"TetherProperties\", EditAnywhere, BlueprintReadWrite, Instanced, NoClear)\nUTetherMeshGenerator* MeshGenerator;" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherCableProperties, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_Materials_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetherCableProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_CableWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_SimulationOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_MeshType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_MeshType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_BasicMeshProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_CustomMeshProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewProp_Materials,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetherCableProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"TetherCableProperties",
		sizeof(FTetherCableProperties),
		alignof(FTetherCableProperties),
		Z_Construct_UScriptStruct_FTetherCableProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherCableProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTetherCableProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_TetherCableProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TetherCableProperties.InnerSingleton, Z_Construct_UScriptStruct_FTetherCableProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TetherCableProperties.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableProperties_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableProperties_h_Statics::ScriptStructInfo[] = {
		{ FTetherCableProperties::StaticStruct, Z_Construct_UScriptStruct_FTetherCableProperties_Statics::NewStructOps, TEXT("TetherCableProperties"), &Z_Registration_Info_UScriptStruct_TetherCableProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTetherCableProperties), 784995132U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableProperties_h_2201404788(TEXT("/Script/Tether"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableProperties_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherCableProperties_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
