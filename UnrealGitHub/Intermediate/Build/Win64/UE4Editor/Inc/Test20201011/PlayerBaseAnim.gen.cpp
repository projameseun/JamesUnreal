// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test20201011/PlayerBaseAnim.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerBaseAnim() {}
// Cross Module References
	TEST20201011_API UEnum* Z_Construct_UEnum_Test20201011_EPlayerBaseAnim();
	UPackage* Z_Construct_UPackage__Script_Test20201011();
	TEST20201011_API UClass* Z_Construct_UClass_UPlayerBaseAnim_NoRegister();
	TEST20201011_API UClass* Z_Construct_UClass_UPlayerBaseAnim();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
// End Cross Module References
	static UEnum* EPlayerBaseAnim_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Test20201011_EPlayerBaseAnim, Z_Construct_UPackage__Script_Test20201011(), TEXT("EPlayerBaseAnim"));
		}
		return Singleton;
	}
	template<> TEST20201011_API UEnum* StaticEnum<EPlayerBaseAnim>()
	{
		return EPlayerBaseAnim_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPlayerBaseAnim(EPlayerBaseAnim_StaticEnum, TEXT("/Script/Test20201011"), TEXT("EPlayerBaseAnim"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Test20201011_EPlayerBaseAnim_Hash() { return 2626834828U; }
	UEnum* Z_Construct_UEnum_Test20201011_EPlayerBaseAnim()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Test20201011();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPlayerBaseAnim"), 0, Get_Z_Construct_UEnum_Test20201011_EPlayerBaseAnim_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPlayerBaseAnim::Idle", (int64)EPlayerBaseAnim::Idle },
				{ "EPlayerBaseAnim::Run", (int64)EPlayerBaseAnim::Run },
				{ "EPlayerBaseAnim::Attack", (int64)EPlayerBaseAnim::Attack },
				{ "EPlayerBaseAnim::Hit", (int64)EPlayerBaseAnim::Hit },
				{ "EPlayerBaseAnim::Jump", (int64)EPlayerBaseAnim::Jump },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Attack.Name", "EPlayerBaseAnim::Attack" },
				{ "Bitflags", "" },
				{ "BlueprintType", "true" },
				{ "Hit.Name", "EPlayerBaseAnim::Hit" },
				{ "Idle.Name", "EPlayerBaseAnim::Idle" },
				{ "Jump.Name", "EPlayerBaseAnim::Jump" },
				{ "ModuleRelativePath", "PlayerBaseAnim.h" },
				{ "Run.Name", "EPlayerBaseAnim::Run" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Test20201011,
				nullptr,
				"EPlayerBaseAnim",
				"EPlayerBaseAnim",
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
	DEFINE_FUNCTION(UPlayerBaseAnim::execAnimNotify_JumpEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_JumpEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerBaseAnim::execAnimNotify_NextAttackEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_NextAttackEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerBaseAnim::execAnimNotify_InIdle)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_InIdle();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerBaseAnim::execAnimNotify_AttackEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_AttackEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerBaseAnim::execAnimNotify_MoveStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AnimNotify_MoveStop();
		P_NATIVE_END;
	}
	void UPlayerBaseAnim::StaticRegisterNativesUPlayerBaseAnim()
	{
		UClass* Class = UPlayerBaseAnim::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_AttackEnd", &UPlayerBaseAnim::execAnimNotify_AttackEnd },
			{ "AnimNotify_InIdle", &UPlayerBaseAnim::execAnimNotify_InIdle },
			{ "AnimNotify_JumpEnd", &UPlayerBaseAnim::execAnimNotify_JumpEnd },
			{ "AnimNotify_MoveStop", &UPlayerBaseAnim::execAnimNotify_MoveStop },
			{ "AnimNotify_NextAttackEnd", &UPlayerBaseAnim::execAnimNotify_NextAttackEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_AttackEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_AttackEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerBaseAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_AttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerBaseAnim, nullptr, "AnimNotify_AttackEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_AttackEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_AttackEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_AttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_AttackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_InIdle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_InIdle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerBaseAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_InIdle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerBaseAnim, nullptr, "AnimNotify_InIdle", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_InIdle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_InIdle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_InIdle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_InIdle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_JumpEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_JumpEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerBaseAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_JumpEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerBaseAnim, nullptr, "AnimNotify_JumpEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_JumpEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_JumpEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_JumpEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_JumpEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_MoveStop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_MoveStop_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerBaseAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_MoveStop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerBaseAnim, nullptr, "AnimNotify_MoveStop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_MoveStop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_MoveStop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_MoveStop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_MoveStop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_NextAttackEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_NextAttackEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerBaseAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_NextAttackEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerBaseAnim, nullptr, "AnimNotify_NextAttackEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_NextAttackEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_NextAttackEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_NextAttackEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_NextAttackEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerBaseAnim_NoRegister()
	{
		return UPlayerBaseAnim::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerBaseAnim_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextAttackIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NextAttackIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackEnable_MetaData[];
#endif
		static void NewProp_AttackEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AttackEnable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpStop_MetaData[];
#endif
		static void NewProp_JumpStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_JumpStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveStop_MetaData[];
#endif
		static void NewProp_MoveStop_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MoveStop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dir_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Dir;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerBaseAnim_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Test20201011,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerBaseAnim_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_AttackEnd, "AnimNotify_AttackEnd" }, // 2989622163
		{ &Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_InIdle, "AnimNotify_InIdle" }, // 2535569272
		{ &Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_JumpEnd, "AnimNotify_JumpEnd" }, // 2633033357
		{ &Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_MoveStop, "AnimNotify_MoveStop" }, // 1615464474
		{ &Z_Construct_UFunction_UPlayerBaseAnim_AnimNotify_NextAttackEnd, "AnimNotify_NextAttackEnd" }, // 152875182
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerBaseAnim_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "PlayerBaseAnim.h" },
		{ "ModuleRelativePath", "PlayerBaseAnim.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_NextAttackIndex_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerBaseAnim" },
		{ "ModuleRelativePath", "PlayerBaseAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_NextAttackIndex = { "NextAttackIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerBaseAnim, NextAttackIndex), nullptr, METADATA_PARAMS(Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_NextAttackIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_NextAttackIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_AttackEnable_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerBaseAnim" },
		{ "ModuleRelativePath", "PlayerBaseAnim.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_AttackEnable_SetBit(void* Obj)
	{
		((UPlayerBaseAnim*)Obj)->AttackEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_AttackEnable = { "AttackEnable", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerBaseAnim), &Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_AttackEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_AttackEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_AttackEnable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_JumpStop_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerBaseAnim" },
		{ "ModuleRelativePath", "PlayerBaseAnim.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_JumpStop_SetBit(void* Obj)
	{
		((UPlayerBaseAnim*)Obj)->JumpStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_JumpStop = { "JumpStop", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerBaseAnim), &Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_JumpStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_JumpStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_JumpStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_MoveStop_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "PlayerBaseAnim" },
		{ "ModuleRelativePath", "PlayerBaseAnim.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_MoveStop_SetBit(void* Obj)
	{
		((UPlayerBaseAnim*)Obj)->MoveStop = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_MoveStop = { "MoveStop", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerBaseAnim), &Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_MoveStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_MoveStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_MoveStop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_Dir_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EDir" },
		{ "Category", "PlayerBaseAnim" },
		{ "ModuleRelativePath", "PlayerBaseAnim.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_Dir = { "Dir", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerBaseAnim, Dir), nullptr, METADATA_PARAMS(Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_Dir_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_Dir_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerBaseAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_NextAttackIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_AttackEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_JumpStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_MoveStop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerBaseAnim_Statics::NewProp_Dir,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerBaseAnim_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerBaseAnim>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerBaseAnim_Statics::ClassParams = {
		&UPlayerBaseAnim::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerBaseAnim_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerBaseAnim_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerBaseAnim_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerBaseAnim_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerBaseAnim()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerBaseAnim_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerBaseAnim, 43277549);
	template<> TEST20201011_API UClass* StaticClass<UPlayerBaseAnim>()
	{
		return UPlayerBaseAnim::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerBaseAnim(Z_Construct_UClass_UPlayerBaseAnim, &UPlayerBaseAnim::StaticClass, TEXT("/Script/Test20201011"), TEXT("UPlayerBaseAnim"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerBaseAnim);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
