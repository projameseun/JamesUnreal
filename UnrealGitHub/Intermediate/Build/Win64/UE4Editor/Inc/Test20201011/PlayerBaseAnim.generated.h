// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST20201011_PlayerBaseAnim_generated_h
#error "PlayerBaseAnim.generated.h already included, missing '#pragma once' in PlayerBaseAnim.h"
#endif
#define TEST20201011_PlayerBaseAnim_generated_h

#define Test20201011_Source_Test20201011_PlayerBaseAnim_h_23_SPARSE_DATA
#define Test20201011_Source_Test20201011_PlayerBaseAnim_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimNotify_JumpEnd); \
	DECLARE_FUNCTION(execAnimNotify_NextAttackEnd); \
	DECLARE_FUNCTION(execAnimNotify_InIdle); \
	DECLARE_FUNCTION(execAnimNotify_AttackEnd); \
	DECLARE_FUNCTION(execAnimNotify_MoveStop);


#define Test20201011_Source_Test20201011_PlayerBaseAnim_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_JumpEnd); \
	DECLARE_FUNCTION(execAnimNotify_NextAttackEnd); \
	DECLARE_FUNCTION(execAnimNotify_InIdle); \
	DECLARE_FUNCTION(execAnimNotify_AttackEnd); \
	DECLARE_FUNCTION(execAnimNotify_MoveStop);


#define Test20201011_Source_Test20201011_PlayerBaseAnim_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerBaseAnim(); \
	friend struct Z_Construct_UClass_UPlayerBaseAnim_Statics; \
public: \
	DECLARE_CLASS(UPlayerBaseAnim, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Test20201011"), NO_API) \
	DECLARE_SERIALIZER(UPlayerBaseAnim)


#define Test20201011_Source_Test20201011_PlayerBaseAnim_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerBaseAnim(); \
	friend struct Z_Construct_UClass_UPlayerBaseAnim_Statics; \
public: \
	DECLARE_CLASS(UPlayerBaseAnim, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Test20201011"), NO_API) \
	DECLARE_SERIALIZER(UPlayerBaseAnim)


#define Test20201011_Source_Test20201011_PlayerBaseAnim_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerBaseAnim(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerBaseAnim) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerBaseAnim); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerBaseAnim); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerBaseAnim(UPlayerBaseAnim&&); \
	NO_API UPlayerBaseAnim(const UPlayerBaseAnim&); \
public:


#define Test20201011_Source_Test20201011_PlayerBaseAnim_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerBaseAnim(UPlayerBaseAnim&&); \
	NO_API UPlayerBaseAnim(const UPlayerBaseAnim&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerBaseAnim); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerBaseAnim); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayerBaseAnim)


#define Test20201011_Source_Test20201011_PlayerBaseAnim_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Dir() { return STRUCT_OFFSET(UPlayerBaseAnim, Dir); } \
	FORCEINLINE static uint32 __PPO__MoveStop() { return STRUCT_OFFSET(UPlayerBaseAnim, MoveStop); } \
	FORCEINLINE static uint32 __PPO__JumpStop() { return STRUCT_OFFSET(UPlayerBaseAnim, JumpStop); } \
	FORCEINLINE static uint32 __PPO__AttackEnable() { return STRUCT_OFFSET(UPlayerBaseAnim, AttackEnable); } \
	FORCEINLINE static uint32 __PPO__NextAttackIndex() { return STRUCT_OFFSET(UPlayerBaseAnim, NextAttackIndex); }


#define Test20201011_Source_Test20201011_PlayerBaseAnim_h_20_PROLOG
#define Test20201011_Source_Test20201011_PlayerBaseAnim_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test20201011_Source_Test20201011_PlayerBaseAnim_h_23_PRIVATE_PROPERTY_OFFSET \
	Test20201011_Source_Test20201011_PlayerBaseAnim_h_23_SPARSE_DATA \
	Test20201011_Source_Test20201011_PlayerBaseAnim_h_23_RPC_WRAPPERS \
	Test20201011_Source_Test20201011_PlayerBaseAnim_h_23_INCLASS \
	Test20201011_Source_Test20201011_PlayerBaseAnim_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test20201011_Source_Test20201011_PlayerBaseAnim_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test20201011_Source_Test20201011_PlayerBaseAnim_h_23_PRIVATE_PROPERTY_OFFSET \
	Test20201011_Source_Test20201011_PlayerBaseAnim_h_23_SPARSE_DATA \
	Test20201011_Source_Test20201011_PlayerBaseAnim_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Test20201011_Source_Test20201011_PlayerBaseAnim_h_23_INCLASS_NO_PURE_DECLS \
	Test20201011_Source_Test20201011_PlayerBaseAnim_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST20201011_API UClass* StaticClass<class UPlayerBaseAnim>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test20201011_Source_Test20201011_PlayerBaseAnim_h


#define FOREACH_ENUM_EPLAYERBASEANIM(op) \
	op(EPlayerBaseAnim::Idle) \
	op(EPlayerBaseAnim::Run) \
	op(EPlayerBaseAnim::Attack) \
	op(EPlayerBaseAnim::Hit) \
	op(EPlayerBaseAnim::Jump) 

enum class EPlayerBaseAnim : uint8;
template<> TEST20201011_API UEnum* StaticEnum<EPlayerBaseAnim>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
