#ifndef UE4SS_SDK_BP_AIActionHealWater_ToOtomoAndPlayer_HPP
#define UE4SS_SDK_BP_AIActionHealWater_ToOtomoAndPlayer_HPP

class UBP_AIActionHealWater_ToOtomoAndPlayer_C : public UPalAIActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0138 (size: 0x8)
    class APalCharacter* OwnerPawn;                                                   // 0x0140 (size: 0x8)
    class APalCharacter* HealTarget;                                                  // 0x0148 (size: 0x8)
    class UPalPartnerSkillParameterComponent* PartnerSkill;                           // 0x0150 (size: 0x8)

    void AddSkillLog();
    void SetMoveDisableFlag(bool isDisable);
    void SetDisableThrowPalFlag(bool isDisable);
    void GetHealValue(FFixedPoint64 MaxHP, int32& HealValue);
    void EndPartnerSkill();
    void StartPartnerSkill();
    void Setup(class UObject* Object);
    void ActionStart(class APawn* ControlledPawn);
    void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
    void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult::Type> WithResult);
    void OnActionNotify(const class UPalActionBase* action, FName NotifyName);
    void ExecuteUbergraph_BP_AIActionHealWater_ToOtomoAndPlayer(int32 EntryPoint);
}; // Size: 0x158

#endif
