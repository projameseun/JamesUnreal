// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test20201011/YinAnim.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYinAnim() {}
// Cross Module References
	TEST20201011_API UEnum* Z_Construct_UEnum_Test20201011_EYinAnim();
	UPackage* Z_Construct_UPackage__Script_Test20201011();
	TEST20201011_API UClass* Z_Construct_UClass_UYinAnim_NoRegister();
	TEST20201011_API UClass* Z_Construct_UClass_UYinAnim();
	TEST20201011_API UClass* Z_Construct_UClass_UPlayerBaseAnim();
// End Cross Module References
	static UEnum* EYinAnim_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Test20201011_EYinAnim, Z_Construct_UPackage__Script_Test20201011(), TEXT("EYinAnim"));
		}
		return Singleton;
	}
	template<> TEST20201011_API UEnum* StaticEnum<EYinAnim>()
	{
		return EYinAnim_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EYinAnim(EYinAnim_StaticEnum, TEXT("/Script/Test20201011"), TEXT("EYinAnim"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Test20201011_EYinAnim_Hash() { return 1574864073U; }
	UEnum* Z_Construct_UEnum_Test20201011_EYinAnim()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Test20201011();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EYinAnim"), 0, Get_Z_Construct_UEnum_Test20201011_EYinAnim_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EYinAnim::Idle", (int64)EYinAnim::Idle },
				{ "EYinAnim::Run", (int64)EYinAnim::Run },
				{ "EYinAnim::Attack", (int64)EYinAnim::Attack },
				{ "EYinAnim::Hit", (int64)EYinAnim::Hit },
				{ "EYinAnim::Jump", (int64)EYinAnim::Jump },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack.Name", "EYinAnim::Attack" },
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "Hit.Name", "EYinAnim::Hit" },
				{ "Idle.Name", "EYinAnim::Idle" },
				{ "Jump.Name", "EYinAnim::Jump" },
				{ "ModuleRelativePath", "YinAnim.h" },
				{ "Run.Name", "EYinAnim::Run" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Test20201011,
				nullptr,
				"EYinAnim",
				"EYinAnim",
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
	void UYinAnim::StaticRegisterNativesUYinAnim()
	{
	}
	UClass* Z_Construct_UClass_UYinAnim_NoRegister()
	{
		return UYinAnim::StaticClass();
	}
	struct Z_Construct_UClass_UYinAnim_Statics
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
	UObject* (*const Z_Construct_UClass_UYinAnim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlayerBaseAnim,
		(UObject* (*)())Z_Construct_UPackage__Script_Test20201011,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYinAnim_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "YinAnim.h" },
		{ "ModuleRelativePath", "YinAnim.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UYinAnim_Statics::NewProp_AnimType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EYinAnim" },
		{ "Category", "YinAnim" },
		{ "ModuleRelativePath", "YinAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UYinAnim_Statics::NewProp_AnimType = { "AnimType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UYinAnim, AnimType), nullptr, METADATA_PARAMS(Z_Construct_UClass_UYinAnim_Statics::NewProp_AnimType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UYinAnim_Statics::NewProp_AnimType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UYinAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UYinAnim_Statics::NewProp_AnimType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UYinAnim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UYinAnim>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UYinAnim_Statics::ClassParams = {
		&UYinAnim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UYinAnim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UYinAnim_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UYinAnim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UYinAnim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UYinAnim()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UYinAnim_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UYinAnim, 3246381046);
	template<> TEST20201011_API UClass* StaticClass<UYinAnim>()
	{
		return UYinAnim::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UYinAnim(Z_Construct_UClass_UYinAnim, &UYinAnim::StaticClass, TEXT("/Script/Test20201011"), TEXT("UYinAnim"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UYinAnim);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
