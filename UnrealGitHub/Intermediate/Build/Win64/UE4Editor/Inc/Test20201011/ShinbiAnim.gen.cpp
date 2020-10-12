// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test20201011/ShinbiAnim.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShinbiAnim() {}
// Cross Module References
	TEST20201011_API UEnum* Z_Construct_UEnum_Test20201011_EShinbiAnim();
	UPackage* Z_Construct_UPackage__Script_Test20201011();
	TEST20201011_API UClass* Z_Construct_UClass_UShinbiAnim_NoRegister();
	TEST20201011_API UClass* Z_Construct_UClass_UShinbiAnim();
	TEST20201011_API UClass* Z_Construct_UClass_UPlayerBaseAnim();
// End Cross Module References
	static UEnum* EShinbiAnim_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Test20201011_EShinbiAnim, Z_Construct_UPackage__Script_Test20201011(), TEXT("EShinbiAnim"));
		}
		return Singleton;
	}
	template<> TEST20201011_API UEnum* StaticEnum<EShinbiAnim>()
	{
		return EShinbiAnim_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EShinbiAnim(EShinbiAnim_StaticEnum, TEXT("/Script/Test20201011"), TEXT("EShinbiAnim"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Test20201011_EShinbiAnim_Hash() { return 1241501252U; }
	UEnum* Z_Construct_UEnum_Test20201011_EShinbiAnim()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Test20201011();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EShinbiAnim"), 0, Get_Z_Construct_UEnum_Test20201011_EShinbiAnim_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EShinbiAnim::Idle", (int64)EShinbiAnim::Idle },
				{ "EShinbiAnim::Run", (int64)EShinbiAnim::Run },
				{ "EShinbiAnim::Attack", (int64)EShinbiAnim::Attack },
				{ "EShinbiAnim::Hit", (int64)EShinbiAnim::Hit },
				{ "EShinbiAnim::Jump", (int64)EShinbiAnim::Jump },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack.Name", "EShinbiAnim::Attack" },
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "Hit.Name", "EShinbiAnim::Hit" },
				{ "Idle.Name", "EShinbiAnim::Idle" },
				{ "Jump.Name", "EShinbiAnim::Jump" },
				{ "ModuleRelativePath", "ShinbiAnim.h" },
				{ "Run.Name", "EShinbiAnim::Run" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Test20201011,
				nullptr,
				"EShinbiAnim",
				"EShinbiAnim",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UShinbiAnim::StaticRegisterNativesUShinbiAnim()
	{
	}
	UClass* Z_Construct_UClass_UShinbiAnim_NoRegister()
	{
		return UShinbiAnim::StaticClass();
	}
	struct Z_Construct_UClass_UShinbiAnim_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AnimType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UShinbiAnim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlayerBaseAnim,
		(UObject* (*)())Z_Construct_UPackage__Script_Test20201011,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShinbiAnim_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "ShinbiAnim.h" },
		{ "ModuleRelativePath", "ShinbiAnim.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UShinbiAnim_Statics::NewProp_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EShinbiAnim" },
		{ "Category", "ShinbiAnim" },
		{ "ModuleRelativePath", "ShinbiAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UShinbiAnim_Statics::NewProp_AnimType = { "AnimType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UShinbiAnim, AnimType), nullptr, METADATA_PARAMS(Z_Construct_UClass_UShinbiAnim_Statics::NewProp_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UShinbiAnim_Statics::NewProp_AnimType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UShinbiAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UShinbiAnim_Statics::NewProp_AnimType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UShinbiAnim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UShinbiAnim>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UShinbiAnim_Statics::ClassParams = {
		&UShinbiAnim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UShinbiAnim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UShinbiAnim_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UShinbiAnim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UShinbiAnim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UShinbiAnim()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UShinbiAnim_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UShinbiAnim, 3238002195);
	template<> TEST20201011_API UClass* StaticClass<UShinbiAnim>()
	{
		return UShinbiAnim::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UShinbiAnim(Z_Construct_UClass_UShinbiAnim, &UShinbiAnim::StaticClass, TEXT("/Script/Test20201011"), TEXT("UShinbiAnim"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UShinbiAnim);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
