// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tether/Public/Mesh/TetherCableMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherCableMeshComponent() {}
// Cross Module References
	TETHER_API UClass* Z_Construct_UClass_UTetherCableMeshComponent_NoRegister();
	TETHER_API UClass* Z_Construct_UClass_UTetherCableMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	UPackage* Z_Construct_UPackage__Script_Tether();
// End Cross Module References
	void UTetherCableMeshComponent::StaticRegisterNativesUTetherCableMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTetherCableMeshComponent);
	UClass* Z_Construct_UClass_UTetherCableMeshComponent_NoRegister()
	{
		return UTetherCableMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UTetherCableMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTetherCableMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Tether,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetherCableMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Dynamic mesh component used for previewing the cable before it is committed to a static mesh\n * This is heavily based off of UCableComponent from the CableComponent plugin\n */" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Mesh/TetherCableMeshComponent.h" },
		{ "ModuleRelativePath", "Public/Mesh/TetherCableMeshComponent.h" },
		{ "ToolTip", "Dynamic mesh component used for previewing the cable before it is committed to a static mesh\nThis is heavily based off of UCableComponent from the CableComponent plugin" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTetherCableMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetherCableMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTetherCableMeshComponent_Statics::ClassParams = {
		&UTetherCableMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTetherCableMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTetherCableMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTetherCableMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UTetherCableMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTetherCableMeshComponent.OuterSingleton, Z_Construct_UClass_UTetherCableMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTetherCableMeshComponent.OuterSingleton;
	}
	template<> TETHER_API UClass* StaticClass<UTetherCableMeshComponent>()
	{
		return UTetherCableMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTetherCableMeshComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_TetherCableMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_TetherCableMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTetherCableMeshComponent, UTetherCableMeshComponent::StaticClass, TEXT("UTetherCableMeshComponent"), &Z_Registration_Info_UClass_UTetherCableMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTetherCableMeshComponent), 1452621346U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_TetherCableMeshComponent_h_3538527216(TEXT("/Script/Tether"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_TetherCableMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_Tether_Public_Mesh_TetherCableMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
