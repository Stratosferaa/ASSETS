// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/TetherPointSegmentDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherPointSegmentDefinition() {}
// Cross Module References
	TETHER_API UClass* Z_Construct_UClass_UTetherPointSegmentDefinition_NoRegister();
	TETHER_API UClass* Z_Construct_UClass_UTetherPointSegmentDefinition();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Tether();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions();
// End Cross Module References
	void UTetherPointSegmentDefinition::StaticRegisterNativesUTetherPointSegmentDefinition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTetherPointSegmentDefinition);
	UClass* Z_Construct_UClass_UTetherPointSegmentDefinition_NoRegister()
	{
		return UTetherPointSegmentDefinition::StaticClass();
	}
	struct Z_Construct_UClass_UTetherPointSegmentDefinition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Slack_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Slack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SimulationOptions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Represents the definition of a single segment or point of a Tether cable\n * This is a UObject and not a struct so that the details view can edit the combined properties of multiple selected points (see TetherCablePointDetails)\n */" },
		{ "IncludePath", "TetherPointSegmentDefinition.h" },
		{ "ModuleRelativePath", "Public/TetherPointSegmentDefinition.h" },
		{ "ToolTip", "Represents the definition of a single segment or point of a Tether cable\nThis is a UObject and not a struct so that the details view can edit the combined properties of multiple selected points (see TetherCablePointDetails)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::NewProp_Slack_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "Comment", "/**\n\x09 * Slack is added to (or removed from) the segment length to alter the tightness of the cable\n\x09 * Cables with more slack may naturally coil up on the ground as part of the simulation\n\x09 */" },
		{ "ModuleRelativePath", "Public/TetherPointSegmentDefinition.h" },
		{ "ToolTip", "Slack is added to (or removed from) the segment length to alter the tightness of the cable\nCables with more slack may naturally coil up on the ground as part of the simulation" },
		{ "UIMax", "10000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::NewProp_Slack = { "Slack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTetherPointSegmentDefinition, Slack), METADATA_PARAMS(Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::NewProp_Slack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::NewProp_Slack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::NewProp_SimulationOptions_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "Comment", "// Options that control how this specific segment or point is simulated\n" },
		{ "ModuleRelativePath", "Public/TetherPointSegmentDefinition.h" },
		{ "ToolTip", "Options that control how this specific segment or point is simulated" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::NewProp_SimulationOptions = { "SimulationOptions", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTetherPointSegmentDefinition, SimulationOptions), Z_Construct_UScriptStruct_FTetherSegmentSimulationOptions, METADATA_PARAMS(Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::NewProp_SimulationOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::NewProp_SimulationOptions_MetaData)) }; // 3759060144
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::NewProp_Slack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::NewProp_SimulationOptions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetherPointSegmentDefinition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::ClassParams = {
		&UTetherPointSegmentDefinition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTetherPointSegmentDefinition()
	{
		if (!Z_Registration_Info_UClass_UTetherPointSegmentDefinition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTetherPointSegmentDefinition.OuterSingleton, Z_Construct_UClass_UTetherPointSegmentDefinition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTetherPointSegmentDefinition.OuterSingleton;
	}
	template<> TETHER_API UClass* StaticClass<UTetherPointSegmentDefinition>()
	{
		return UTetherPointSegmentDefinition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTetherPointSegmentDefinition);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherPointSegmentDefinition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherPointSegmentDefinition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTetherPointSegmentDefinition, UTetherPointSegmentDefinition::StaticClass, TEXT("UTetherPointSegmentDefinition"), &Z_Registration_Info_UClass_UTetherPointSegmentDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTetherPointSegmentDefinition), 646157962U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherPointSegmentDefinition_h_999840318(TEXT("/Script/Tether"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherPointSegmentDefinition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherPointSegmentDefinition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
