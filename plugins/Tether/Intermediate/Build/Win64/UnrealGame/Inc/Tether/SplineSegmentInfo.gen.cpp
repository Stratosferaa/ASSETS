// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/SplineSegmentInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineSegmentInfo() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FSplineSegmentInfo();
	UPackage* Z_Construct_UPackage__Script_Tether();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SplineSegmentInfo;
class UScriptStruct* FSplineSegmentInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SplineSegmentInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SplineSegmentInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSplineSegmentInfo, Z_Construct_UPackage__Script_Tether(), TEXT("SplineSegmentInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SplineSegmentInfo.OuterSingleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FSplineSegmentInfo>()
{
	return FSplineSegmentInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartLeaveTangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartLeaveTangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndArriveTangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndArriveTangent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplineSegmentInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSplineSegmentInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_StartLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/SplineSegmentInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplineSegmentInfo, StartLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_StartLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_StartLeaveTangent_MetaData[] = {
		{ "ModuleRelativePath", "Public/SplineSegmentInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_StartLeaveTangent = { "StartLeaveTangent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplineSegmentInfo, StartLeaveTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_StartLeaveTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_StartLeaveTangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_EndLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/SplineSegmentInfo.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_EndLocation = { "EndLocation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplineSegmentInfo, EndLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_EndLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_EndLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_EndArriveTangent_MetaData[] = {
		{ "Comment", "// Note: This end tangent maintains the forward vector of the segment, it does not point backward along the segment\n// To get the tangent backward along the segment this should be inverted\n" },
		{ "ModuleRelativePath", "Public/SplineSegmentInfo.h" },
		{ "ToolTip", "Note: This end tangent maintains the forward vector of the segment, it does not point backward along the segment\nTo get the tangent backward along the segment this should be inverted" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_EndArriveTangent = { "EndArriveTangent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSplineSegmentInfo, EndArriveTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_EndArriveTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_EndArriveTangent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_StartLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_StartLeaveTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_EndLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewProp_EndArriveTangent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"SplineSegmentInfo",
		sizeof(FSplineSegmentInfo),
		alignof(FSplineSegmentInfo),
		Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSplineSegmentInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_SplineSegmentInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SplineSegmentInfo.InnerSingleton, Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SplineSegmentInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_SplineSegmentInfo_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_SplineSegmentInfo_h_Statics::ScriptStructInfo[] = {
		{ FSplineSegmentInfo::StaticStruct, Z_Construct_UScriptStruct_FSplineSegmentInfo_Statics::NewStructOps, TEXT("SplineSegmentInfo"), &Z_Registration_Info_UScriptStruct_SplineSegmentInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSplineSegmentInfo), 3551903335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_SplineSegmentInfo_h_90297243(TEXT("/Script/Tether"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_SplineSegmentInfo_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_SplineSegmentInfo_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
