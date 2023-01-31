// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/Mesh/CableMeshGenerationCurveDescription.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCableMeshGenerationCurveDescription() {}
// Cross Module References
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo();
	UPackage* Z_Construct_UPackage__Script_Tether();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FCableMeshGenerationPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CableMeshGenerationPointInfo;
class UScriptStruct* FCableMeshGenerationPointInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CableMeshGenerationPointInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CableMeshGenerationPointInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo, Z_Construct_UPackage__Script_Tether(), TEXT("CableMeshGenerationPointInfo"));
	}
	return Z_Registration_Info_UScriptStruct_CableMeshGenerationPointInfo.OuterSingleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FCableMeshGenerationPointInfo>()
{
	return FCableMeshGenerationPointInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToNearestContactPoint_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToNearestContactPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Looseness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Looseness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToSegmentLine_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToSegmentLine;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlackRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SlackRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SegmentLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SegmentLineDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SegmentLineDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Data associated with a point along a cable used for mesh generation\n */" },
		{ "ModuleRelativePath", "Public/Mesh/CableMeshGenerationCurveDescription.h" },
		{ "ToolTip", "Data associated with a point along a cable used for mesh generation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCableMeshGenerationPointInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_DistanceToNearestContactPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mesh/CableMeshGenerationCurveDescription.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_DistanceToNearestContactPoint = { "DistanceToNearestContactPoint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCableMeshGenerationPointInfo, DistanceToNearestContactPoint), METADATA_PARAMS(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_DistanceToNearestContactPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_DistanceToNearestContactPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_Looseness_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mesh/CableMeshGenerationCurveDescription.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_Looseness = { "Looseness", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCableMeshGenerationPointInfo, Looseness), METADATA_PARAMS(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_Looseness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_Looseness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_DistanceToSegmentLine_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mesh/CableMeshGenerationCurveDescription.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_DistanceToSegmentLine = { "DistanceToSegmentLine", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCableMeshGenerationPointInfo, DistanceToSegmentLine), METADATA_PARAMS(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_DistanceToSegmentLine_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_DistanceToSegmentLine_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SlackRatio_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mesh/CableMeshGenerationCurveDescription.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SlackRatio = { "SlackRatio", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCableMeshGenerationPointInfo, SlackRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SlackRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SlackRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SegmentLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mesh/CableMeshGenerationCurveDescription.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SegmentLength = { "SegmentLength", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCableMeshGenerationPointInfo, SegmentLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SegmentLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SegmentLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SegmentLineDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mesh/CableMeshGenerationCurveDescription.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SegmentLineDistance = { "SegmentLineDistance", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCableMeshGenerationPointInfo, SegmentLineDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SegmentLineDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SegmentLineDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_DistanceToNearestContactPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_Looseness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_DistanceToSegmentLine,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SlackRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SegmentLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewProp_SegmentLineDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"CableMeshGenerationPointInfo",
		sizeof(FCableMeshGenerationPointInfo),
		alignof(FCableMeshGenerationPointInfo),
		Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_CableMeshGenerationPointInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CableMeshGenerationPointInfo.InnerSingleton, Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CableMeshGenerationPointInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CableMeshGenerationPoint;
class UScriptStruct* FCableMeshGenerationPoint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CableMeshGenerationPoint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CableMeshGenerationPoint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCableMeshGenerationPoint, Z_Construct_UPackage__Script_Tether(), TEXT("CableMeshGenerationPoint"));
	}
	return Z_Registration_Info_UScriptStruct_CableMeshGenerationPoint.OuterSingleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FCableMeshGenerationPoint>()
{
	return FCableMeshGenerationPoint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCableMeshGenerationPoint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Info_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Info;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableMeshGenerationPoint_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Describes a point along a cable for mesh generation purposes\n */" },
		{ "ModuleRelativePath", "Public/Mesh/CableMeshGenerationCurveDescription.h" },
		{ "ToolTip", "Describes a point along a cable for mesh generation purposes" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCableMeshGenerationPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCableMeshGenerationPoint>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableMeshGenerationPoint_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mesh/CableMeshGenerationCurveDescription.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCableMeshGenerationPoint_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCableMeshGenerationPoint, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCableMeshGenerationPoint_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationPoint_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableMeshGenerationPoint_Statics::NewProp_Rotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mesh/CableMeshGenerationCurveDescription.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCableMeshGenerationPoint_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCableMeshGenerationPoint, Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FCableMeshGenerationPoint_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationPoint_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableMeshGenerationPoint_Statics::NewProp_Info_MetaData[] = {
		{ "ModuleRelativePath", "Public/Mesh/CableMeshGenerationCurveDescription.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCableMeshGenerationPoint_Statics::NewProp_Info = { "Info", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCableMeshGenerationPoint, Info), Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FCableMeshGenerationPoint_Statics::NewProp_Info_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationPoint_Statics::NewProp_Info_MetaData)) }; // 447359598
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCableMeshGenerationPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableMeshGenerationPoint_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableMeshGenerationPoint_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableMeshGenerationPoint_Statics::NewProp_Info,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCableMeshGenerationPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"CableMeshGenerationPoint",
		sizeof(FCableMeshGenerationPoint),
		alignof(FCableMeshGenerationPoint),
		Z_Construct_UScriptStruct_FCableMeshGenerationPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCableMeshGenerationPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCableMeshGenerationPoint()
	{
		if (!Z_Registration_Info_UScriptStruct_CableMeshGenerationPoint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CableMeshGenerationPoint.InnerSingleton, Z_Construct_UScriptStruct_FCableMeshGenerationPoint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CableMeshGenerationPoint.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CableMeshGenerationCurveDescription;
class UScriptStruct* FCableMeshGenerationCurveDescription::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CableMeshGenerationCurveDescription.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CableMeshGenerationCurveDescription.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription, Z_Construct_UPackage__Script_Tether(), TEXT("CableMeshGenerationCurveDescription"));
	}
	return Z_Registration_Info_UScriptStruct_CableMeshGenerationCurveDescription.OuterSingleton;
}
template<> TETHER_API UScriptStruct* StaticStruct<FCableMeshGenerationCurveDescription>()
{
	return FCableMeshGenerationCurveDescription::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Points_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Points_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Points;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartTangent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndTangent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EndTangent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *  All data required to generate a cable mesh\n *  Points and tangents are in local space of the mesh being generated\n */" },
		{ "ModuleRelativePath", "Public/Mesh/CableMeshGenerationCurveDescription.h" },
		{ "ToolTip", "All data required to generate a cable mesh\nPoints and tangents are in local space of the mesh being generated" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCableMeshGenerationCurveDescription>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_Points_Inner = { "Points", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCableMeshGenerationPoint, METADATA_PARAMS(nullptr, 0) }; // 3900428731
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_Points_MetaData[] = {
		{ "Comment", "// The points of each loop on the curve\n" },
		{ "ModuleRelativePath", "Public/Mesh/CableMeshGenerationCurveDescription.h" },
		{ "ToolTip", "The points of each loop on the curve" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_Points = { "Points", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCableMeshGenerationCurveDescription, Points), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_Points_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_Points_MetaData)) }; // 3900428731
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_StartTangent_MetaData[] = {
		{ "Comment", "// Start tangent, if non-zero\n" },
		{ "ModuleRelativePath", "Public/Mesh/CableMeshGenerationCurveDescription.h" },
		{ "ToolTip", "Start tangent, if non-zero" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_StartTangent = { "StartTangent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCableMeshGenerationCurveDescription, StartTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_StartTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_StartTangent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_EndTangent_MetaData[] = {
		{ "Comment", "// End tangent, if non-zero\n" },
		{ "ModuleRelativePath", "Public/Mesh/CableMeshGenerationCurveDescription.h" },
		{ "ToolTip", "End tangent, if non-zero" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_EndTangent = { "EndTangent", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCableMeshGenerationCurveDescription, EndTangent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_EndTangent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_EndTangent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_Points_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_Points,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_StartTangent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewProp_EndTangent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
		nullptr,
		&NewStructOps,
		"CableMeshGenerationCurveDescription",
		sizeof(FCableMeshGenerationCurveDescription),
		alignof(FCableMeshGenerationCurveDescription),
		Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription()
	{
		if (!Z_Registration_Info_UScriptStruct_CableMeshGenerationCurveDescription.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CableMeshGenerationCurveDescription.InnerSingleton, Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CableMeshGenerationCurveDescription.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_CableMeshGenerationCurveDescription_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_CableMeshGenerationCurveDescription_h_Statics::ScriptStructInfo[] = {
		{ FCableMeshGenerationPointInfo::StaticStruct, Z_Construct_UScriptStruct_FCableMeshGenerationPointInfo_Statics::NewStructOps, TEXT("CableMeshGenerationPointInfo"), &Z_Registration_Info_UScriptStruct_CableMeshGenerationPointInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCableMeshGenerationPointInfo), 447359598U) },
		{ FCableMeshGenerationPoint::StaticStruct, Z_Construct_UScriptStruct_FCableMeshGenerationPoint_Statics::NewStructOps, TEXT("CableMeshGenerationPoint"), &Z_Registration_Info_UScriptStruct_CableMeshGenerationPoint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCableMeshGenerationPoint), 3900428731U) },
		{ FCableMeshGenerationCurveDescription::StaticStruct, Z_Construct_UScriptStruct_FCableMeshGenerationCurveDescription_Statics::NewStructOps, TEXT("CableMeshGenerationCurveDescription"), &Z_Registration_Info_UScriptStruct_CableMeshGenerationCurveDescription, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCableMeshGenerationCurveDescription), 65284019U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_CableMeshGenerationCurveDescription_h_40835732(TEXT("/Script/Tether"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_CableMeshGenerationCurveDescription_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_CableMeshGenerationCurveDescription_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
