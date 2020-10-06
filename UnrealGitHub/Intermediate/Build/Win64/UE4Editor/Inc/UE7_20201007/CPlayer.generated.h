// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE7_20201007_CPlayer_generated_h
#error "CPlayer.generated.h already included, missing '#pragma once' in CPlayer.h"
#endif
#define UE7_20201007_CPlayer_generated_h

#define UE7_20201007_Source_UE7_20201007_CPlayer_h_20_SPARSE_DATA
#define UE7_20201007_Source_UE7_20201007_CPlayer_h_20_RPC_WRAPPERS
#define UE7_20201007_Source_UE7_20201007_CPlayer_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define UE7_20201007_Source_UE7_20201007_CPlayer_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPlayer(); \
	friend struct Z_Construct_UClass_ACPlayer_Statics; \
public: \
	DECLARE_CLASS(ACPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE7_20201007"), NO_API) \
	DECLARE_SERIALIZER(ACPlayer)


#define UE7_20201007_Source_UE7_20201007_CPlayer_h_20_INCLASS \
private: \
	static void StaticRegisterNativesACPlayer(); \
	friend struct Z_Construct_UClass_ACPlayer_Statics; \
public: \
	DECLARE_CLASS(ACPlayer, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/UE7_20201007"), NO_API) \
	DECLARE_SERIALIZER(ACPlayer)


#define UE7_20201007_Source_UE7_20201007_CPlayer_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPlayer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPlayer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlayer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPlayer(ACPlayer&&); \
	NO_API ACPlayer(const ACPlayer&); \
public:


#define UE7_20201007_Source_UE7_20201007_CPlayer_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACPlayer(ACPlayer&&); \
	NO_API ACPlayer(const ACPlayer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPlayer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPlayer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACPlayer)


#define UE7_20201007_Source_UE7_20201007_CPlayer_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ACPlayer, Camera); } \
	FORCEINLINE static uint32 __PPO__Arm() { return STRUCT_OFFSET(ACPlayer, Arm); }


#define UE7_20201007_Source_UE7_20201007_CPlayer_h_11_PROLOG
#define UE7_20201007_Source_UE7_20201007_CPlayer_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE7_20201007_Source_UE7_20201007_CPlayer_h_20_PRIVATE_PROPERTY_OFFSET \
	UE7_20201007_Source_UE7_20201007_CPlayer_h_20_SPARSE_DATA \
	UE7_20201007_Source_UE7_20201007_CPlayer_h_20_RPC_WRAPPERS \
	UE7_20201007_Source_UE7_20201007_CPlayer_h_20_INCLASS \
	UE7_20201007_Source_UE7_20201007_CPlayer_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define UE7_20201007_Source_UE7_20201007_CPlayer_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	UE7_20201007_Source_UE7_20201007_CPlayer_h_20_PRIVATE_PROPERTY_OFFSET \
	UE7_20201007_Source_UE7_20201007_CPlayer_h_20_SPARSE_DATA \
	UE7_20201007_Source_UE7_20201007_CPlayer_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	UE7_20201007_Source_UE7_20201007_CPlayer_h_20_INCLASS_NO_PURE_DECLS \
	UE7_20201007_Source_UE7_20201007_CPlayer_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE7_20201007_API UClass* StaticClass<class ACPlayer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID UE7_20201007_Source_UE7_20201007_CPlayer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
