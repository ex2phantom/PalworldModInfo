#ifndef UE4SS_SDK_BP_Action_Coop_ShortDash_HPP
#define UE4SS_SDK_BP_Action_Coop_ShortDash_HPP

class UBP_Action_Coop_ShortDash_C : public UPalActionBase
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0160 (size: 0x8)
    double DashTime;                                                                  // 0x0168 (size: 0x8)
    double DashDistance;                                                              // 0x0170 (size: 0x8)
    double MaxSpeedMultiply;                                                          // 0x0178 (size: 0x8)
    FName flagName;                                                                   // 0x0180 (size: 0x8)
    double RunAnimSpeed;                                                              // 0x0188 (size: 0x8)
    FTimerHandle DashTimerHandle;                                                     // 0x0190 (size: 0x8)
    class ABP_SkillEffectBase_C* DashSkillEffect;                                     // 0x0198 (size: 0x8)
    TSubclassOf<class ABP_SkillEffectBase_C> DashSkillEffectClass;                    // 0x01A0 (size: 0x8)
    bool IsEffectSpawnOnGround;                                                       // 0x01A8 (size: 0x1)
    bool IsInputMove;                                                                 // 0x01A9 (size: 0x1)
    class UPalCharacterMovementComponent* MoveComp;                                   // 0x01B0 (size: 0x8)
    class UPalPartnerSkillParameterComponent* PartnerComp;                            // 0x01B8 (size: 0x8)
    FShooterSpringCameraParameter CameraOffset;                                       // 0x01C0 (size: 0x28)

    void GetInputVector(FVector& InputVector);
    void EndCamera();
    void StartCamera();
    void CreateSkillEffect();
    void EndDash();
    void StartDash();
    void OnNotifyEnd_F59CA0A34B043DB94F3C379772CC702E(FName NotifyName);
    void OnNotifyBegin_F59CA0A34B043DB94F3C379772CC702E(FName NotifyName);
    void OnInterrupted_F59CA0A34B043DB94F3C379772CC702E(FName NotifyName);
    void OnBlendOut_F59CA0A34B043DB94F3C379772CC702E(FName NotifyName);
    void OnCompleted_F59CA0A34B043DB94F3C379772CC702E(FName NotifyName);
    void OnBeginAction();
    void OnEndAction();
    void ExecuteUbergraph_BP_Action_Coop_ShortDash(int32 EntryPoint);
}; // Size: 0x1E8

#endif
