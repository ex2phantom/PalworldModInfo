#ifndef UE4SS_SDK_BP_AIActionRevivePal_HPP
#define UE4SS_SDK_BP_AIActionRevivePal_HPP

class UBP_AIActionRevivePal_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0138 (size: 0x8)
    class APalCharacter* Trainer;                                                     // 0x0140 (size: 0x8)
    FName flagName;                                                                   // 0x0148 (size: 0x8)
    class APalCharacter* Owner;                                                       // 0x0150 (size: 0x8)
    class UPalPartnerSkillParameterComponent* PartnerSkillParam;                      // 0x0158 (size: 0x8)
    TSubclassOf<class UPalActionBase> DeathActionClass;                               // 0x0160 (size: 0x8)
    TSubclassOf<class UPalActionBase> ReviveActionClass;                              // 0x0168 (size: 0x8)
    double InitWaitReviveTimer;                                                       // 0x0170 (size: 0x8)
    double InitWaitReviveTime;                                                        // 0x0178 (size: 0x8)

    void SetDisableDeadReturnOtomo(bool isDisable);
    bool IsGoal();
    void EndCoop();
    void OnActionNotify(const class UPalActionBase* action, FName NotifyName);
    void OnEndAction();
    void SetMuteki(bool IsMuteki);
    void IsNearLocation(bool& IsNear);
    void SetupAction(class APawn* ControlledPawn);
    void ActionStart(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ExecuteUbergraph_BP_AIActionRevivePal(int32 EntryPoint);
}; // Size: 0x180

#endif
