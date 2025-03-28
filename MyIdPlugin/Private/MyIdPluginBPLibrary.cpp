// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyIdPluginBPLibrary.h"
#include "MyIdPluginGameInstanceSubsystem.h"
#include "Engine/GameInstance.h"

UMyIdPluginBPLibrary::UMyIdPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
	
}


void UMyIdPluginBPLibrary::SetUserName(const UGameInstance* GameInstance, const FString& NewName)
{
	if (GameInstance)
	{
		if (UMyIdPluginGameInstanceSubsystem* MyIdPluginGameInstanceSubsystem =
		GameInstance->GetSubsystem<UMyIdPluginGameInstanceSubsystem>())
		{
			MyIdPluginGameInstanceSubsystem->SetUserName(NewName);
			UE_LOG(LogTemp, Log, TEXT("UserName set to: %s"), *NewName);
			return;
		}
	}
	
	UE_LOG(LogTemp, Log, TEXT("Fail UserName set to: %s"), *NewName);
}

FString UMyIdPluginBPLibrary::GetUserName(const UGameInstance* GameInstance)
{
	if (GameInstance)
	{
		if (UMyIdPluginGameInstanceSubsystem* MyIdPluginGameInstanceSubsystem =
		GameInstance->GetSubsystem<UMyIdPluginGameInstanceSubsystem>())
		{
			return MyIdPluginGameInstanceSubsystem->GetUserName();
		}
	}
	
	return TEXT("");
}
