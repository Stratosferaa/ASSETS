// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/Simulation/TetherSimulationSegmentSeries.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherSimulationSegmentSeries() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationSegmentSeries();
	UPackage* Z_Construct_UPackage__Script_Tether();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherProxySimulationSegmentSeries();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TetherSimulationSegmentSeries;
class UScriptStruct* FTetherSimulationSegmentSeries::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TetherSimulationSegmentSeries.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TetherSimulationSegmentSeries.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetherSimulationSegmentSeries, Z_Construct_UPackage__Script_Tether(), TEXT("TetherSimulationSegmentSeries"));
	}
	return Z_Registration_Info_UScriptStruct_TetherSimulationSegmentSeries.OuterSingleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FTetherSimulationSegmentSeries>()
{
	return FTetherSimulationSegmentSeries::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTetherSimulationSegmentSeries_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherSimulationSegmentSeries_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*\n * Interface to refer to and operate on a series of one or more connected cable segments, as if they were a single segment\n * It's assumed that the first particle of each segment contained shares the location of the last particle of the previous segment, thus effectively being joined\n */" },
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationSegmentSeries.h" },
		{ "ToolTip", "* Interface to refer to and operate on a series of one or more connected cable segments, as if they were a single segment\n* It's assumed that the first particle of each segment contained shares the location of the last particle of the previous segment, thus effectively being joined" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetherSimulationSegmentSeries_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetherSimulationSegmentSeries>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetherSimulationSegmentSeries_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"TetherSimulationSegmentSeries",
		sizeof(FTetherSimulationSegmentSeries),
		alignof(FTetherSimulationSegmentSeries),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherSimulationSegmentSeries_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherSimulationSegmentSeries_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTetherSimulationSegmentSeries()
	{
		if (!Z_Registration_Info_UScriptStruct_TetherSimulationSegmentSeries.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TetherSimulationSegmentSeries.InnerSingleton, Z_Construct_UScriptStruct_FTetherSimulationSegmentSeries_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TetherSimulationSegmentSeries.InnerSingleton;
	}

static_assert(std::is_polymorphic<FTetherProxySimulationSegmentSeries>() == std::is_polymorphic<FTetherSimulationSegmentSeries>(), "USTRUCT FTetherProxySimulationSegmentSeries cannot be polymorphic unless super FTetherSimulationSegmentSeries is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TetherProxySimulationSegmentSeries;
class UScriptStruct* FTetherProxySimulationSegmentSeries::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TetherProxySimulationSegmentSeries.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TetherProxySimulationSegmentSeries.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTetherProxySimulationSegmentSeries, Z_Construct_UPackage__Script_Tether(), TEXT("TetherProxySimulationSegmentSeries"));
	}
	return Z_Registration_Info_UScriptStruct_TetherProxySimulationSegmentSeries.OuterSingleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FTetherProxySimulationSegmentSeries>()
{
	return FTetherProxySimulationSegmentSeries::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTetherProxySimulationSegmentSeries_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTetherProxySimulationSegmentSeries_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Proxy implementation for SimulationSegmentSeries to operate on external segments\n */" },
		{ "ModuleRelativePath", "Public/Simulation/TetherSimulationSegmentSeries.h" },
		{ "ToolTip", "Proxy implementation for SimulationSegmentSeries to operate on external segments" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTetherProxySimulationSegmentSeries_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTetherProxySimulationSegmentSeries>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTetherProxySimulationSegmentSeries_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		Z_Construct_UScriptStruct_FTetherSimulationSegmentSeries,
		&NewStructOps,
		"TetherProxySimulationSegmentSeries",
		sizeof(FTetherProxySimulationSegmentSeries),
		alignof(FTetherProxySimulationSegmentSeries),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTetherProxySimulationSegmentSeries_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTetherProxySimulationSegmentSeries_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTetherProxySimulationSegmentSeries()
	{
		if (!Z_Registration_Info_UScriptStruct_TetherProxySimulationSegmentSeries.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TetherProxySimulationSegmentSeries.InnerSingleton, Z_Construct_UScriptStruct_FTetherProxySimulationSegmentSeries_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TetherProxySimulationSegmentSeries.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationSegmentSeries_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationSegmentSeries_h_Statics::ScriptStructInfo[] = {
		{ FTetherSimulationSegmentSeries::StaticStruct, Z_Construct_UScriptStruct_FTetherSimulationSegmentSeries_Statics::NewStructOps, TEXT("TetherSimulationSegmentSeries"), &Z_Registration_Info_UScriptStruct_TetherSimulationSegmentSeries, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTetherSimulationSegmentSeries), 1527302238U) },
		{ FTetherProxySimulationSegmentSeries::StaticStruct, Z_Construct_UScriptStruct_FTetherProxySimulationSegmentSeries_Statics::NewStructOps, TEXT("TetherProxySimulationSegmentSeries"), &Z_Registration_Info_UScriptStruct_TetherProxySimulationSegmentSeries, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTetherProxySimulationSegmentSeries), 2563589748U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationSegmentSeries_h_4033770582(TEXT("/Script/Tether"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationSegmentSeries_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Simulation_TetherSimulationSegmentSeries_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
