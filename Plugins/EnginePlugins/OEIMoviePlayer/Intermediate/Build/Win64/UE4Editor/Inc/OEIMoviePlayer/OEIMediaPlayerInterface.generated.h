// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef OEIMOVIEPLAYER_OEIMediaPlayerInterface_generated_h
#error "OEIMediaPlayerInterface.generated.h already included, missing '#pragma once' in OEIMediaPlayerInterface.h"
#endif
#define OEIMOVIEPLAYER_OEIMediaPlayerInterface_generated_h

#define Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMediaPlayerInterface_h_8_SPARSE_DATA
#define Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMediaPlayerInterface_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMovieFinished_Impl); \
	DECLARE_FUNCTION(execOnMovieLoaded);


#define Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMediaPlayerInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMovieFinished_Impl); \
	DECLARE_FUNCTION(execOnMovieLoaded);


#define Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMediaPlayerInterface_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OEIMOVIEPLAYER_API UOEIMediaPlayerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOEIMediaPlayerInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OEIMOVIEPLAYER_API, UOEIMediaPlayerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOEIMediaPlayerInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OEIMOVIEPLAYER_API UOEIMediaPlayerInterface(UOEIMediaPlayerInterface&&); \
	OEIMOVIEPLAYER_API UOEIMediaPlayerInterface(const UOEIMediaPlayerInterface&); \
public:


#define Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMediaPlayerInterface_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	OEIMOVIEPLAYER_API UOEIMediaPlayerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	OEIMOVIEPLAYER_API UOEIMediaPlayerInterface(UOEIMediaPlayerInterface&&); \
	OEIMOVIEPLAYER_API UOEIMediaPlayerInterface(const UOEIMediaPlayerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(OEIMOVIEPLAYER_API, UOEIMediaPlayerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UOEIMediaPlayerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UOEIMediaPlayerInterface)


#define Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMediaPlayerInterface_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUOEIMediaPlayerInterface(); \
	friend struct Z_Construct_UClass_UOEIMediaPlayerInterface_Statics; \
public: \
	DECLARE_CLASS(UOEIMediaPlayerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/OEIMoviePlayer"), OEIMOVIEPLAYER_API) \
	DECLARE_SERIALIZER(UOEIMediaPlayerInterface)


#define Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMediaPlayerInterface_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMediaPlayerInterface_h_8_GENERATED_UINTERFACE_BODY() \
	Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMediaPlayerInterface_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMediaPlayerInterface_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMediaPlayerInterface_h_8_GENERATED_UINTERFACE_BODY() \
	Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMediaPlayerInterface_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMediaPlayerInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IOEIMediaPlayerInterface() {} \
public: \
	typedef UOEIMediaPlayerInterface UClassType; \
	typedef IOEIMediaPlayerInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMediaPlayerInterface_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IOEIMediaPlayerInterface() {} \
public: \
	typedef UOEIMediaPlayerInterface UClassType; \
	typedef IOEIMediaPlayerInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMediaPlayerInterface_h_6_PROLOG
#define Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMediaPlayerInterface_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMediaPlayerInterface_h_8_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMediaPlayerInterface_h_8_RPC_WRAPPERS \
	Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMediaPlayerInterface_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMediaPlayerInterface_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMediaPlayerInterface_h_8_SPARSE_DATA \
	Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMediaPlayerInterface_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMediaPlayerInterface_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> OEIMOVIEPLAYER_API UClass* StaticClass<class UOEIMediaPlayerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test_Plugins_EnginePlugins_OEIMoviePlayer_Source_OEIMoviePlayer_Public_OEIMediaPlayerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
