// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/Simulation/TetherSegmentSimulationOptions.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherSegmentSimulationOptions() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions();
	UPackage* Z_Construct_UPackage__Script_Tether();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TetherSegmentSimulationOptions;
class UScriptStruct* FTetherSegmentSimulationOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TetherSegmentSimulationOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TetherSegmentSimulationOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions, Z_Construct_UPackage__Script_Tether(), TEXT("TetherSegmentSimulationOptions"));
	}
	return Z_Registration_Info_UScriptStruct_TetherSegmentSimulationOptions.OuterSingleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FTetherSegmentSimulationOptions>()
{
	return FTetherSegmentSimulationOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFixedAnchorPoint_MetaData[];
#endif
		static void NewProp_bFixedAnchorPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFixedAnchorPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSplineTangents_MetaData[];
#endif
		static void NewProp_bUseSplineTangents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSplineTangents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Simulation/TetherSegmentSimulationOptions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetherSegmentSimulationOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bFixedAnchorPoint_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "Comment", "/**\n\x09 * If true, the point of the cable will be fixed to the spline point. If false it will fall freely.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Simulation/TetherSegmentSimulationOptions.h" },
		{ "ToolTip", "If true, the point of the cable will be fixed to the spline point. If false it will fall freely." },
	};
#endif
	void Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bFixedAnchorPoint_SetBit(void* Obj)
	{
		((FTetherSegmentSimulationOptions*)Obj)->bFixedAnchorPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bFixedAnchorPoint = { "bFixedAnchorPoint", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTetherSegmentSimulationOptions), &Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bFixedAnchorPoint_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bFixedAnchorPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bFixedAnchorPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bUseSplineTangents_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "Comment", "/**\n\x09 * Force the cable to respect the Guide Spline's tangents when using stiffness constraints, if Fixed Anchor Point is true\n\x09 */" },
		{ "EditCondition", "bFixedAnchorPoint" },
		{ "ModuleRelativePath", "Public/Simulation/TetherSegmentSimulationOptions.h" },
		{ "ToolTip", "Force the cable to respect the Guide Spline's tangents when using stiffness constraints, if Fixed Anchor Point is true" },
	};
#endif
	void Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bUseSplineTangents_SetBit(void* Obj)
	{
		((FTetherSegmentSimulationOptions*)Obj)->bUseSplineTangents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bUseSplineTangents = { "bUseSplineTangents", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTetherSegmentSimulationOptions), &Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bUseSplineTangents_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bUseSplineTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bUseSplineTangents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bFixedAnchorPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewProp_bUseSplineTangents,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"TetherSegmentSimulationOptions",
		sizeof(FTetherSegmentSimulationOptions),
		alignof(FTetherSegmentSimulationOptions),
		Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_TetherSegmentSimulationOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TetherSegmentSimulationOptions.InnerSingleton, Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TetherSegmentSimulationOptions.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSegmentSimulationOptions_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSegmentSimulationOptions_h_Statics::ScriptStructInfo[] = {
		{ FTetherSegmentSimulationOptions::StaticStruct, Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions_Statics::NewStructOps, TEXT("TetherSegmentSimulationOptions"), &Z_Registration_Info_UScriptStruct_TetherSegmentSimulationOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTetherSegmentSimulationOptions), 3759060144U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSegmentSimulationOptions_h_2496848914(TEXT("/Script/Tether"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSegmentSimulationOptions_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSegmentSimulationOptions_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
