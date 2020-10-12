// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST20201011_YinAnim_generated_h
#error "YinAnim.generated.h already included, missing '#pragma once' in YinAnim.h"
#endif
#define TEST20201011_YinAnim_generated_h

#define Test20201011_Source_Test20201011_YinAnim_h_22_SPARSE_DATA
#define Test20201011_Source_Test20201011_YinAnim_h_22_RPC_WRAPPERS
#define Test20201011_Source_Test20201011_YinAnim_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define Test20201011_Source_Test20201011_YinAnim_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUYinAnim(); \
	friend struct Z_Construct_UClass_UYinAnim_Statics; \
public: \
	DECLARE_CLASS(UYinAnim, UPlayerBaseAnim, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Test20201011"), NO_API) \
	DECLARE_SERIALIZER(UYinAnim)


#define Test20201011_Source_Test20201011_YinAnim_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUYinAnim(); \
	friend struct Z_Construct_UClass_UYinAnim_Statics; \
public: \
	DECLARE_CLASS(UYinAnim, UPlayerBaseAnim, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Test20201011"), NO_API) \
	DECLARE_SERIALIZER(UYinAnim)


#define Test20201011_Source_Test20201011_YinAnim_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UYinAnim(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UYinAnim) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYinAnim); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYinAnim); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYinAnim(UYinAnim&&); \
	NO_API UYinAnim(const UYinAnim&); \
public:


#define Test20201011_Source_Test20201011_YinAnim_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UYinAnim(UYinAnim&&); \
	NO_API UYinAnim(const UYinAnim&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UYinAnim); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UYinAnim); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UYinAnim)


#define Test20201011_Source_Test20201011_YinAnim_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AnimType() { return STRUCT_OFFSET(UYinAnim, AnimType); }


#define Test20201011_Source_Test20201011_YinAnim_h_19_PROLOG
#define Test20201011_Source_Test20201011_YinAnim_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test20201011_Source_Test20201011_YinAnim_h_22_PRIVATE_PROPERTY_OFFSET \
	Test20201011_Source_Test20201011_YinAnim_h_22_SPARSE_DATA \
	Test20201011_Source_Test20201011_YinAnim_h_22_RPC_WRAPPERS \
	Test20201011_Source_Test20201011_YinAnim_h_22_INCLASS \
	Test20201011_Source_Test20201011_YinAnim_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test20201011_Source_Test20201011_YinAnim_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test20201011_Source_Test20201011_YinAnim_h_22_PRIVATE_PROPERTY_OFFSET \
	Test20201011_Source_Test20201011_YinAnim_h_22_SPARSE_DATA \
	Test20201011_Source_Test20201011_YinAnim_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Test20201011_Source_Test20201011_YinAnim_h_22_INCLASS_NO_PURE_DECLS \
	Test20201011_Source_Test20201011_YinAnim_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST20201011_API UClass* StaticClass<class UYinAnim>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test20201011_Source_Test20201011_YinAnim_h


#define FOREACH_ENUM_EYINANIM(op) \
	op(EYinAnim::Idle) \
	op(EYinAnim::Run) \
	op(EYinAnim::Attack) \
	op(EYinAnim::Hit) \
	op(EYinAnim::Jump) 

enum class EYinAnim : uint8;
template<> TEST20201011_API UEnum* StaticEnum<EYinAnim>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
