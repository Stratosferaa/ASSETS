// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/Mesh/BasicMeshGenerationOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicMeshGenerationOptions() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FBasicMeshGenerationOptions();
	UPackage* Z_Construct_UPackage__Script_Tether();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BasicMeshGenerationOptions;
class UScriptStruct* FBasicMeshGenerationOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BasicMeshGenerationOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BasicMeshGenerationOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions, Z_Construct_UPackage__Script_Tether(), TEXT("BasicMeshGenerationOptions"));
	}
	return Z_Registration_Info_UScriptStruct_BasicMeshGenerationOptions.OuterSingleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FBasicMeshGenerationOptions>()
{
	return FBasicMeshGenerationOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSides_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSides;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideCableWidth_MetaData[];
#endif
		static void NewProp_bOverrideCableWidth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideCableWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CableMeshWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CableMeshWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoTile_MetaData[];
#endif
		static void NewProp_bAutoTile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoTile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSnapToNearestFullTile_MetaData[];
#endif
		static void NewProp_bSnapToNearestFullTile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSnapToNearestFullTile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileUVs_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileUVs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *  Set of mesh generation options that define how to turn a set of points representing a curve into a cable mesh\n *  Does not contain the curve points\n */" },
		{ "ModuleRelativePath", "Public/Mesh/BasicMeshGenerationOptions.h" },
		{ "ToolTip", "Set of mesh generation options that define how to turn a set of points representing a curve into a cable mesh\nDoes not contain the curve points" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBasicMeshGenerationOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_NumSides_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "ClampMin", "2" },
		{ "Comment", "/* Number of faces around the cable to generate */" },
		{ "ModuleRelativePath", "Public/Mesh/BasicMeshGenerationOptions.h" },
		{ "ToolTip", "Number of faces around the cable to generate" },
		{ "UIMax", "32" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_NumSides = { "NumSides", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBasicMeshGenerationOptions, NumSides), METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_NumSides_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_NumSides_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bOverrideCableWidth_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "Comment", "/**\n\x09 * If true, use the Cable Mesh Width below. If false, use the Cable Width.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Mesh/BasicMeshGenerationOptions.h" },
		{ "ToolTip", "If true, use the Cable Mesh Width below. If false, use the Cable Width." },
	};
#endif
	void Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bOverrideCableWidth_SetBit(void* Obj)
	{
		((FBasicMeshGenerationOptions*)Obj)->bOverrideCableWidth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bOverrideCableWidth = { "bOverrideCableWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBasicMeshGenerationOptions), &Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bOverrideCableWidth_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bOverrideCableWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bOverrideCableWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_CableMeshWidth_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "ClampMin", "0.01" },
		{ "Comment", "/* Diameter of the cable */" },
		{ "EditCondition", "bOverrideCableWidth" },
		{ "ModuleRelativePath", "Public/Mesh/BasicMeshGenerationOptions.h" },
		{ "ToolTip", "Diameter of the cable" },
		{ "UIMax", "50.0" },
		{ "UIMin", "0.01" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_CableMeshWidth = { "CableMeshWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBasicMeshGenerationOptions, CableMeshWidth), METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_CableMeshWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_CableMeshWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bAutoTile_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "Comment", "/**\n\x09 * If true, auto tile the UVs along the length of the cable.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Mesh/BasicMeshGenerationOptions.h" },
		{ "ToolTip", "If true, auto tile the UVs along the length of the cable." },
	};
#endif
	void Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bAutoTile_SetBit(void* Obj)
	{
		((FBasicMeshGenerationOptions*)Obj)->bAutoTile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bAutoTile = { "bAutoTile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBasicMeshGenerationOptions), &Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bAutoTile_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bAutoTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bAutoTile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bSnapToNearestFullTile_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "EditCondition", "bAutoTile" },
		{ "ModuleRelativePath", "Public/Mesh/BasicMeshGenerationOptions.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bSnapToNearestFullTile_SetBit(void* Obj)
	{
		((FBasicMeshGenerationOptions*)Obj)->bSnapToNearestFullTile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bSnapToNearestFullTile = { "bSnapToNearestFullTile", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FBasicMeshGenerationOptions), &Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bSnapToNearestFullTile_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bSnapToNearestFullTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bSnapToNearestFullTile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_TileUVs_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "Comment", "/**\n\x09 * Tile material UVs along the length of the cable\n\x09 * Alternatively can be done in the material\n\x09 */" },
		{ "EditCondition", "!bAutoTile" },
		{ "ModuleRelativePath", "Public/Mesh/BasicMeshGenerationOptions.h" },
		{ "ToolTip", "Tile material UVs along the length of the cable\nAlternatively can be done in the material" },
		{ "UIMax", "8" },
		{ "UIMin", "0.1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_TileUVs = { "TileUVs", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBasicMeshGenerationOptions, TileUVs), METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_TileUVs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_TileUVs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_NumSides,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bOverrideCableWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_CableMeshWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bAutoTile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_bSnapToNearestFullTile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewProp_TileUVs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"BasicMeshGenerationOptions",
		sizeof(FBasicMeshGenerationOptions),
		alignof(FBasicMeshGenerationOptions),
		Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBasicMeshGenerationOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_BasicMeshGenerationOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BasicMeshGenerationOptions.InnerSingleton, Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BasicMeshGenerationOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_BasicMeshGenerationOptions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_BasicMeshGenerationOptions_h_Statics::ScriptStructInfo[] = {
		{ FBasicMeshGenerationOptions::StaticStruct, Z_Construct_UScriptStruct_FBasicMeshGenerationOptions_Statics::NewStructOps, TEXT("BasicMeshGenerationOptions"), &Z_Registration_Info_UScriptStruct_BasicMeshGenerationOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBasicMeshGenerationOptions), 3229783610U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_BasicMeshGenerationOptions_h_1017600555(TEXT("/Script/Tether"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_BasicMeshGenerationOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_BasicMeshGenerationOptions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
