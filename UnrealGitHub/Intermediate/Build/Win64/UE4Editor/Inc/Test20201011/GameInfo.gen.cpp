// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test20201011/GameInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameInfo() {}
// Cross Module References
	TEST20201011_API UEnum* Z_Construct_UEnum_Test20201011_EDir();
	UPackage* Z_Construct_UPackage__Script_Test20201011();
// End Cross Module References
	static UEnum* EDir_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Test20201011_EDir, Z_Construct_UPackage__Script_Test20201011(), TEXT("EDir"));
		}
		return Singleton;
	}
	template<> TEST20201011_API UEnum* StaticEnum<EDir>()
	{
		return EDir_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDir(EDir_StaticEnum, TEXT("/Script/Test20201011"), TEXT("EDir"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Test20201011_EDir_Hash() { return 270719342U; }
	UEnum* Z_Construct_UEnum_Test20201011_EDir()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Test20201011();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDir"), 0, Get_Z_Construct_UEnum_Test20201011_EDir_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDir::Front", (int64)EDir::Front },
				{ "EDir::Back", (int64)EDir::Back },
				{ "EDir::Left", (int64)EDir::Left },
				{ "EDir::Right", (int64)EDir::Right },
				{ "EDir::Up", (int64)EDir::Up },
				{ "EDir::Down", (int64)EDir::Down },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Back.Name", "EDir::Back" },
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "Down.Name", "EDir::Down" },
				{ "Front.Name", "EDir::Front" },
				{ "Left.Name", "EDir::Left" },
				{ "ModuleRelativePath", "GameInfo.h" },
				{ "Right.Name", "EDir::Right" },
				{ "Up.Name", "EDir::Up" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Test20201011,
				nullptr,
				"EDir",
				"EDir",
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
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
