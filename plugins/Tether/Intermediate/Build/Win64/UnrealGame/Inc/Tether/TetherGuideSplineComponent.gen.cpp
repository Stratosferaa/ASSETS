// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/TetherGuideSplineComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherGuideSplineComponent() {}
// Cross Module References
	TETHER_API UClass* Z_Construct_UClass_UTetherGuideSplineMetadata_NoRegister();
	TETHER_API UClass* Z_Construct_UClass_UTetherGuideSplineMetadata();
	ENGINE_API UClass* Z_Construct_UClass_USplineMetadata();
	UPackage* Z_Construct_UPackage__Script_Tether();
	TETHER_API UClass* Z_Construct_UClass_UTetherPointSegmentDefinition_NoRegister();
	TETHER_API UClass* Z_Construct_UClass_UTetherGuideSplineComponent_NoRegister();
	TETHER_API UClass* Z_Construct_UClass_UTetherGuideSplineComponent();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent();
// End Cross Module References
	void UTetherGuideSplineMetadata::StaticRegisterNativesUTetherGuideSplineMetadata()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTetherGuideSplineMetadata);
	UClass* Z_Construct_UClass_UTetherGuideSplineMetadata_NoRegister()
	{
		return UTetherGuideSplineMetadata::StaticClass();
	}
	struct Z_Construct_UClass_UTetherGuideSplineMetadata_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PointSegmentDefinitions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointSegmentDefinitions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PointSegmentDefinitions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineMetadata,
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * SplineMetadata subclass used to implement spline modification calls to store information about each point/segment\n */" },
		{ "IncludePath", "TetherGuideSplineComponent.h" },
		{ "ModuleRelativePath", "Public/TetherGuideSplineComponent.h" },
		{ "ToolTip", "SplineMetadata subclass used to implement spline modification calls to store information about each point/segment" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::NewProp_PointSegmentDefinitions_Inner = { "PointSegmentDefinitions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UTetherPointSegmentDefinition_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::NewProp_PointSegmentDefinitions_MetaData[] = {
		{ "Comment", "// User-defined settings per point/segment\n// May exist for segments that no longer exist in the simulation\n" },
		{ "ModuleRelativePath", "Public/TetherGuideSplineComponent.h" },
		{ "ToolTip", "User-defined settings per point/segment\nMay exist for segments that no longer exist in the simulation" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::NewProp_PointSegmentDefinitions = { "PointSegmentDefinitions", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTetherGuideSplineMetadata, PointSegmentDefinitions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::NewProp_PointSegmentDefinitions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::NewProp_PointSegmentDefinitions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::NewProp_PointSegmentDefinitions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::NewProp_PointSegmentDefinitions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetherGuideSplineMetadata>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::ClassParams = {
		&UTetherGuideSplineMetadata::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTetherGuideSplineMetadata()
	{
		if (!Z_Registration_Info_UClass_UTetherGuideSplineMetadata.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTetherGuideSplineMetadata.OuterSingleton, Z_Construct_UClass_UTetherGuideSplineMetadata_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTetherGuideSplineMetadata.OuterSingleton;
	}
	template<> TETHER_API UClass* StaticClass<UTetherGuideSplineMetadata>()
	{
		return UTetherGuideSplineMetadata::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTetherGuideSplineMetadata);
	void UTetherGuideSplineComponent::StaticRegisterNativesUTetherGuideSplineComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTetherGuideSplineComponent);
	UClass* Z_Construct_UClass_UTetherGuideSplineComponent_NoRegister()
	{
		return UTetherGuideSplineComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTetherGuideSplineComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Metadata;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTetherGuideSplineComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USplineComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetherGuideSplineComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Special subclass of SplineComponent used by Tether cables to store information about each point/segment\n */" },
		{ "HideCategories", "Physics Collision Lighting Rendering Mobile Trigger VirtualTexture" },
		{ "IncludePath", "TetherGuideSplineComponent.h" },
		{ "ModuleRelativePath", "Public/TetherGuideSplineComponent.h" },
		{ "ToolTip", "Special subclass of SplineComponent used by Tether cables to store information about each point/segment" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetherGuideSplineComponent_Statics::NewProp_Metadata_MetaData[] = {
		{ "ModuleRelativePath", "Public/TetherGuideSplineComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTetherGuideSplineComponent_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTetherGuideSplineComponent, Metadata), Z_Construct_UClass_UTetherGuideSplineMetadata_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTetherGuideSplineComponent_Statics::NewProp_Metadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTetherGuideSplineComponent_Statics::NewProp_Metadata_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTetherGuideSplineComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherGuideSplineComponent_Statics::NewProp_Metadata,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTetherGuideSplineComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetherGuideSplineComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTetherGuideSplineComponent_Statics::ClassParams = {
		&UTetherGuideSplineComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTetherGuideSplineComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTetherGuideSplineComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTetherGuideSplineComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTetherGuideSplineComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTetherGuideSplineComponent()
	{
		if (!Z_Registration_Info_UClass_UTetherGuideSplineComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTetherGuideSplineComponent.OuterSingleton, Z_Construct_UClass_UTetherGuideSplineComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTetherGuideSplineComponent.OuterSingleton;
	}
	template<> TETHER_API UClass* StaticClass<UTetherGuideSplineComponent>()
	{
		return UTetherGuideSplineComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTetherGuideSplineComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherGuideSplineComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherGuideSplineComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTetherGuideSplineMetadata, UTetherGuideSplineMetadata::StaticClass, TEXT("UTetherGuideSplineMetadata"), &Z_Registration_Info_UClass_UTetherGuideSplineMetadata, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTetherGuideSplineMetadata), 1151404448U) },
		{ Z_Construct_UClass_UTetherGuideSplineComponent, UTetherGuideSplineComponent::StaticClass, TEXT("UTetherGuideSplineComponent"), &Z_Registration_Info_UClass_UTetherGuideSplineComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTetherGuideSplineComponent), 3369409474U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherGuideSplineComponent_h_974186558(TEXT("/Script/Tether"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherGuideSplineComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_TetherGuideSplineComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
