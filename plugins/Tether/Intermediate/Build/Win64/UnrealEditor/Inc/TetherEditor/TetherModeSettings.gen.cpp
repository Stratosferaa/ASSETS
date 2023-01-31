// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TetherEditor/Public/TetherModeSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTetherModeSettings() {}
// Cross Module References
	TETHEREDITOR_API UClass* Z_Construct_UClass_UTetherModeSettings_NoRegister();
	TETHEREDITOR_API UClass* Z_Construct_UClass_UTetherModeSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_TetherEditor();
	TETHER_API UScriptStruct* Z_Construct_UScriptStruct_FTetherCableProperties();
// End Cross Module References
	void UTetherModeSettings::StaticRegisterNativesUTetherModeSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTetherModeSettings);
	UClass* Z_Construct_UClass_UTetherModeSettings_NoRegister()
	{
		return UTetherModeSettings::StaticClass();
	}
	struct Z_Construct_UClass_UTetherModeSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStartCable_MetaData[];
#endif
		static void NewProp_bAutoStartCable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStartCable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CableProperties_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CableProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTetherModeSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TetherEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetherModeSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Class containing editor mode settings\n */" },
		{ "IncludePath", "TetherModeSettings.h" },
		{ "ModuleRelativePath", "Public/TetherModeSettings.h" },
		{ "ToolTip", "Class containing editor mode settings" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetherModeSettings_Statics::NewProp_bAutoStartCable_MetaData[] = {
		{ "Category", "ModeSettings" },
		{ "Comment", "/**\n\x09 * If true, clicking in the viewport when in the Tether mode will start a new cable\n\x09 * If false, you'll be able to select other Actors as usual, but will have to click Start New Cable to create cables\n\x09 */" },
		{ "ModuleRelativePath", "Public/TetherModeSettings.h" },
		{ "ToolTip", "If true, clicking in the viewport when in the Tether mode will start a new cable\nIf false, you'll be able to select other Actors as usual, but will have to click Start New Cable to create cables" },
	};
#endif
	void Z_Construct_UClass_UTetherModeSettings_Statics::NewProp_bAutoStartCable_SetBit(void* Obj)
	{
		((UTetherModeSettings*)Obj)->bAutoStartCable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTetherModeSettings_Statics::NewProp_bAutoStartCable = { "bAutoStartCable", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTetherModeSettings), &Z_Construct_UClass_UTetherModeSettings_Statics::NewProp_bAutoStartCable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTetherModeSettings_Statics::NewProp_bAutoStartCable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTetherModeSettings_Statics::NewProp_bAutoStartCable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTetherModeSettings_Statics::NewProp_CableProperties_MetaData[] = {
		{ "Category", "TetherProperties" },
		{ "Comment", "/**\n\x09 * Default properties for newly created cables\n\x09 */" },
		{ "ModuleRelativePath", "Public/TetherModeSettings.h" },
		{ "ToolTip", "Default properties for newly created cables" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTetherModeSettings_Statics::NewProp_CableProperties = { "CableProperties", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTetherModeSettings, CableProperties), Z_Construct_UScriptStruct_FTetherCableProperties, METADATA_PARAMS(Z_Construct_UClass_UTetherModeSettings_Statics::NewProp_CableProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTetherModeSettings_Statics::NewProp_CableProperties_MetaData)) }; // 784995132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTetherModeSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherModeSettings_Statics::NewProp_bAutoStartCable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTetherModeSettings_Statics::NewProp_CableProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTetherModeSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTetherModeSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTetherModeSettings_Statics::ClassParams = {
		&UTetherModeSettings::StaticClass,
		"TetherModeSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTetherModeSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTetherModeSettings_Statics::PropPointers),
		0,
		0x001004A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTetherModeSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTetherModeSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTetherModeSettings()
	{
		if (!Z_Registration_Info_UClass_UTetherModeSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTetherModeSettings.OuterSingleton, Z_Construct_UClass_UTetherModeSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTetherModeSettings.OuterSingleton;
	}
	template<> TETHEREDITOR_API UClass* StaticClass<UTetherModeSettings>()
	{
		return UTetherModeSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTetherModeSettings);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_TetherEditor_Public_TetherModeSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_TetherEditor_Public_TetherModeSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTetherModeSettings, UTetherModeSettings::StaticClass, TEXT("UTetherModeSettings"), &Z_Registration_Info_UClass_UTetherModeSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTetherModeSettings), 512120350U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_TetherEditor_Public_TetherModeSettings_h_918586297(TEXT("/Script/TetherEditor"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_TetherEditor_Public_TetherModeSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_Tether_Source_TetherEditor_Public_TetherModeSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
