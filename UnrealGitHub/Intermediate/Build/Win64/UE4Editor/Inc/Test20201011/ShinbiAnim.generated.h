// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST20201011_ShinbiAnim_generated_h
#error "ShinbiAnim.generated.h already included, missing '#pragma once' in ShinbiAnim.h"
#endif
#define TEST20201011_ShinbiAnim_generated_h

#define Test20201011_Source_Test20201011_ShinbiAnim_h_23_SPARSE_DATA
#define Test20201011_Source_Test20201011_ShinbiAnim_h_23_RPC_WRAPPERS
#define Test20201011_Source_Test20201011_ShinbiAnim_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Test20201011_Source_Test20201011_ShinbiAnim_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUShinbiAnim(); \
	friend struct Z_Construct_UClass_UShinbiAnim_Statics; \
public: \
	DECLARE_CLASS(UShinbiAnim, UPlayerBaseAnim, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Test20201011"), NO_API) \
	DECLARE_SERIALIZER(UShinbiAnim)


#define Test20201011_Source_Test20201011_ShinbiAnim_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUShinbiAnim(); \
	friend struct Z_Construct_UClass_UShinbiAnim_Statics; \
public: \
	DECLARE_CLASS(UShinbiAnim, UPlayerBaseAnim, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Test20201011"), NO_API) \
	DECLARE_SERIALIZER(UShinbiAnim)


#define Test20201011_Source_Test20201011_ShinbiAnim_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UShinbiAnim(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UShinbiAnim) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShinbiAnim); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShinbiAnim); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShinbiAnim(UShinbiAnim&&); \
	NO_API UShinbiAnim(const UShinbiAnim&); \
public:


#define Test20201011_Source_Test20201011_ShinbiAnim_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UShinbiAnim(UShinbiAnim&&); \
	NO_API UShinbiAnim(const UShinbiAnim&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UShinbiAnim); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UShinbiAnim); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UShinbiAnim)


#define Test20201011_Source_Test20201011_ShinbiAnim_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AnimType() { return STRUCT_OFFSET(UShinbiAnim, AnimType); }


#define Test20201011_Source_Test20201011_ShinbiAnim_h_20_PROLOG
#define Test20201011_Source_Test20201011_ShinbiAnim_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test20201011_Source_Test20201011_ShinbiAnim_h_23_PRIVATE_PROPERTY_OFFSET \
	Test20201011_Source_Test20201011_ShinbiAnim_h_23_SPARSE_DATA \
	Test20201011_Source_Test20201011_ShinbiAnim_h_23_RPC_WRAPPERS \
	Test20201011_Source_Test20201011_ShinbiAnim_h_23_INCLASS \
	Test20201011_Source_Test20201011_ShinbiAnim_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test20201011_Source_Test20201011_ShinbiAnim_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test20201011_Source_Test20201011_ShinbiAnim_h_23_PRIVATE_PROPERTY_OFFSET \
	Test20201011_Source_Test20201011_ShinbiAnim_h_23_SPARSE_DATA \
	Test20201011_Source_Test20201011_ShinbiAnim_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Test20201011_Source_Test20201011_ShinbiAnim_h_23_INCLASS_NO_PURE_DECLS \
	Test20201011_Source_Test20201011_ShinbiAnim_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST20201011_API UClass* StaticClass<class UShinbiAnim>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test20201011_Source_Test20201011_ShinbiAnim_h


#define FOREACH_ENUM_ESHINBIANIM(op) \
	op(EShinbiAnim::Idle) \
	op(EShinbiAnim::Run) \
	op(EShinbiAnim::Attack) \
	op(EShinbiAnim::Hit) \
	op(EShinbiAnim::Jump) 

enum class EShinbiAnim : uint8;
template<> TEST20201011_API UEnum* StaticEnum<EShinbiAnim>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
