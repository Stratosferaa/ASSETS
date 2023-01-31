// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/Mesh/BasicMeshProperties.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicMeshProperties() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FBasicMeshProperties();
	UPackage* Z_Construct_UPackage__Script_Tether();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FBasicMeshGenerationOptions();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BasicMeshProperties;
class UScriptStruct* FBasicMeshProperties::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BasicMeshProperties.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BasicMeshProperties.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBasicMeshProperties, Z_Construct_UPackage__Script_Tether(), TEXT("BasicMeshProperties"));
	}
	return Z_Registration_Info_UScriptStruct_BasicMeshProperties.OuterSingleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FBasicMeshProperties>()
{
	return FBasicMeshProperties::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBasicMeshProperties_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoopResolution_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LoopResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurveSimplificationMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurveSimplificationMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshGenerationOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MeshGenerationOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Properties used for basic mesh generation\n */" },
		{ "ModuleRelativePath", "Public/Mesh/BasicMeshProperties.h" },
		{ "ToolTip", "Properties used for basic mesh generation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBasicMeshProperties>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_LoopResolution_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/**\n\x09 *  Multiplier for the number of mesh loops to be created along the cable\n\x09 *  Higher values create more accurate curves\n\x09 *  Distance between loops = Cable Width / Loop Resolution\n\x09 */" },
		{ "ModuleRelativePath", "Public/Mesh/BasicMeshProperties.h" },
		{ "ToolTip", "Multiplier for the number of mesh loops to be created along the cable\nHigher values create more accurate curves\nDistance between loops = Cable Width / Loop Resolution" },
		{ "UIMax", "100" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_LoopResolution = { "LoopResolution", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBasicMeshProperties, LoopResolution), METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_LoopResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_LoopResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_CurveSimplificationMultiplier_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09 *  If greater than zero, the loops along the cable mesh will be optimized away if the cable is straight\n\x09 *  Increasing this will cull more loops, optimizing more but reducing the quality of the mesh\n\x09 *  Max distance = Cable Width * Curve Simplification Multiplier\n\x09 *  If a loop is within the max distance to the line between the loops on either side, it will be culled\n\x09 */" },
		{ "ModuleRelativePath", "Public/Mesh/BasicMeshProperties.h" },
		{ "ToolTip", "If greater than zero, the loops along the cable mesh will be optimized away if the cable is straight\nIncreasing this will cull more loops, optimizing more but reducing the quality of the mesh\nMax distance = Cable Width * Curve Simplification Multiplier\nIf a loop is within the max distance to the line between the loops on either side, it will be culled" },
		{ "UIMax", "5" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_CurveSimplificationMultiplier = { "CurveSimplificationMultiplier", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBasicMeshProperties, CurveSimplificationMultiplier), METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_CurveSimplificationMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_CurveSimplificationMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_MeshGenerationOptions_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "ModuleRelativePath", "Public/Mesh/BasicMeshProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_MeshGenerationOptions = { "MeshGenerationOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBasicMeshProperties, MeshGenerationOptions), Z_Construct_UScriptStruct_FBasicMeshGenerationOptions, METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_MeshGenerationOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_MeshGenerationOptions_MetaData)) }; // 3229783610
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_LoopResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_CurveSimplificationMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewProp_MeshGenerationOptions,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"BasicMeshProperties",
		sizeof(FBasicMeshProperties),
		alignof(FBasicMeshProperties),
		Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBasicMeshProperties()
	{
		if (!Z_Registration_Info_UScriptStruct_BasicMeshProperties.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BasicMeshProperties.InnerSingleton, Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BasicMeshProperties.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_BasicMeshProperties_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_BasicMeshProperties_h_Statics::ScriptStructInfo[] = {
		{ FBasicMeshProperties::StaticStruct, Z_Construct_UScriptStruct_FBasicMeshProperties_Statics::NewStructOps, TEXT("BasicMeshProperties"), &Z_Registration_Info_UScriptStruct_BasicMeshProperties, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBasicMeshProperties), 2178439389U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_BasicMeshProperties_h_2079550232(TEXT("/Script/Tether"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_BasicMeshProperties_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_BasicMeshProperties_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
