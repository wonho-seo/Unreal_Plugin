#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MyIdPluginGameInstanceSubsystem.generated.h"

UCLASS()
class UMyIdPluginGameInstanceSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()
protected:
    UPROPERTY()
    FString UserName = TEXT("DefaultName");
public:
    UFUNCTION(BlueprintCallable, Category = "MyIdPlugin")
    FString GetUserName() const;
    UFUNCTION(BlueprintCallable, Category = "MyIdPlugin")
    void SetUserName(const FString& NewName);
    
};
