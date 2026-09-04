#ifndef UE4SS_SDK_BP_AIActionRevivePlayer_HPP
#define UE4SS_SDK_BP_AIActionRevivePlayer_HPP

class UBP_AIActionRevivePlayer_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0138 (size: 0x8)
    class APalCharacter* Trainer;                                                     // 0x0140 (size: 0x8)
    FName flagName;                                                                   // 0x0148 (size: 0x8)
    class APalCharacter* Owner;                                                       // 0x0150 (size: 0x8)
    class UPalPartnerSkillParameterComponent* PartnerSkillParam;                      // 0x0158 (size: 0x8)
    TArray<class TSubclassOf<UPalActionBase>> ActionList;                             // 0x0160 (size: 0x10)
    int32 ActionIndex;                                                                // 0x0170 (size: 0x4)
    class UPalActionBase* CurrentAction;                                              // 0x0178 (size: 0x8)
    bool ReviveCompleted;                                                             // 0x0180 (size: 0x1)

    bool IsGoal();
    void EndCoop();
    void OnActionNotify(const class UPalActionBase* action, FName NotifyName);
    void OnEndAction();
    void SetMuteki(bool IsMuteki);
    void IsNearLocation(bool& IsNear);
    void PlayNextAction();
    void SetupAction(class APawn* ControlledPawn);
    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ExecuteUbergraph_BP_AIActionRevivePlayer(int32 EntryPoint);
}; // Size: 0x181

#endif
