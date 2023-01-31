// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/Simulation/TetherSimulationModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherSimulationModel() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationModel();
	UPackage* Z_Construct_UPackage__Script_Tether();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationSegmentSeries();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationSegment();
// End Cross Module References

static_assert(std::is_polymorphic<FTetherSimulationModel>() == std::is_polymorphic<FTetherSimulationSegmentSeries>(), "USTRUCT FTetherSimulationModel cannot be polymorphic unless super FTetherSimulationSegmentSeries is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TetherSimulationModel;
class UScriptStruct* FTetherSimulationModel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TetherSimulationModel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TetherSimulationModel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetherSimulationModel, Z_Construct_UPackage__Script_Tether(), TEXT("TetherSimulationModel"));
	}
	return Z_Registration_Info_UScriptStruct_TetherSimulationModel.OuterSingleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FTetherSimulationModel>()
{
	return FTetherSimulationModel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTetherSimulationModel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationBaseWorldTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SimulationBaseWorldTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Segments_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Segments_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Segments;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationModel.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetherSimulationModel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewProp_SimulationBaseWorldTransform_MetaData[] = {
		{ "Comment", "// Base transform of the cable that the simulation was started with\n" },
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationModel.h" },
		{ "ToolTip", "Base transform of the cable that the simulation was started with" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewProp_SimulationBaseWorldTransform = { "SimulationBaseWorldTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationModel, SimulationBaseWorldTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewProp_SimulationBaseWorldTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewProp_SimulationBaseWorldTransform_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewProp_Segments_Inner = { "Segments", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTetherSimulationSegment, METADATA_PARAMS(nullptr, 0) }; // 879276763
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewProp_Segments_MetaData[] = {
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationModel.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewProp_Segments = { "Segments", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTetherSimulationModel, Segments), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewProp_Segments_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewProp_Segments_MetaData)) }; // 879276763
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewProp_SimulationBaseWorldTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewProp_Segments_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewProp_Segments,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		Z_Construct_UScriptStruct_FTetherSimulationSegmentSeries,
		&NewStructOps,
		"TetherSimulationModel",
		sizeof(FTetherSimulationModel),
		alignof(FTetherSimulationModel),
		Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationModel()
	{
		if (!Z_Registration_Info_UScriptStruct_TetherSimulationModel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TetherSimulationModel.InnerSingleton, Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TetherSimulationModel.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationModel_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationModel_h_Statics::ScriptStructInfo[] = {
		{ FTetherSimulationModel::StaticStruct, Z_Construct_UScriptStruct_FTetherSimulationModel_Statics::NewStructOps, TEXT("TetherSimulationModel"), &Z_Registration_Info_UScriptStruct_TetherSimulationModel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTetherSimulationModel), 3450382127U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationModel_h_2028526518(TEXT("/Script/Tether"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationModel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationModel_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
