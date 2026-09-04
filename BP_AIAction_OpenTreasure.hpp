#ifndef UE4SS_SDK_BP_AIAction_OpenTreasure_HPP
#define UE4SS_SDK_BP_AIAction_OpenTreasure_HPP

class UBP_AIAction_OpenTreasure_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0138 (size: 0x8)
    class UPalPartnerSkillParameterComponent* PartnerSkillParam;                      // 0x0140 (size: 0x8)
    class APalCharacter* OwnerCharacter;                                              // 0x0148 (size: 0x8)
    class APalCharacter* PlayerCharacter;                                             // 0x0150 (size: 0x8)
    FVector PrevTargetLocation;                                                       // 0x0158 (size: 0x18)
    double ActionTime;                                                                // 0x0170 (size: 0x8)
    bool IsMoveEnd;                                                                   // 0x0178 (size: 0x1)

    void SetMoveDisableFlag(bool isDisable);
    void FinishAction();
    void SetupAction(class APawn* ControlledPawn);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void ActionAbort(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void OnActionNotify(const class UPalActionBase* action, FName NotifyName);
    void ActionStart(class APawn* ControlledPawn);
    void StartMotion();
    void ExecuteUbergraph_BP_AIAction_OpenTreasure(int32 EntryPoint);
}; // Size: 0x179

#endif
