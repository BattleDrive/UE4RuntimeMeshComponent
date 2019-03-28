// Copyright 2016-2018 Chris Conway (Koderz). All Rights Reserved.

#include "IRuntimeMeshComponentEditorPlugin.h"
#include "PropertyEditorModule.h"
#include "RuntimeMeshComponent.h"
#include "RuntimeMeshComponentDetails.h"
#include "RuntimeMeshComponentEditorStyle.h"

#include "Modules/ModuleManager.h"

class FRuntimeMeshComponentEditorPlugin : public IRuntimeMeshComponentEditorPlugin
{
public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
};

IMPLEMENT_MODULE(FRuntimeMeshComponentEditorPlugin, RuntimeMeshComponentEditor)

void FRuntimeMeshComponentEditorPlugin::StartupModule()
{
	{
		FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>("PropertyEditor");
		PropertyModule.RegisterCustomClassLayout(URuntimeMeshComponent::StaticClass()->GetFName(), FOnGetDetailCustomizationInstance::CreateStatic(&FRuntimeMeshComponentDetails::MakeInstance));
	}

	FRuntimeMeshComponentEditorStyle::Initialize();
	FRuntimeMeshComponentEditorStyle::ReloadTextures();
}

void FRuntimeMeshComponentEditorPlugin::ShutdownModule()
{
	FRuntimeMeshComponentEditorStyle::Shutdown();
}
