// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test20201011/Test20201011GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTest20201011GameModeBase() {}
// Cross Module References
	TEST20201011_API UClass* Z_Construct_UClass_ATest20201011GameModeBase_NoRegister();
	TEST20201011_API UClass* Z_Construct_UClass_ATest20201011GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Test20201011();
// End Cross Module References
	void ATest20201011GameModeBase::StaticRegisterNativesATest20201011GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ATest20201011GameModeBase_NoRegister()
	{
		return ATest20201011GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATest20201011GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATest20201011GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Test20201011,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest20201011GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Test20201011GameModeBase.h" },
		{ "ModuleRelativePath", "Test20201011GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATest20201011GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATest20201011GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATest20201011GameModeBase_Statics::ClassParams = {
		&ATest20201011GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ATest20201011GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATest20201011GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATest20201011GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATest20201011GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATest20201011GameModeBase, 43966670);
	template<> TEST20201011_API UClass* StaticClass<ATest20201011GameModeBase>()
	{
		return ATest20201011GameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATest20201011GameModeBase(Z_Construct_UClass_ATest20201011GameModeBase, &ATest20201011GameModeBase::StaticClass, TEXT("/Script/Test20201011"), TEXT("ATest20201011GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATest20201011GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
