#ifndef UE4SS_SDK_BP_ActionDeath_RevivePal_HPP
#define UE4SS_SDK_BP_ActionDeath_RevivePal_HPP

class UBP_ActionDeath_RevivePal_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    bool DownForceAble;                                                               // 0x0168 (size: 0x1)
    bool NoEffect;                                                                    // 0x0169 (size: 0x1)
    FVector PreLocation;                                                              // 0x0170 (size: 0x18)
    FVector Velocity;                                                                 // 0x0188 (size: 0x18)
    bool EnableRagdoll;                                                               // 0x01A0 (size: 0x1)
    FName flagName;                                                                   // 0x01A4 (size: 0x8)
    bool NeedReset;                                                                   // 0x01AC (size: 0x1)

    void SetFacial();
    void IsRagdollMesh(bool& IsRagdoll);
    void SetDisableMovement(bool isDisable);
    void GetCharacterAnimInstance(class UAnimInstance*& AnimInstance);
    void InWaterFloat();
    void OnLoaded_D71E293A4C03681AA5FBFE9C20AF17F6(class UObject* Loaded);
    void OnBeginAction();
    void TickAction(float DeltaTime);
    void OnEndAction();
    void ShowEffect();
    void OnMontageBlendingOut(class UAnimMontage* Montage, bool bInterrupted);
    void OnCompleteInitializeParameter(class APalCharacter* InCharacter);
    void ApplyRagdoll();
    void ResetRagdoll();
    void ExecuteUbergraph_BP_ActionDeath_RevivePal(int32 EntryPoint);
}; // Size: 0x1AD

#endif
