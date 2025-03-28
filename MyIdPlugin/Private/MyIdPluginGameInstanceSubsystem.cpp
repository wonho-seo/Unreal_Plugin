#include "MyIdPluginGameInstanceSubsystem.h"

FString UMyIdPluginGameInstanceSubsystem::GetUserName() const
{
	return UserName;
}

void UMyIdPluginGameInstanceSubsystem::SetUserName(const FString& NewName)
{
	UserName = NewName;
}
