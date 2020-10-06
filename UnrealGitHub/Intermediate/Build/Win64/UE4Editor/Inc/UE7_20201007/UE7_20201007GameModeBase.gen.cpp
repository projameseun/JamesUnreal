// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE7_20201007/UE7_20201007GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE7_20201007GameModeBase() {}
// Cross Module References
	UE7_20201007_API UClass* Z_Construct_UClass_AUE7_20201007GameModeBase_NoRegister();
	UE7_20201007_API UClass* Z_Construct_UClass_AUE7_20201007GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE7_20201007();
// End Cross Module References
	void AUE7_20201007GameModeBase::StaticRegisterNativesAUE7_20201007GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUE7_20201007GameModeBase_NoRegister()
	{
		return AUE7_20201007GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUE7_20201007GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE7_20201007GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE7_20201007,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE7_20201007GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UE7_20201007GameModeBase.h" },
		{ "ModuleRelativePath", "UE7_20201007GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE7_20201007GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE7_20201007GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUE7_20201007GameModeBase_Statics::ClassParams = {
		&AUE7_20201007GameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUE7_20201007GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUE7_20201007GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE7_20201007GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUE7_20201007GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUE7_20201007GameModeBase, 1302283374);
	template<> UE7_20201007_API UClass* StaticClass<AUE7_20201007GameModeBase>()
	{
		return AUE7_20201007GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE7_20201007GameModeBase(Z_Construct_UClass_AUE7_20201007GameModeBase, &AUE7_20201007GameModeBase::StaticClass, TEXT("/Script/UE7_20201007"), TEXT("AUE7_20201007GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE7_20201007GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
